// Generated by gencpp from file cruiser_msgs/cruiserLedActionRequest.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISERLEDACTIONREQUEST_H
#define CRUISER_MSGS_MESSAGE_CRUISERLEDACTIONREQUEST_H


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
struct cruiserLedActionRequest_
{
  typedef cruiserLedActionRequest_<ContainerAllocator> Type;

  cruiserLedActionRequest_()
    : type(0)
    , data0(0)
    , data1(0)
    , data2(0)
    , max_times(0)  {
    }
  cruiserLedActionRequest_(const ContainerAllocator& _alloc)
    : type(0)
    , data0(0)
    , data1(0)
    , data2(0)
    , max_times(0)  {
  (void)_alloc;
    }



   typedef uint32_t _type_type;
  _type_type type;

   typedef uint32_t _data0_type;
  _data0_type data0;

   typedef uint32_t _data1_type;
  _data1_type data1;

   typedef uint32_t _data2_type;
  _data2_type data2;

   typedef uint32_t _max_times_type;
  _max_times_type max_times;





  typedef boost::shared_ptr< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct cruiserLedActionRequest_

typedef ::cruiser_msgs::cruiserLedActionRequest_<std::allocator<void> > cruiserLedActionRequest;

typedef boost::shared_ptr< ::cruiser_msgs::cruiserLedActionRequest > cruiserLedActionRequestPtr;
typedef boost::shared_ptr< ::cruiser_msgs::cruiserLedActionRequest const> cruiserLedActionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "89522dd3d5a7af6022d0717e6853a943";
  }

  static const char* value(const ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x89522dd3d5a7af60ULL;
  static const uint64_t static_value2 = 0x22d0717e6853a943ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/cruiserLedActionRequest";
  }

  static const char* value(const ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 type\n\
uint32 data0\n\
uint32 data1\n\
uint32 data2\n\
uint32 max_times\n\
";
  }

  static const char* value(const ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.data0);
      stream.next(m.data1);
      stream.next(m.data2);
      stream.next(m.max_times);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cruiserLedActionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::cruiserLedActionRequest_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.type);
    s << indent << "data0: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.data0);
    s << indent << "data1: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.data1);
    s << indent << "data2: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.data2);
    s << indent << "max_times: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.max_times);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISERLEDACTIONREQUEST_H
