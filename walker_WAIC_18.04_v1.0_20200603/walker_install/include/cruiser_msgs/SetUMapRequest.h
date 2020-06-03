// Generated by gencpp from file cruiser_msgs/SetUMapRequest.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_SETUMAPREQUEST_H
#define CRUISER_MSGS_MESSAGE_SETUMAPREQUEST_H


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
struct SetUMapRequest_
{
  typedef SetUMapRequest_<ContainerAllocator> Type;

  SetUMapRequest_()
    : data()  {
    }
  SetUMapRequest_(const ContainerAllocator& _alloc)
    : data(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetUMapRequest_

typedef ::cruiser_msgs::SetUMapRequest_<std::allocator<void> > SetUMapRequest;

typedef boost::shared_ptr< ::cruiser_msgs::SetUMapRequest > SetUMapRequestPtr;
typedef boost::shared_ptr< ::cruiser_msgs::SetUMapRequest const> SetUMapRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::SetUMapRequest_<ContainerAllocator1> & lhs, const ::cruiser_msgs::SetUMapRequest_<ContainerAllocator2> & rhs)
{
  return lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::SetUMapRequest_<ContainerAllocator1> & lhs, const ::cruiser_msgs::SetUMapRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "992ce8a1687cec8c8bd883ec73ca41d1";
  }

  static const char* value(const ::cruiser_msgs::SetUMapRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x992ce8a1687cec8cULL;
  static const uint64_t static_value2 = 0x8bd883ec73ca41d1ULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/SetUMapRequest";
  }

  static const char* value(const ::cruiser_msgs::SetUMapRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string data\n"
;
  }

  static const char* value(const ::cruiser_msgs::SetUMapRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetUMapRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::SetUMapRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::SetUMapRequest_<ContainerAllocator>& v)
  {
    s << indent << "data: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_SETUMAPREQUEST_H
