// Generated by gencpp from file cruiser_msgs/cruiserPowerCmd.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISERPOWERCMD_H
#define CRUISER_MSGS_MESSAGE_CRUISERPOWERCMD_H


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
struct cruiserPowerCmd_
{
  typedef cruiserPowerCmd_<ContainerAllocator> Type;

  cruiserPowerCmd_()
    : power_cmd(0)  {
    }
  cruiserPowerCmd_(const ContainerAllocator& _alloc)
    : power_cmd(0)  {
  (void)_alloc;
    }



   typedef uint32_t _power_cmd_type;
  _power_cmd_type power_cmd;





  typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> const> ConstPtr;

}; // struct cruiserPowerCmd_

typedef ::cruiser_msgs::cruiserPowerCmd_<std::allocator<void> > cruiserPowerCmd;

typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerCmd > cruiserPowerCmdPtr;
typedef boost::shared_ptr< ::cruiser_msgs::cruiserPowerCmd const> cruiserPowerCmdConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator2> & rhs)
{
  return lhs.power_cmd == rhs.power_cmd;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator1> & lhs, const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace cruiser_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "095e92debc6bcb5e7317d4b6d9d2054c";
  }

  static const char* value(const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x095e92debc6bcb5eULL;
  static const uint64_t static_value2 = 0x7317d4b6d9d2054cULL;
};

template<class ContainerAllocator>
struct DataType< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "cruiser_msgs/cruiserPowerCmd";
  }

  static const char* value(const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 power_cmd\n"
"\n"
"\n"
;
  }

  static const char* value(const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.power_cmd);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct cruiserPowerCmd_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::cruiser_msgs::cruiserPowerCmd_<ContainerAllocator>& v)
  {
    s << indent << "power_cmd: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.power_cmd);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISERPOWERCMD_H
