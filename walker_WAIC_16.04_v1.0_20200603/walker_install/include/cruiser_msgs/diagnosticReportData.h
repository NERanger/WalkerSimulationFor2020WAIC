// Generated by gencpp from file cruiser_msgs/diagnosticReportData.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_DIAGNOSTICREPORTDATA_H
#define CRUISER_MSGS_MESSAGE_DIAGNOSTICREPORTDATA_H


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
struct diagnosticReportData_
{
  typedef diagnosticReportData_<ContainerAllocator> Type;

  diagnosticReportData_()
    : key(0)
    , data()  {
    }
  diagnosticReportData_(const ContainerAllocator& _alloc)
    : key(0)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef int16_t _key_type;
  _key_type key;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> const> ConstPtr;

}; // struct diagnosticReportData_

typedef ::cruiser_msgs::diagnosticReportData_<std::allocator<void> > diagnosticReportData;

typedef boost::shared_ptr< ::cruiser_msgs::diagnosticReportData > diagnosticReportDataPtr;
typedef boost::shared_ptr< ::cruiser_msgs::diagnosticReportData const> diagnosticReportDataConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "95276667cdb3126b4b795b4f8eee5706";
  }

  static const char* value(const ::cruiser_msgs::diagnosticReportData_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x95276667cdb3126bULL;
  static const uint64_t static_value2 = 0x4b795b4f8eee5706ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/diagnosticReportData";
  }

  static const char* value(const ::cruiser_msgs::diagnosticReportData_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#topic \"/cruiser/diag_report\"\n\
int16 key\n\
string data\n\
";
  }

  static const char* value(const ::cruiser_msgs::diagnosticReportData_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.key);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct diagnosticReportData_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::diagnosticReportData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::diagnosticReportData_<ContainerAllocator>& v)
  {
    s << indent << "key: ";
    Printer<int16_t>::stream(s, indent + "  ", v.key);
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_DIAGNOSTICREPORTDATA_H
