// Generated by gencpp from file cruiser_msgs/cruiserPowerActionRequest.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISERPOWERACTIONREQUEST_H
#define CRUISER_MSGS_MESSAGE_CRUISERPOWERACTIONREQUEST_H


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
struct cruiserPowerActionRequest_
{
  typedef cruiserPowerActionRequest_<ContainerAllocator> Type;

  cruiserPowerActionRequest_()
    : dev_name(0)
    , on_off(0)  {
    }
  cruiserPowerActionRequest_(const ContainerAllocator& _alloc)
    : dev_name(0)
    , on_off(0)  {
  (void)_alloc;
    }



   typedef uint32_t _dev_name_type;
  _dev_name_type dev_name;

   typedef uint32_t _on_off_type;
  _on_off_type on_off;





  typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct cruiserPowerActionRequest_

typedef ::cruiser_msgs::cruiserPowerActionRequest_<std::allocator<void> > cruiserPowerActionRequest;

typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerActionRequest > cruiserPowerActionRequestPtr;
typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerActionRequest const> cruiserPowerActionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d87e4d84452162181a760885dc9110d4";
  }

  static const char* value(const ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd87e4d8445216218ULL;
  static const uint64_t static_value2 = 0x1a760885dc9110d4ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/cruiserPowerActionRequest";
  }

  static const char* value(const ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 dev_name\n\
uint32 on_off\n\
";
  }

  static const char* value(const ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dev_name);
      stream.next(m.on_off);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cruiserPowerActionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::cruiserPowerActionRequest_<ContainerAllocator>& v)
  {
    s << indent << "dev_name: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.dev_name);
    s << indent << "on_off: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.on_off);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISERPOWERACTIONREQUEST_H
