// Generated by gencpp from file cruiser_msgs/cruiserLocomotionStatus.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISERLOCOMOTIONSTATUS_H
#define CRUISER_MSGS_MESSAGE_CRUISERLOCOMOTIONSTATUS_H


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
struct cruiserLocomotionStatus_
{
  typedef cruiserLocomotionStatus_<ContainerAllocator> Type;

  cruiserLocomotionStatus_()
    : status(0)
    , vx(0.0)
    , vy(0.0)
    , vz(0.0)  {
    }
  cruiserLocomotionStatus_(const ContainerAllocator& _alloc)
    : status(0)
    , vx(0.0)
    , vy(0.0)
    , vz(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _status_type;
  _status_type status;

   typedef float _vx_type;
  _vx_type vx;

   typedef float _vy_type;
  _vy_type vy;

   typedef float _vz_type;
  _vz_type vz;





  typedef boost::shared_ptr< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> const> ConstPtr;

}; // struct cruiserLocomotionStatus_

typedef ::cruiser_msgs::cruiserLocomotionStatus_<std::allocator<void> > cruiserLocomotionStatus;

typedef boost::shared_ptr< ::cruiser_msgs::cruiserLocomotionStatus > cruiserLocomotionStatusPtr;
typedef boost::shared_ptr< ::cruiser_msgs::cruiserLocomotionStatus const> cruiserLocomotionStatusConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.vx == rhs.vx &&
    lhs.vy == rhs.vy &&
    lhs.vz == rhs.vz;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e713c1a9d9ca1e3ec2ae4bd0d8ac35e3";
  }

  static const char* value(const ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe713c1a9d9ca1e3eULL;
  static const uint64_t static_value2 = 0xc2ae4bd0d8ac35e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/cruiserLocomotionStatus";
  }

  static const char* value(const ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 status\n"
"float32 vx\n"
"float32 vy\n"
"float32 vz\n"
"\n"
;
  }

  static const char* value(const ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.vx);
      stream.next(m.vy);
      stream.next(m.vz);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cruiserLocomotionStatus_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::cruiserLocomotionStatus_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.status);
    s << indent << "vx: ";
    Printer<float>::stream(s, indent + "  ", v.vx);
    s << indent << "vy: ";
    Printer<float>::stream(s, indent + "  ", v.vy);
    s << indent << "vz: ";
    Printer<float>::stream(s, indent + "  ", v.vz);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISERLOCOMOTIONSTATUS_H
