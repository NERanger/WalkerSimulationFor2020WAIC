// Generated by gencpp from file cruiser_msgs/cruiserPowerCmd.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISERPOWERCMD_H
#define CRUISER_MSGS_MESSAGE_CRUISERPOWERCMD_H


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
struct cruiserPowerCmd_
{
  typedef cruiserPowerCmd_<ContainerAllocator> Type;

  cruiserPowerCmd_()
    : power_cmd(0)  {
    }
  cruiserPowerCmd_(const ContainerAllocator& _alloc)
    : power_cmd(0)  {
  (void)_alloc;
    }



   typedef uint32_t _power_cmd_type;
  _power_cmd_type power_cmd;





  typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> const> ConstPtr;

}; // struct cruiserPowerCmd_

typedef ::cruiser_msgs::cruiserPowerCmd_<std::allocator<void> > cruiserPowerCmd;

typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerCmd > cruiserPowerCmdPtr;
typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerCmd const> cruiserPowerCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "095e92debc6bcb5e7317d4b6d9d2054c";
  }

  static const char* value(const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x095e92debc6bcb5eULL;
  static const uint64_t static_value2 = 0x7317d4b6d9d2054cULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/cruiserPowerCmd";
  }

  static const char* value(const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 power_cmd\n\
\n\
\n\
";
  }

  static const char* value(const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.power_cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cruiserPowerCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator>& v)
  {
    s << indent << "power_cmd: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.power_cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISERPOWERCMD_H
