// Generated by gencpp from file cruiser_msgs/PowerSettingRequest.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_POWERSETTINGREQUEST_H
#define CRUISER_MSGS_MESSAGE_POWERSETTINGREQUEST_H


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
struct PowerSettingRequest_
{
  typedef PowerSettingRequest_<ContainerAllocator> Type;

  PowerSettingRequest_()
    : cmd(0)
    , year(0)
    , month(0)
    , day(0)
    , hour(0)
    , min(0)
    , sec(0)
    , timerEnable(false)
    , fullPowerOn(false)
    , flag(0)  {
    }
  PowerSettingRequest_(const ContainerAllocator& _alloc)
    : cmd(0)
    , year(0)
    , month(0)
    , day(0)
    , hour(0)
    , min(0)
    , sec(0)
    , timerEnable(false)
    , fullPowerOn(false)
    , flag(0)  {
  (void)_alloc;
    }



   typedef uint8_t _cmd_type;
  _cmd_type cmd;

   typedef uint16_t _year_type;
  _year_type year;

   typedef uint8_t _month_type;
  _month_type month;

   typedef uint8_t _day_type;
  _day_type day;

   typedef uint8_t _hour_type;
  _hour_type hour;

   typedef uint8_t _min_type;
  _min_type min;

   typedef uint8_t _sec_type;
  _sec_type sec;

   typedef uint8_t _timerEnable_type;
  _timerEnable_type timerEnable;

   typedef uint8_t _fullPowerOn_type;
  _fullPowerOn_type fullPowerOn;

   typedef uint8_t _flag_type;
  _flag_type flag;





  typedef boost::shared_ptr< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct PowerSettingRequest_

typedef ::cruiser_msgs::PowerSettingRequest_<std::allocator<void> > PowerSettingRequest;

typedef boost::shared_ptr< ::cruiser_msgs::PowerSettingRequest > PowerSettingRequestPtr;
typedef boost::shared_ptr< ::cruiser_msgs::PowerSettingRequest const> PowerSettingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b8ab82471068ec9bf0220a528179c6bc";
  }

  static const char* value(const ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb8ab82471068ec9bULL;
  static const uint64_t static_value2 = 0xf0220a528179c6bcULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/PowerSettingRequest";
  }

  static const char* value(const ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 cmd\n\
uint16 year\n\
uint8 month\n\
uint8 day\n\
uint8 hour\n\
uint8 min\n\
uint8 sec\n\
bool timerEnable\n\
bool fullPowerOn\n\
uint8 flag\n\
\n\
";
  }

  static const char* value(const ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
      stream.next(m.year);
      stream.next(m.month);
      stream.next(m.day);
      stream.next(m.hour);
      stream.next(m.min);
      stream.next(m.sec);
      stream.next(m.timerEnable);
      stream.next(m.fullPowerOn);
      stream.next(m.flag);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PowerSettingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::PowerSettingRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.cmd);
    s << indent << "year: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.year);
    s << indent << "month: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.month);
    s << indent << "day: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.day);
    s << indent << "hour: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.hour);
    s << indent << "min: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.min);
    s << indent << "sec: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sec);
    s << indent << "timerEnable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.timerEnable);
    s << indent << "fullPowerOn: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fullPowerOn);
    s << indent << "flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flag);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_POWERSETTINGREQUEST_H