/* Auto-generated by genmsg_cpp for file /home/meka/mekabot/LED_MOUTH/m3ens/ros/shm_led_mouth/msg/LEDMatrixCmd.msg */
#ifndef SHM_LED_MOUTH_MESSAGE_LEDMATRIXCMD_H
#define SHM_LED_MOUTH_MESSAGE_LEDMATRIXCMD_H
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

#include "std_msgs/Header.h"
#include "shm_led_mouth/LEDMatrixRow.h"

namespace shm_led_mouth
{
template <class ContainerAllocator>
struct LEDMatrixCmd_ {
  typedef LEDMatrixCmd_<ContainerAllocator> Type;

  LEDMatrixCmd_()
  : header()
  , enable(0)
  , row()
  {
  }

  LEDMatrixCmd_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , enable(0)
  , row(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef uint8_t _enable_type;
  uint8_t enable;

  typedef std::vector< ::shm_led_mouth::LEDMatrixRow_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::shm_led_mouth::LEDMatrixRow_<ContainerAllocator> >::other >  _row_type;
  std::vector< ::shm_led_mouth::LEDMatrixRow_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::shm_led_mouth::LEDMatrixRow_<ContainerAllocator> >::other >  row;


  typedef boost::shared_ptr< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LEDMatrixCmd
typedef  ::shm_led_mouth::LEDMatrixCmd_<std::allocator<void> > LEDMatrixCmd;

typedef boost::shared_ptr< ::shm_led_mouth::LEDMatrixCmd> LEDMatrixCmdPtr;
typedef boost::shared_ptr< ::shm_led_mouth::LEDMatrixCmd const> LEDMatrixCmdConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace shm_led_mouth

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e6c5973b6a371aea4cb4dbb5179512f6";
  }

  static const char* value(const  ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe6c5973b6a371aeaULL;
  static const uint64_t static_value2 = 0x4cb4dbb5179512f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> > {
  static const char* value() 
  {
    return "shm_led_mouth/LEDMatrixCmd";
  }

  static const char* value(const  ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> > {
  static const char* value() 
  {
    return "Header header\n\
uint8 enable\n\
LEDMatrixRow[] row\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: shm_led_mouth/LEDMatrixRow\n\
LEDMatrixRGB column\n\
================================================================================\n\
MSG: shm_led_mouth/LEDMatrixRGB\n\
uint32 r\n\
uint32 g\n\
uint32 b\n\
";
  }

  static const char* value(const  ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.enable);
    stream.next(m.row);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LEDMatrixCmd_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::shm_led_mouth::LEDMatrixCmd_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
    s << indent << "row[]" << std::endl;
    for (size_t i = 0; i < v.row.size(); ++i)
    {
      s << indent << "  row[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::shm_led_mouth::LEDMatrixRow_<ContainerAllocator> >::stream(s, indent + "    ", v.row[i]);
    }
  }
};


} // namespace message_operations
} // namespace ros

#endif // SHM_LED_MOUTH_MESSAGE_LEDMATRIXCMD_H

