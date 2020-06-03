// Generated by gencpp from file cruiser_msgs/GetUwbSupportedModeResponse.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_GETUWBSUPPORTEDMODERESPONSE_H
#define CRUISER_MSGS_MESSAGE_GETUWBSUPPORTEDMODERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace cruiser_msgs
{
template <class ContainerAllocator>
struct GetUwbSupportedModeResponse_
{
  typedef GetUwbSupportedModeResponse_<ContainerAllocator> Type;

  GetUwbSupportedModeResponse_()
    : supported(false)  {
    }
  GetUwbSupportedModeResponse_(const ContainerAllocator& _alloc)
    : supported(false)  {
  (void)_alloc;
    }



   typedef uint8_t _supported_type;
  _supported_type supported;





  typedef boost::shared_ptr< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetUwbSupportedModeResponse_

typedef ::cruiser_msgs::GetUwbSupportedModeResponse_<std::allocator<void> > GetUwbSupportedModeResponse;

typedef boost::shared_ptr< ::cruiser_msgs::GetUwbSupportedModeResponse > GetUwbSupportedModeResponsePtr;
typedef boost::shared_ptr< ::cruiser_msgs::GetUwbSupportedModeResponse const> GetUwbSupportedModeResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/kinetic/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/kinetic/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'cruiser_msgs': ['/home/cjl/core_ws/walker_ws/walker2_motion_output/src/ros_common/cruiser_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "270c37604fc5f878e32ff31167631898";
  }

  static const char* value(const ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x270c37604fc5f878ULL;
  static const uint64_t static_value2 = 0xe32ff31167631898ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/GetUwbSupportedModeResponse";
  }

  static const char* value(const ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool supported\n\
\n\
";
  }

  static const char* value(const ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.supported);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetUwbSupportedModeResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::GetUwbSupportedModeResponse_<ContainerAllocator>& v)
  {
    s << indent << "supported: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.supported);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_GETUWBSUPPORTEDMODERESPONSE_H
