cmake_minimum_required(VERSION 2.8)
project(hardware)
set(LIBNAME "m3hardware")

find_package(M3 COMPONENTS TOOLBOX)
find_package(M3rt)
include_directories(${M3RT_INCLUDE_DIR} ${M3_INCLUDE_DIR})

## First generate the python 
find_package(Protobuf REQUIRED)
SET(PROTOBUF_IMPORT_DIRS ${PROTOBUF_IMPORT_DIRS} ${M3RT_INCLUDE_DIR} ${M3_INCLUDE_DIR})
file(GLOB ProtoFiles "${CMAKE_CURRENT_SOURCE_DIR}/*.proto")
## Python protobufs
find_package(PythonLibs 2.7 REQUIRED)
find_package(PythonInterp REQUIRED) 
## Generate and copy the python protobuf
PROTOBUF_GENERATE_PYTHON(PySources ${CMAKE_CURRENT_BINARY_DIR} ${ProtoFiles}) 
add_custom_target(${LIBNAME}_python_protobuf_output ALL DEPENDS ${PySources}) # force the generation
#End Protobuf stuff


## YAML CPP 
find_package(PkgConfig REQUIRED)
#find_package(YamlCpp  REQUIRED)
pkg_check_modules(YAMLCPP REQUIRED yaml-cpp)
if(${YAMLCPP_VERSION} VERSION_LESS "0.5")
set_property(
   DIRECTORY
   PROPERTY COMPILE_DEFINITIONS YAMLCPP_03
   )
endif(${YAMLCPP_VERSION} VERSION_LESS "0.5")
link_directories(${YAMLCPP_LIBRARY_DIRS})

if(RTAI)
find_package(RTAI REQUIRED)
add_definitions(-D__RTAI__)

find_package(Boost REQUIRED)
find_package(Eigen3 3.0 REQUIRED)
find_package(Protobuf REQUIRED)
find_package(orocos_kdl REQUIRED)
#SET(M3_INCLUDE_DIR 
#	${CMAKE_CURRENT_SOURCE_DIR}/../..
#	${CMAKE_CURRENT_SOURCE_DIR}/../chains
#	${CMAKE_CURRENT_SOURCE_DIR}/../toolbox
#)

include_directories(${RTAI_INCLUDE_DIR} ${THREADS_INCLUDE_DIR} ${EIGEN3_INCLUDE_DIR} ${PROTOBUF_INCLUDE_DIR} ${orocos_kdl_INCLUDE_DIRS})


# Start Protobuf stuff
## Cpp protobufs
PROTOBUF_GENERATE_CPP(ProtoSources ProtoHeaders ${CMAKE_CURRENT_BINARY_DIR} ${ProtoFiles})
set_source_files_properties(${ProtoSources} ${ProtoHeaders} PROPERTIES
                            GENERATED TRUE)
add_custom_target(${LIBNAME}_protobuf_tmp  ALL DEPENDS ${ProtoSources}) # Force the re-generation

SET(LIBS ${RTAI_LIBRARIES}  pthread ${Boost_LIBRARIES} ${EIGEN3_LIBRARIES} ${M3RT_LIBRARIES} m3toolbox ${orocos_kdl_LIBRARIES})


set( ALL_SRCS 
actuator.cpp
actuator_ec.cpp
actuator_virtual.cpp
async_io.cpp
ctrl_simple.cpp
factory_proxy.cpp
joint.cpp
joint_virtual.cpp
joint_slave.cpp
joint_zlift_virtual.cpp
joint_zlift.cpp
joint_zlift_shm.cpp
led_matrix_ec.cpp
led_matrix_ec_shm.cpp
ledx2_ec.cpp
ledx2xn_ec.cpp
ledx2xn_ec_shm.cpp
loadx1.cpp
loadx1_ec.cpp
loadx6.cpp
loadx6_ec.cpp
loadx6_virtual.cpp
log_test.cpp
motor.cpp
pwr.cpp
pwr_ec.cpp
pwr_virtual.cpp
robot_monitor.cpp
sensor.cpp
tactile_pps22_ec.cpp
transmission.cpp

)
set( ALL_HDRS 
actuator_ec.h
actuator.h
actuator_virtual.h
async_io.h
ctrl_simple.h
joint.h
joint_virtual.h
joint_slave.h
joint_zlift.h
joint_zlift_virtual.h
joint_zlift_shm.h
joint_zlift_shm_sds.h
led_matrix_ec.h
led_matrix_ec_shm.h
led_matrix_ec_shm_sds.h
ledx2_ec.h
ledx2xn_ec.h
ledx2xn_ec_shm.h
ledx2xn_ec_shm_sds.h
loadx1_ec.h
loadx1.h
loadx6_ec.h
loadx6.h
loadx6_virtual.h
log_test.h
m3ec_def_meka.h
m3ec_pdo_v0_def.h
m3ec_pdo_v1_def.h
m3ec_pdo_v2_def.h
m3ec_pdo_v3_def.h
m3ec_pdo_v4_def.h
m3meka_ec_def.h
motor.h
pwr_ec.h
pwr.h
pwr_virtual.h
robot_monitor.h
sensor.h
tactile_pps22_ec.h
transmission.h

)
list(APPEND ALL_SRCS ${ProtoSources})

list(APPEND ALL_HDRS
${ProtoHeaders}
${ProtoFiles}
)

## Building
add_library(${LIBNAME} SHARED ${ALL_SRCS})
add_dependencies(${LIBNAME} m3toolbox)
target_link_libraries(${LIBNAME} ${LIBS})
#set_target_properties(${LIBNAME} PROPERTIES COMPILE_FLAGS "-I${CMAKE_BINARY_DIR}/src")

## Installing
install(TARGETS ${LIBNAME} DESTINATION lib)
install(FILES ${ALL_HDRS} DESTINATION include/m3/${PROJECT_NAME})

endif(RTAI)

execute_process ( 
   COMMAND ${PYTHON_EXECUTABLE} -c 
   	"import site, sys; sys.stdout.write(site.PREFIXES[-1])" 
   OUTPUT_VARIABLE PYTHON_PREFIX 
) 
file ( TO_CMAKE_PATH "${PYTHON_PREFIX}" PYTHON_PREFIX ) 
execute_process ( 
   COMMAND ${PYTHON_EXECUTABLE} -c 
   	"import site, sys; sys.stdout.write(site.getsitepackages()[-1])" 
   OUTPUT_VARIABLE PYTHON_SITE_DIR 
) 
file ( TO_CMAKE_PATH "${PYTHON_SITE_DIR}" PYTHON_SITE_DIR ) 
string ( REGEX REPLACE "^${PYTHON_PREFIX}/" "" 
   PYTHON_SITE_DIR "${PYTHON_SITE_DIR}" 
) 


install ( FILES ${PySources} 
   DESTINATION ${PYTHON_SITE_DIR}/m3
   COMPONENT library 
) 



