// Generated by gencpp from file webots_api/SceneSelectionRequest.msg
// DO NOT EDIT!


#ifndef WEBOTS_API_MESSAGE_SCENESELECTIONREQUEST_H
#define WEBOTS_API_MESSAGE_SCENESELECTIONREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace webots_api
{
template <class ContainerAllocator>
struct SceneSelectionRequest_
{
  typedef SceneSelectionRequest_<ContainerAllocator> Type;

  SceneSelectionRequest_()
    : scene_name()
    , nav(false)
    , vision(false)  {
    }
  SceneSelectionRequest_(const ContainerAllocator& _alloc)
    : scene_name(_alloc)
    , nav(false)
    , vision(false)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _scene_name_type;
  _scene_name_type scene_name;

   typedef uint8_t _nav_type;
  _nav_type nav;

   typedef uint8_t _vision_type;
  _vision_type vision;





  typedef boost::shared_ptr< ::webots_api::SceneSelectionRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::webots_api::SceneSelectionRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SceneSelectionRequest_

typedef ::webots_api::SceneSelectionRequest_<std::allocator<void> > SceneSelectionRequest;

typedef boost::shared_ptr< ::webots_api::SceneSelectionRequest > SceneSelectionRequestPtr;
typedef boost::shared_ptr< ::webots_api::SceneSelectionRequest const> SceneSelectionRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::webots_api::SceneSelectionRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::webots_api::SceneSelectionRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::webots_api::SceneSelectionRequest_<ContainerAllocator1> & lhs, const ::webots_api::SceneSelectionRequest_<ContainerAllocator2> & rhs)
{
  return lhs.scene_name == rhs.scene_name &&
    lhs.nav == rhs.nav &&
    lhs.vision == rhs.vision;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::webots_api::SceneSelectionRequest_<ContainerAllocator1> & lhs, const ::webots_api::SceneSelectionRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace webots_api

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::webots_api::SceneSelectionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::webots_api::SceneSelectionRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_api::SceneSelectionRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::webots_api::SceneSelectionRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_api::SceneSelectionRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::webots_api::SceneSelectionRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::webots_api::SceneSelectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "be849e4f9e637f9b6fbdaf322e38373d";
  }

  static const char* value(const ::webots_api::SceneSelectionRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbe849e4f9e637f9bULL;
  static const uint64_t static_value2 = 0x6fbdaf322e38373dULL;
};

template<class ContainerAllocator>
struct DataType< ::webots_api::SceneSelectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "webots_api/SceneSelectionRequest";
  }

  static const char* value(const ::webots_api::SceneSelectionRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::webots_api::SceneSelectionRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string scene_name\n"
"bool nav\n"
"bool vision\n"
;
  }

  static const char* value(const ::webots_api::SceneSelectionRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::webots_api::SceneSelectionRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.scene_name);
      stream.next(m.nav);
      stream.next(m.vision);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SceneSelectionRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::webots_api::SceneSelectionRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::webots_api::SceneSelectionRequest_<ContainerAllocator>& v)
  {
    s << indent << "scene_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.scene_name);
    s << indent << "nav: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.nav);
    s << indent << "vision: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.vision);
  }
};

} // namespace message_operations
} // namespace ros

#endif // WEBOTS_API_MESSAGE_SCENESELECTIONREQUEST_H