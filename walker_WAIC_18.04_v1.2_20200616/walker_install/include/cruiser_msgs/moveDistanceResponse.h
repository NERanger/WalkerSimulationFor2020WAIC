// Generated by gencpp from file cruiser_msgs/moveDistanceResponse.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_MOVEDISTANCERESPONSE_H
#define CRUISER_MSGS_MESSAGE_MOVEDISTANCERESPONSE_H


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
struct moveDistanceResponse_
{
  typedef moveDistanceResponse_<ContainerAllocator> Type;

  moveDistanceResponse_()
    : result(0)
    , dis_x(0.0)
    , dis_y(0.0)
    , dis_z(0.0)  {
    }
  moveDistanceResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , dis_x(0.0)
    , dis_y(0.0)
    , dis_z(0.0)  {
  (void)_alloc;
    }



   typedef uint32_t _result_type;
  _result_type result;

   typedef float _dis_x_type;
  _dis_x_type dis_x;

   typedef float _dis_y_type;
  _dis_y_type dis_y;

   typedef float _dis_z_type;
  _dis_z_type dis_z;





  typedef boost::shared_ptr< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> const> ConstPtr;

}; // struct moveDistanceResponse_

typedef ::cruiser_msgs::moveDistanceResponse_<std::allocator<void> > moveDistanceResponse;

typedef boost::shared_ptr< ::cruiser_msgs::moveDistanceResponse > moveDistanceResponsePtr;
typedef boost::shared_ptr< ::cruiser_msgs::moveDistanceResponse const> moveDistanceResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator1> & lhs, const ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator2> & rhs)
{
  return lhs.result == rhs.result &&
    lhs.dis_x == rhs.dis_x &&
    lhs.dis_y == rhs.dis_y &&
    lhs.dis_z == rhs.dis_z;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator1> & lhs, const ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f37da2a533f1b13ef7718f68497ab2ac";
  }

  static const char* value(const ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf37da2a533f1b13eULL;
  static const uint64_t static_value2 = 0xf7718f68497ab2acULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/moveDistanceResponse";
  }

  static const char* value(const ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 result\n"
"float32 dis_x\n"
"float32 dis_y\n"
"float32 dis_z\n"
"\n"
"\n"
;
  }

  static const char* value(const ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.dis_x);
      stream.next(m.dis_y);
      stream.next(m.dis_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct moveDistanceResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::moveDistanceResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.result);
    s << indent << "dis_x: ";
    Printer<float>::stream(s, indent + "  ", v.dis_x);
    s << indent << "dis_y: ";
    Printer<float>::stream(s, indent + "  ", v.dis_y);
    s << indent << "dis_z: ";
    Printer<float>::stream(s, indent + "  ", v.dis_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_MOVEDISTANCERESPONSE_H
