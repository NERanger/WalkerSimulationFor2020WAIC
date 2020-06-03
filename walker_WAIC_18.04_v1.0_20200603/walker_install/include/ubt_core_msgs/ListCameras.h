// Generated by gencpp from file ubt_core_msgs/ListCameras.msg
// DO NOT EDIT!


#ifndef UBT_CORE_MSGS_MESSAGE_LISTCAMERAS_H
#define UBT_CORE_MSGS_MESSAGE_LISTCAMERAS_H

#include <ros/service_traits.h>


#include <ubt_core_msgs/ListCamerasRequest.h>
#include <ubt_core_msgs/ListCamerasResponse.h>


namespace ubt_core_msgs
{

struct ListCameras
{

typedef ListCamerasRequest Request;
typedef ListCamerasResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct ListCameras
} // namespace ubt_core_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::ubt_core_msgs::ListCameras > {
  static const char* value()
  {
    return "855b31192ab61744e7deb992d94db7ff";
  }

  static const char* value(const ::ubt_core_msgs::ListCameras&) { return value(); }
};

template<>
struct DataType< ::ubt_core_msgs::ListCameras > {
  static const char* value()
  {
    return "ubt_core_msgs/ListCameras";
  }

  static const char* value(const ::ubt_core_msgs::ListCameras&) { return value(); }
};


// service_traits::MD5Sum< ::ubt_core_msgs::ListCamerasRequest> should match
// service_traits::MD5Sum< ::ubt_core_msgs::ListCameras >
template<>
struct MD5Sum< ::ubt_core_msgs::ListCamerasRequest>
{
  static const char* value()
  {
    return MD5Sum< ::ubt_core_msgs::ListCameras >::value();
  }
  static const char* value(const ::ubt_core_msgs::ListCamerasRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::ubt_core_msgs::ListCamerasRequest> should match
// service_traits::DataType< ::ubt_core_msgs::ListCameras >
template<>
struct DataType< ::ubt_core_msgs::ListCamerasRequest>
{
  static const char* value()
  {
    return DataType< ::ubt_core_msgs::ListCameras >::value();
  }
  static const char* value(const ::ubt_core_msgs::ListCamerasRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::ubt_core_msgs::ListCamerasResponse> should match
// service_traits::MD5Sum< ::ubt_core_msgs::ListCameras >
template<>
struct MD5Sum< ::ubt_core_msgs::ListCamerasResponse>
{
  static const char* value()
  {
    return MD5Sum< ::ubt_core_msgs::ListCameras >::value();
  }
  static const char* value(const ::ubt_core_msgs::ListCamerasResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::ubt_core_msgs::ListCamerasResponse> should match
// service_traits::DataType< ::ubt_core_msgs::ListCameras >
template<>
struct DataType< ::ubt_core_msgs::ListCamerasResponse>
{
  static const char* value()
  {
    return DataType< ::ubt_core_msgs::ListCameras >::value();
  }
  static const char* value(const ::ubt_core_msgs::ListCamerasResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // UBT_CORE_MSGS_MESSAGE_LISTCAMERAS_H
