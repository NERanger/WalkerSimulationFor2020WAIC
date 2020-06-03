// Generated by gencpp from file servo_ctrl/SetFtOffsetRequest.msg
// DO NOT EDIT!


#ifndef SERVO_CTRL_MESSAGE_SETFTOFFSETREQUEST_H
#define SERVO_CTRL_MESSAGE_SETFTOFFSETREQUEST_H


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
struct SetFtOffsetRequest_
{
  typedef SetFtOffsetRequest_<ContainerAllocator> Type;

  SetFtOffsetRequest_()
    : ftId()
    , fx(0)
    , fy(0)
    , fz(0)
    , mx(0)
    , my(0)
    , mz(0)  {
    }
  SetFtOffsetRequest_(const ContainerAllocator& _alloc)
    : ftId(_alloc)
    , fx(0)
    , fy(0)
    , fz(0)
    , mx(0)
    , my(0)
    , mz(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _ftId_type;
  _ftId_type ftId;

   typedef int32_t _fx_type;
  _fx_type fx;

   typedef int32_t _fy_type;
  _fy_type fy;

   typedef int32_t _fz_type;
  _fz_type fz;

   typedef int32_t _mx_type;
  _mx_type mx;

   typedef int32_t _my_type;
  _my_type my;

   typedef int32_t _mz_type;
  _mz_type mz;





  typedef boost::shared_ptr< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetFtOffsetRequest_

typedef ::servo_ctrl::SetFtOffsetRequest_<std::allocator<void> > SetFtOffsetRequest;

typedef boost::shared_ptr< ::servo_ctrl::SetFtOffsetRequest > SetFtOffsetRequestPtr;
typedef boost::shared_ptr< ::servo_ctrl::SetFtOffsetRequest const> SetFtOffsetRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator1> & lhs, const ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator2> & rhs)
{
  return lhs.ftId == rhs.ftId &&
    lhs.fx == rhs.fx &&
    lhs.fy == rhs.fy &&
    lhs.fz == rhs.fz &&
    lhs.mx == rhs.mx &&
    lhs.my == rhs.my &&
    lhs.mz == rhs.mz;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator1> & lhs, const ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace servo_ctrl

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7c4f78021f9d940884cc85d7c567fe52";
  }

  static const char* value(const ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7c4f78021f9d9408ULL;
  static const uint64_t static_value2 = 0x84cc85d7c567fe52ULL;
};

template<class ContainerAllocator>
struct DataType< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "servo_ctrl/SetFtOffsetRequest";
  }

  static const char* value(const ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n"
"string ftId\n"
"int32  fx\n"
"int32  fy\n"
"int32  fz\n"
"int32  mx\n"
"int32  my\n"
"int32  mz\n"
;
  }

  static const char* value(const ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.ftId);
      stream.next(m.fx);
      stream.next(m.fy);
      stream.next(m.fz);
      stream.next(m.mx);
      stream.next(m.my);
      stream.next(m.mz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetFtOffsetRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::servo_ctrl::SetFtOffsetRequest_<ContainerAllocator>& v)
  {
    s << indent << "ftId: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.ftId);
    s << indent << "fx: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fx);
    s << indent << "fy: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fy);
    s << indent << "fz: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fz);
    s << indent << "mx: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mx);
    s << indent << "my: ";
    Printer<int32_t>::stream(s, indent + "  ", v.my);
    s << indent << "mz: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mz);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVO_CTRL_MESSAGE_SETFTOFFSETREQUEST_H
