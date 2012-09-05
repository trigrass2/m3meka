/* Auto-generated by genmsg_cpp for file /home/meka/mekabot/ROS_API/m3meka/ros/m3ctrl_msgs/srv/M3LoadX6Status.srv */
#ifndef M3CTRL_MSGS_SERVICE_M3LOADX6STATUS_H
#define M3CTRL_MSGS_SERVICE_M3LOADX6STATUS_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"



#include "m3_msgs/M3BaseStatus.h"

namespace m3ctrl_msgs
{
template <class ContainerAllocator>
struct M3LoadX6StatusRequest_ {
  typedef M3LoadX6StatusRequest_<ContainerAllocator> Type;

  M3LoadX6StatusRequest_()
  : request(0)
  {
  }

  M3LoadX6StatusRequest_(const ContainerAllocator& _alloc)
  : request(0)
  {
  }

  typedef int32_t _request_type;
  int32_t request;


  typedef boost::shared_ptr< ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct M3LoadX6StatusRequest
typedef  ::m3ctrl_msgs::M3LoadX6StatusRequest_<std::allocator<void> > M3LoadX6StatusRequest;

typedef boost::shared_ptr< ::m3ctrl_msgs::M3LoadX6StatusRequest> M3LoadX6StatusRequestPtr;
typedef boost::shared_ptr< ::m3ctrl_msgs::M3LoadX6StatusRequest const> M3LoadX6StatusRequestConstPtr;


template <class ContainerAllocator>
struct M3LoadX6StatusResponse_ {
  typedef M3LoadX6StatusResponse_<ContainerAllocator> Type;

  M3LoadX6StatusResponse_()
  : base()
  , wrench()
  , adc_ext_0(0.0)
  , adc_ext_1(0.0)
  , adc_ext_2(0.0)
  , dig_ext_0(0.0)
  {
    wrench.assign(0.0);
  }

  M3LoadX6StatusResponse_(const ContainerAllocator& _alloc)
  : base(_alloc)
  , wrench()
  , adc_ext_0(0.0)
  , adc_ext_1(0.0)
  , adc_ext_2(0.0)
  , dig_ext_0(0.0)
  {
    wrench.assign(0.0);
  }

  typedef  ::m3_msgs::M3BaseStatus_<ContainerAllocator>  _base_type;
   ::m3_msgs::M3BaseStatus_<ContainerAllocator>  base;

  typedef boost::array<float, 6>  _wrench_type;
  boost::array<float, 6>  wrench;

  typedef float _adc_ext_0_type;
  float adc_ext_0;

  typedef float _adc_ext_1_type;
  float adc_ext_1;

  typedef float _adc_ext_2_type;
  float adc_ext_2;

  typedef float _dig_ext_0_type;
  float dig_ext_0;


  typedef boost::shared_ptr< ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct M3LoadX6StatusResponse
typedef  ::m3ctrl_msgs::M3LoadX6StatusResponse_<std::allocator<void> > M3LoadX6StatusResponse;

typedef boost::shared_ptr< ::m3ctrl_msgs::M3LoadX6StatusResponse> M3LoadX6StatusResponsePtr;
typedef boost::shared_ptr< ::m3ctrl_msgs::M3LoadX6StatusResponse const> M3LoadX6StatusResponseConstPtr;

struct M3LoadX6Status
{

typedef M3LoadX6StatusRequest Request;
typedef M3LoadX6StatusResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct M3LoadX6Status
} // namespace m3ctrl_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "650f0ccd41c8f8d53ada80be6ddde434";
  }

  static const char* value(const  ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x650f0ccd41c8f8d5ULL;
  static const uint64_t static_value2 = 0x3ada80be6ddde434ULL;
};

template<class ContainerAllocator>
struct DataType< ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3LoadX6StatusRequest";
  }

  static const char* value(const  ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 request\n\
\n\
";
  }

  static const char* value(const  ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "2990baf3156c3c6b74caf36efa6995dd";
  }

  static const char* value(const  ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x2990baf3156c3c6bULL;
  static const uint64_t static_value2 = 0x74caf36efa6995ddULL;
};

template<class ContainerAllocator>
struct DataType< ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3LoadX6StatusResponse";
  }

  static const char* value(const  ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3_msgs/M3BaseStatus base\n\
float32[6] wrench\n\
float32 adc_ext_0\n\
float32 adc_ext_1\n\
float32 adc_ext_2\n\
float32 dig_ext_0\n\
\n\
\n\
================================================================================\n\
MSG: m3_msgs/M3BaseStatus\n\
string name\n\
uint8 state\n\
int64 timestamp\n\
string rate\n\
string version\n\
\n\
\n\
";
  }

  static const char* value(const  ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.request);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct M3LoadX6StatusRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.base);
    stream.next(m.wrench);
    stream.next(m.adc_ext_0);
    stream.next(m.adc_ext_1);
    stream.next(m.adc_ext_2);
    stream.next(m.dig_ext_0);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct M3LoadX6StatusResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<m3ctrl_msgs::M3LoadX6Status> {
  static const char* value() 
  {
    return "967558453e196f040b12e56469a00597";
  }

  static const char* value(const m3ctrl_msgs::M3LoadX6Status&) { return value(); } 
};

template<>
struct DataType<m3ctrl_msgs::M3LoadX6Status> {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3LoadX6Status";
  }

  static const char* value(const m3ctrl_msgs::M3LoadX6Status&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "967558453e196f040b12e56469a00597";
  }

  static const char* value(const m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3LoadX6Status";
  }

  static const char* value(const m3ctrl_msgs::M3LoadX6StatusRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "967558453e196f040b12e56469a00597";
  }

  static const char* value(const m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3LoadX6Status";
  }

  static const char* value(const m3ctrl_msgs::M3LoadX6StatusResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // M3CTRL_MSGS_SERVICE_M3LOADX6STATUS_H

