/* Auto-generated by genmsg_cpp for file /home/meka/mekabot/ROS_API/m3meka/ros/m3ctrl_msgs/srv/M3JointArrayParam.srv */
#ifndef M3CTRL_MSGS_SERVICE_M3JOINTARRAYPARAM_H
#define M3CTRL_MSGS_SERVICE_M3JOINTARRAYPARAM_H
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




namespace m3ctrl_msgs
{
template <class ContainerAllocator>
struct M3JointArrayParamRequest_ {
  typedef M3JointArrayParamRequest_<ContainerAllocator> Type;

  M3JointArrayParamRequest_()
  : request(0)
  {
  }

  M3JointArrayParamRequest_(const ContainerAllocator& _alloc)
  : request(0)
  {
  }

  typedef int32_t _request_type;
  int32_t request;


  typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct M3JointArrayParamRequest
typedef  ::m3ctrl_msgs::M3JointArrayParamRequest_<std::allocator<void> > M3JointArrayParamRequest;

typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayParamRequest> M3JointArrayParamRequestPtr;
typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayParamRequest const> M3JointArrayParamRequestConstPtr;


template <class ContainerAllocator>
struct M3JointArrayParamResponse_ {
  typedef M3JointArrayParamResponse_<ContainerAllocator> Type;

  M3JointArrayParamResponse_()
  : response(0)
  {
  }

  M3JointArrayParamResponse_(const ContainerAllocator& _alloc)
  : response(0)
  {
  }

  typedef int32_t _response_type;
  int32_t response;


  typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct M3JointArrayParamResponse
typedef  ::m3ctrl_msgs::M3JointArrayParamResponse_<std::allocator<void> > M3JointArrayParamResponse;

typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayParamResponse> M3JointArrayParamResponsePtr;
typedef boost::shared_ptr< ::m3ctrl_msgs::M3JointArrayParamResponse const> M3JointArrayParamResponseConstPtr;

struct M3JointArrayParam
{

typedef M3JointArrayParamRequest Request;
typedef M3JointArrayParamResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct M3JointArrayParam
} // namespace m3ctrl_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "650f0ccd41c8f8d53ada80be6ddde434";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x650f0ccd41c8f8d5ULL;
  static const uint64_t static_value2 = 0x3ada80be6ddde434ULL;
};

template<class ContainerAllocator>
struct DataType< ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointArrayParamRequest";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 request\n\
\n\
";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f45f68e2feefb1307598e828e260b7d7";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf45f68e2feefb130ULL;
  static const uint64_t static_value2 = 0x7598e828e260b7d7ULL;
};

template<class ContainerAllocator>
struct DataType< ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointArrayParamResponse";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "int32 response\n\
\n\
";
  }

  static const char* value(const  ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.request);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct M3JointArrayParamRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.response);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct M3JointArrayParamResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<m3ctrl_msgs::M3JointArrayParam> {
  static const char* value() 
  {
    return "51edd9dfd50014fde2b589cbf77706aa";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayParam&) { return value(); } 
};

template<>
struct DataType<m3ctrl_msgs::M3JointArrayParam> {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointArrayParam";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayParam&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "51edd9dfd50014fde2b589cbf77706aa";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointArrayParam";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayParamRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "51edd9dfd50014fde2b589cbf77706aa";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "m3ctrl_msgs/M3JointArrayParam";
  }

  static const char* value(const m3ctrl_msgs::M3JointArrayParamResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // M3CTRL_MSGS_SERVICE_M3JOINTARRAYPARAM_H

