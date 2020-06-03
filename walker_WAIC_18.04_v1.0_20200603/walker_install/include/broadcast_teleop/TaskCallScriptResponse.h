// Generated by gencpp from file broadcast_teleop/TaskCallScriptResponse.msg
// DO NOT EDIT!


#ifndef BROADCAST_TELEOP_MESSAGE_TASKCALLSCRIPTRESPONSE_H
#define BROADCAST_TELEOP_MESSAGE_TASKCALLSCRIPTRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace broadcast_teleop
{
template <class ContainerAllocator>
struct TaskCallScriptResponse_
{
  typedef TaskCallScriptResponse_<ContainerAllocator> Type;

  TaskCallScriptResponse_()
    : success(false)
    , message()  {
    }
  TaskCallScriptResponse_(const ContainerAllocator& _alloc)
    : success(false)
    , message(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _message_type;
  _message_type message;





  typedef boost::shared_ptr< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> const> ConstPtr;

}; // struct TaskCallScriptResponse_

typedef ::broadcast_teleop::TaskCallScriptResponse_<std::allocator<void> > TaskCallScriptResponse;

typedef boost::shared_ptr< ::broadcast_teleop::TaskCallScriptResponse > TaskCallScriptResponsePtr;
typedef boost::shared_ptr< ::broadcast_teleop::TaskCallScriptResponse const> TaskCallScriptResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator1> & lhs, const ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success &&
    lhs.message == rhs.message;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator1> & lhs, const ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace broadcast_teleop

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "937c9679a518e3a18d831e57125ea522";
  }

  static const char* value(const ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x937c9679a518e3a1ULL;
  static const uint64_t static_value2 = 0x8d831e57125ea522ULL;
};

template<class ContainerAllocator>
struct DataType< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "broadcast_teleop/TaskCallScriptResponse";
  }

  static const char* value(const ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"\n"
"bool success\n"
"\n"
"\n"
"string message\n"
;
  }

  static const char* value(const ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
      stream.next(m.message);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct TaskCallScriptResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::broadcast_teleop::TaskCallScriptResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
    s << indent << "message: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.message);
  }
};

} // namespace message_operations
} // namespace ros

#endif // BROADCAST_TELEOP_MESSAGE_TASKCALLSCRIPTRESPONSE_H
