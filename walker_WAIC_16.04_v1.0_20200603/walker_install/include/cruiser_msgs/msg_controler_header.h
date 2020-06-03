// Generated by gencpp from file cruiser_msgs/msg_controler_header.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_MSG_CONTROLER_HEADER_H
#define CRUISER_MSGS_MESSAGE_MSG_CONTROLER_HEADER_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace cruiser_msgs
{
template <class ContainerAllocator>
struct msg_controler_header_
{
  typedef msg_controler_header_<ContainerAllocator> Type;

  msg_controler_header_()
    : header()
    , datapacket()  {
    }
  msg_controler_header_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , datapacket(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _datapacket_type;
  _datapacket_type datapacket;





  typedef boost::shared_ptr< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> const> ConstPtr;

}; // struct msg_controler_header_

typedef ::cruiser_msgs::msg_controler_header_<std::allocator<void> > msg_controler_header;

typedef boost::shared_ptr< ::cruiser_msgs::msg_controler_header > msg_controler_headerPtr;
typedef boost::shared_ptr< ::cruiser_msgs::msg_controler_header const> msg_controler_headerConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::msg_controler_header_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'cruiser_msgs': ['/home/cjl/core_ws/walker_ws/walker2_motion_output/src/ros_common/cruiser_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> >
{
  static const char* value()
  {
    return "550613a4ae39cd5ce70b393463b493f5";
  }

  static const char* value(const ::cruiser_msgs::msg_controler_header_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x550613a4ae39cd5cULL;
  static const uint64_t static_value2 = 0xe70b393463b493f5ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/msg_controler_header";
  }

  static const char* value(const ::cruiser_msgs::msg_controler_header_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
string datapacket\n\
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
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::cruiser_msgs::msg_controler_header_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.datapacket);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct msg_controler_header_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::msg_controler_header_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::msg_controler_header_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "datapacket: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.datapacket);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_MSG_CONTROLER_HEADER_H
