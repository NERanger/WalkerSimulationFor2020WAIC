// Generated by gencpp from file cruiser_msgs/cruiserNavigation.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISERNAVIGATION_H
#define CRUISER_MSGS_MESSAGE_CRUISERNAVIGATION_H


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
struct cruiserNavigation_
{
  typedef cruiserNavigation_<ContainerAllocator> Type;

  cruiserNavigation_()
    : status(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
    }
  cruiserNavigation_(const ContainerAllocator& _alloc)
    : status(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _status_type;
  _status_type status;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;





  typedef boost::shared_ptr< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> const> ConstPtr;

}; // struct cruiserNavigation_

typedef ::cruiser_msgs::cruiserNavigation_<std::allocator<void> > cruiserNavigation;

typedef boost::shared_ptr< ::cruiser_msgs::cruiserNavigation > cruiserNavigationPtr;
typedef boost::shared_ptr< ::cruiser_msgs::cruiserNavigation const> cruiserNavigationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::cruiserNavigation_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiserNavigation_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status &&
    lhs.x == rhs.x &&
    lhs.y == rhs.y &&
    lhs.z == rhs.z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::cruiserNavigation_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiserNavigation_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "642d9c319d5c7baae9a2379db7fbe1e5";
  }

  static const char* value(const ::cruiser_msgs::cruiserNavigation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x642d9c319d5c7baaULL;
  static const uint64_t static_value2 = 0xe9a2379db7fbe1e5ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/cruiserNavigation";
  }

  static const char* value(const ::cruiser_msgs::cruiserNavigation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 status\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
;
  }

  static const char* value(const ::cruiser_msgs::cruiserNavigation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cruiserNavigation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::cruiserNavigation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::cruiserNavigation_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<int32_t>::stream(s, indent + "  ", v.status);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISERNAVIGATION_H
