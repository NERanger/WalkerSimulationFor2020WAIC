// Generated by gencpp from file cruiser_msgs/joint_test.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_JOINT_TEST_H
#define CRUISER_MSGS_MESSAGE_JOINT_TEST_H


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
struct joint_test_
{
  typedef joint_test_<ContainerAllocator> Type;

  joint_test_()
    : header()
    , position(0.0)
    , speed(0.0)  {
    }
  joint_test_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , position(0.0)
    , speed(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _position_type;
  _position_type position;

   typedef double _speed_type;
  _speed_type speed;





  typedef boost::shared_ptr< ::cruiser_msgs::joint_test_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::joint_test_<ContainerAllocator> const> ConstPtr;

}; // struct joint_test_

typedef ::cruiser_msgs::joint_test_<std::allocator<void> > joint_test;

typedef boost::shared_ptr< ::cruiser_msgs::joint_test > joint_testPtr;
typedef boost::shared_ptr< ::cruiser_msgs::joint_test const> joint_testConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::joint_test_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::joint_test_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cruiser_msgs::joint_test_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::joint_test_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::joint_test_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::joint_test_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::joint_test_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::joint_test_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::joint_test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "fe0269b8d1126523cfcd35f289bfd301";
  }

  static const char* value(const ::cruiser_msgs::joint_test_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xfe0269b8d1126523ULL;
  static const uint64_t static_value2 = 0xcfcd35f289bfd301ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::joint_test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/joint_test";
  }

  static const char* value(const ::cruiser_msgs::joint_test_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::joint_test_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
float64 position\n\
\n\
# Corresponding joints max speed\n\
float64 speed\n\
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

  static const char* value(const ::cruiser_msgs::joint_test_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::joint_test_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.position);
      stream.next(m.speed);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct joint_test_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::joint_test_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::joint_test_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "position: ";
    Printer<double>::stream(s, indent + "  ", v.position);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_JOINT_TEST_H
