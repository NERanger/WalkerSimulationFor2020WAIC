// Generated by gencpp from file ubt_core_msgs/CloseCameraResponse.msg
// DO NOT EDIT!


#ifndef UBT_CORE_MSGS_MESSAGE_CLOSECAMERARESPONSE_H
#define UBT_CORE_MSGS_MESSAGE_CLOSECAMERARESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ubt_core_msgs
{
template <class ContainerAllocator>
struct CloseCameraResponse_
{
  typedef CloseCameraResponse_<ContainerAllocator> Type;

  CloseCameraResponse_()
    : err(0)  {
    }
  CloseCameraResponse_(const ContainerAllocator& _alloc)
    : err(0)  {
  (void)_alloc;
    }



   typedef int32_t _err_type;
  _err_type err;





  typedef boost::shared_ptr< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> const> ConstPtr;

}; // struct CloseCameraResponse_

typedef ::ubt_core_msgs::CloseCameraResponse_<std::allocator<void> > CloseCameraResponse;

typedef boost::shared_ptr< ::ubt_core_msgs::CloseCameraResponse > CloseCameraResponsePtr;
typedef boost::shared_ptr< ::ubt_core_msgs::CloseCameraResponse const> CloseCameraResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator1> & lhs, const ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator2> & rhs)
{
  return lhs.err == rhs.err;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator1> & lhs, const ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ubt_core_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6e094011a4dfaee5eddf447220446cf";
  }

  static const char* value(const ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6e094011a4dfaeeULL;
  static const uint64_t static_value2 = 0x5eddf447220446cfULL;
};

template<class ContainerAllocator>
struct DataType< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ubt_core_msgs/CloseCameraResponse";
  }

  static const char* value(const ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32           err\n"
"\n"
;
  }

  static const char* value(const ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.err);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CloseCameraResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ubt_core_msgs::CloseCameraResponse_<ContainerAllocator>& v)
  {
    s << indent << "err: ";
    Printer<int32_t>::stream(s, indent + "  ", v.err);
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBT_CORE_MSGS_MESSAGE_CLOSECAMERARESPONSE_H
