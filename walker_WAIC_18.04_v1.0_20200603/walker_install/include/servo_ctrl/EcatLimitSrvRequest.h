// Generated by gencpp from file servo_ctrl/EcatLimitSrvRequest.msg
// DO NOT EDIT!


#ifndef SERVO_CTRL_MESSAGE_ECATLIMITSRVREQUEST_H
#define SERVO_CTRL_MESSAGE_ECATLIMITSRVREQUEST_H


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
struct EcatLimitSrvRequest_
{
  typedef EcatLimitSrvRequest_<ContainerAllocator> Type;

  EcatLimitSrvRequest_()
    : cmd()
    , servo()
    , mode()
    , enable(false)
    , min(0.0)
    , max(0.0)  {
    }
  EcatLimitSrvRequest_(const ContainerAllocator& _alloc)
    : cmd(_alloc)
    , servo(_alloc)
    , mode(_alloc)
    , enable(false)
    , min(0.0)
    , max(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _cmd_type;
  _cmd_type cmd;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _servo_type;
  _servo_type servo;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mode_type;
  _mode_type mode;

   typedef uint8_t _enable_type;
  _enable_type enable;

   typedef float _min_type;
  _min_type min;

   typedef float _max_type;
  _max_type max;





  typedef boost::shared_ptr< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> const> ConstPtr;

}; // struct EcatLimitSrvRequest_

typedef ::servo_ctrl::EcatLimitSrvRequest_<std::allocator<void> > EcatLimitSrvRequest;

typedef boost::shared_ptr< ::servo_ctrl::EcatLimitSrvRequest > EcatLimitSrvRequestPtr;
typedef boost::shared_ptr< ::servo_ctrl::EcatLimitSrvRequest const> EcatLimitSrvRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator1> & lhs, const ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator2> & rhs)
{
  return lhs.cmd == rhs.cmd &&
    lhs.servo == rhs.servo &&
    lhs.mode == rhs.mode &&
    lhs.enable == rhs.enable &&
    lhs.min == rhs.min &&
    lhs.max == rhs.max;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator1> & lhs, const ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace servo_ctrl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "929e3455058e059e9e07f04b022c3edf";
  }

  static const char* value(const ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x929e3455058e059eULL;
  static const uint64_t static_value2 = 0x9e07f04b022c3edfULL;
};

template<class ContainerAllocator>
struct DataType< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "servo_ctrl/EcatLimitSrvRequest";
  }

  static const char* value(const ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string cmd\n"
"\n"
"\n"
"string servo\n"
"\n"
"\n"
"string mode\n"
"\n"
"\n"
"bool enable\n"
"\n"
"\n"
"float32 min\n"
"float32 max\n"
;
  }

  static const char* value(const ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cmd);
      stream.next(m.servo);
      stream.next(m.mode);
      stream.next(m.enable);
      stream.next(m.min);
      stream.next(m.max);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct EcatLimitSrvRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::servo_ctrl::EcatLimitSrvRequest_<ContainerAllocator>& v)
  {
    s << indent << "cmd: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.cmd);
    s << indent << "servo: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.servo);
    s << indent << "mode: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mode);
    s << indent << "enable: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enable);
    s << indent << "min: ";
    Printer<float>::stream(s, indent + "  ", v.min);
    s << indent << "max: ";
    Printer<float>::stream(s, indent + "  ", v.max);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVO_CTRL_MESSAGE_ECATLIMITSRVREQUEST_H