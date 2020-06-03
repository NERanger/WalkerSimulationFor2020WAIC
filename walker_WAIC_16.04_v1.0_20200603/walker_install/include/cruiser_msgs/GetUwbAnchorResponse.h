// Generated by gencpp from file cruiser_msgs/GetUwbAnchorResponse.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_GETUWBANCHORRESPONSE_H
#define CRUISER_MSGS_MESSAGE_GETUWBANCHORRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <cruiser_msgs/UwbAnchor.h>

namespace cruiser_msgs
{
template <class ContainerAllocator>
struct GetUwbAnchorResponse_
{
  typedef GetUwbAnchorResponse_<ContainerAllocator> Type;

  GetUwbAnchorResponse_()
    : anchor()  {
    }
  GetUwbAnchorResponse_(const ContainerAllocator& _alloc)
    : anchor(_alloc)  {
  (void)_alloc;
    }



   typedef  ::cruiser_msgs::UwbAnchor_<ContainerAllocator>  _anchor_type;
  _anchor_type anchor;





  typedef boost::shared_ptr< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetUwbAnchorResponse_

typedef ::cruiser_msgs::GetUwbAnchorResponse_<std::allocator<void> > GetUwbAnchorResponse;

typedef boost::shared_ptr< ::cruiser_msgs::GetUwbAnchorResponse > GetUwbAnchorResponsePtr;
typedef boost::shared_ptr< ::cruiser_msgs::GetUwbAnchorResponse const> GetUwbAnchorResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'cruiser_msgs': ['/home/cjl/core_ws/walker_ws/walker2_motion_output/src/ros_common/cruiser_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "5f4b95f067596a6c57f174e4ed94b6a5";
  }

  static const char* value(const ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x5f4b95f067596a6cULL;
  static const uint64_t static_value2 = 0x57f174e4ed94b6a5ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/GetUwbAnchorResponse";
  }

  static const char* value(const ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/UwbAnchor anchor\n\
\n\
\n\
================================================================================\n\
MSG: cruiser_msgs/UwbAnchor\n\
geometry_msgs/PoseStamped[] anchors\n\
\n\
================================================================================\n\
MSG: geometry_msgs/PoseStamped\n\
# A Pose with reference coordinate frame and timestamp\n\
Header header\n\
Pose pose\n\
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
\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of position and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.anchor);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetUwbAnchorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::GetUwbAnchorResponse_<ContainerAllocator>& v)
  {
    s << indent << "anchor: ";
    s << std::endl;
    Printer< ::cruiser_msgs::UwbAnchor_<ContainerAllocator> >::stream(s, indent + "  ", v.anchor);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_GETUWBANCHORRESPONSE_H
