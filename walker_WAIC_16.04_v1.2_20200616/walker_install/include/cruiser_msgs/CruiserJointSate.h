// Generated by gencpp from file cruiser_msgs/CruiserJointSate.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISERJOINTSATE_H
#define CRUISER_MSGS_MESSAGE_CRUISERJOINTSATE_H


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
struct CruiserJointSate_
{
  typedef CruiserJointSate_<ContainerAllocator> Type;

  CruiserJointSate_()
    : joint_num(0)
    , name()
    , jointIndex()
    , position()
    , speed()
    , duration()  {
    }
  CruiserJointSate_(const ContainerAllocator& _alloc)
    : joint_num(0)
    , name(_alloc)
    , jointIndex(_alloc)
    , position(_alloc)
    , speed(_alloc)
    , duration(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _joint_num_type;
  _joint_num_type joint_num;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _name_type;
  _name_type name;

   typedef std::vector<uint32_t, typename ContainerAllocator::template rebind<uint32_t>::other >  _jointIndex_type;
  _jointIndex_type jointIndex;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _position_type;
  _position_type position;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _speed_type;
  _speed_type speed;

   typedef std::vector<int64_t, typename ContainerAllocator::template rebind<int64_t>::other >  _duration_type;
  _duration_type duration;





  typedef boost::shared_ptr< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> const> ConstPtr;

}; // struct CruiserJointSate_

typedef ::cruiser_msgs::CruiserJointSate_<std::allocator<void> > CruiserJointSate;

typedef boost::shared_ptr< ::cruiser_msgs::CruiserJointSate > CruiserJointSatePtr;
typedef boost::shared_ptr< ::cruiser_msgs::CruiserJointSate const> CruiserJointSateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "892654ee59978ac7b005cc792fc55ba6";
  }

  static const char* value(const ::cruiser_msgs::CruiserJointSate_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x892654ee59978ac7ULL;
  static const uint64_t static_value2 = 0xb005cc792fc55ba6ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/CruiserJointSate";
  }

  static const char* value(const ::cruiser_msgs::CruiserJointSate_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 joint_num\n\
\n\
# Joints name to control in array\n\
# example - [\"LShoudlerRoll\", \"NeckYaw\", \"NeckPitch\"]\n\
string[] name\n\
\n\
# Joints index to control in array\n\
uint32[] jointIndex\n\
\n\
# Corresponding joints postion\n\
# unit - radian;\n\
# example - [0.54, 1.22, 1.39]\n\
float64[] position\n\
\n\
# Corresponding joints max speed\n\
float64[] speed\n\
\n\
# Corresponding joints motion time\n\
# unit - millisecond\n\
int64[] duration\n\
\n\
";
  }

  static const char* value(const ::cruiser_msgs::CruiserJointSate_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_num);
      stream.next(m.name);
      stream.next(m.jointIndex);
      stream.next(m.position);
      stream.next(m.speed);
      stream.next(m.duration);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CruiserJointSate_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::CruiserJointSate_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::CruiserJointSate_<ContainerAllocator>& v)
  {
    s << indent << "joint_num: ";
    Printer<int16_t>::stream(s, indent + "  ", v.joint_num);
    s << indent << "name[]" << std::endl;
    for (size_t i = 0; i < v.name.size(); ++i)
    {
      s << indent << "  name[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name[i]);
    }
    s << indent << "jointIndex[]" << std::endl;
    for (size_t i = 0; i < v.jointIndex.size(); ++i)
    {
      s << indent << "  jointIndex[" << i << "]: ";
      Printer<uint32_t>::stream(s, indent + "  ", v.jointIndex[i]);
    }
    s << indent << "position[]" << std::endl;
    for (size_t i = 0; i < v.position.size(); ++i)
    {
      s << indent << "  position[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.position[i]);
    }
    s << indent << "speed[]" << std::endl;
    for (size_t i = 0; i < v.speed.size(); ++i)
    {
      s << indent << "  speed[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.speed[i]);
    }
    s << indent << "duration[]" << std::endl;
    for (size_t i = 0; i < v.duration.size(); ++i)
    {
      s << indent << "  duration[" << i << "]: ";
      Printer<int64_t>::stream(s, indent + "  ", v.duration[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISERJOINTSATE_H