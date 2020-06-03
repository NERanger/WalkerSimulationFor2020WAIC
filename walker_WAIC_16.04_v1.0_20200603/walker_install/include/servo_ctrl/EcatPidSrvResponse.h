// Generated by gencpp from file servo_ctrl/EcatPidSrvResponse.msg
// DO NOT EDIT!


#ifndef SERVO_CTRL_MESSAGE_ECATPIDSRVRESPONSE_H
#define SERVO_CTRL_MESSAGE_ECATPIDSRVRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace servo_ctrl
{
template <class ContainerAllocator>
struct EcatPidSrvResponse_
{
  typedef EcatPidSrvResponse_<ContainerAllocator> Type;

  EcatPidSrvResponse_()
    : kp(0)
    , ki(0)
    , kd(0)  {
    }
  EcatPidSrvResponse_(const ContainerAllocator& _alloc)
    : kp(0)
    , ki(0)
    , kd(0)  {
  (void)_alloc;
    }



   typedef int16_t _kp_type;
  _kp_type kp;

   typedef int16_t _ki_type;
  _ki_type ki;

   typedef int16_t _kd_type;
  _kd_type kd;





  typedef boost::shared_ptr< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> const> ConstPtr;

}; // struct EcatPidSrvResponse_

typedef ::servo_ctrl::EcatPidSrvResponse_<std::allocator<void> > EcatPidSrvResponse;

typedef boost::shared_ptr< ::servo_ctrl::EcatPidSrvResponse > EcatPidSrvResponsePtr;
typedef boost::shared_ptr< ::servo_ctrl::EcatPidSrvResponse const> EcatPidSrvResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace servo_ctrl

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "71e3df70a675c115e42712a36e93b90f";
  }

  static const char* value(const ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x71e3df70a675c115ULL;
  static const uint64_t static_value2 = 0xe42712a36e93b90fULL;
};

template<class ContainerAllocator>
struct DataType< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "servo_ctrl/EcatPidSrvResponse";
  }

  static const char* value(const ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int16 kp\n\
int16 ki\n\
int16 kd\n\
\n\
";
  }

  static const char* value(const ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.kp);
      stream.next(m.ki);
      stream.next(m.kd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EcatPidSrvResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::servo_ctrl::EcatPidSrvResponse_<ContainerAllocator>& v)
  {
    s << indent << "kp: ";
    Printer<int16_t>::stream(s, indent + "  ", v.kp);
    s << indent << "ki: ";
    Printer<int16_t>::stream(s, indent + "  ", v.ki);
    s << indent << "kd: ";
    Printer<int16_t>::stream(s, indent + "  ", v.kd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVO_CTRL_MESSAGE_ECATPIDSRVRESPONSE_H
