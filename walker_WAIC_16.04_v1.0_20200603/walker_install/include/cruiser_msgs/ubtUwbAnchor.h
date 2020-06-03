// Generated by gencpp from file cruiser_msgs/ubtUwbAnchor.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_UBTUWBANCHOR_H
#define CRUISER_MSGS_MESSAGE_UBTUWBANCHOR_H


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
struct ubtUwbAnchor_
{
  typedef ubtUwbAnchor_<ContainerAllocator> Type;

  ubtUwbAnchor_()
    : header()
    , id()
    , distance()
    , rQua()
    , rssi()
    , fpRssi()  {
    }
  ubtUwbAnchor_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , id(_alloc)
    , distance(_alloc)
    , rQua(_alloc)
    , rssi(_alloc)
    , fpRssi(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _id_type;
  _id_type id;

   typedef std::vector<uint16_t, typename ContainerAllocator::template rebind<uint16_t>::other >  _distance_type;
  _distance_type distance;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _rQua_type;
  _rQua_type rQua;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _rssi_type;
  _rssi_type rssi;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _fpRssi_type;
  _fpRssi_type fpRssi;





  typedef boost::shared_ptr< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> const> ConstPtr;

}; // struct ubtUwbAnchor_

typedef ::cruiser_msgs::ubtUwbAnchor_<std::allocator<void> > ubtUwbAnchor;

typedef boost::shared_ptr< ::cruiser_msgs::ubtUwbAnchor > ubtUwbAnchorPtr;
typedef boost::shared_ptr< ::cruiser_msgs::ubtUwbAnchor const> ubtUwbAnchorConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ad5f07f4e526d0fa73b93b5ba13bceb5";
  }

  static const char* value(const ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xad5f07f4e526d0faULL;
  static const uint64_t static_value2 = 0x73b93b5ba13bceb5ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/ubtUwbAnchor";
  }

  static const char* value(const ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
uint16[] id\n\
uint16[] distance\n\
float32[] rQua\n\
float32[] rssi\n\
float32[] fpRssi\n\
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

  static const char* value(const ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.id);
      stream.next(m.distance);
      stream.next(m.rQua);
      stream.next(m.rssi);
      stream.next(m.fpRssi);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ubtUwbAnchor_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::ubtUwbAnchor_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "id[]" << std::endl;
    for (size_t i = 0; i < v.id.size(); ++i)
    {
      s << indent << "  id[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.id[i]);
    }
    s << indent << "distance[]" << std::endl;
    for (size_t i = 0; i < v.distance.size(); ++i)
    {
      s << indent << "  distance[" << i << "]: ";
      Printer<uint16_t>::stream(s, indent + "  ", v.distance[i]);
    }
    s << indent << "rQua[]" << std::endl;
    for (size_t i = 0; i < v.rQua.size(); ++i)
    {
      s << indent << "  rQua[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.rQua[i]);
    }
    s << indent << "rssi[]" << std::endl;
    for (size_t i = 0; i < v.rssi.size(); ++i)
    {
      s << indent << "  rssi[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.rssi[i]);
    }
    s << indent << "fpRssi[]" << std::endl;
    for (size_t i = 0; i < v.fpRssi.size(); ++i)
    {
      s << indent << "  fpRssi[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.fpRssi[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_UBTUWBANCHOR_H
