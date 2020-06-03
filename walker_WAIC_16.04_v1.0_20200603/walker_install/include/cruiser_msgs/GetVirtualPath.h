// Generated by gencpp from file cruiser_msgs/GetVirtualPath.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_GETVIRTUALPATH_H
#define CRUISER_MSGS_MESSAGE_GETVIRTUALPATH_H

#include <ros/service_traits.h>


#include <cruiser_msgs/GetVirtualPathRequest.h>
#include <cruiser_msgs/GetVirtualPathResponse.h>


namespace cruiser_msgs
{

struct GetVirtualPath
{

typedef GetVirtualPathRequest Request;
typedef GetVirtualPathResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetVirtualPath
} // namespace cruiser_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cruiser_msgs::GetVirtualPath > {
  static const char* value()
  {
    return "efa773451ece228573f2fb4e72387f99";
  }

  static const char* value(const ::cruiser_msgs::GetVirtualPath&) { return value(); }
};

template<>
struct DataType< ::cruiser_msgs::GetVirtualPath > {
  static const char* value()
  {
    return "cruiser_msgs/GetVirtualPath";
  }

  static const char* value(const ::cruiser_msgs::GetVirtualPath&) { return value(); }
};


// service_traits::MD5Sum< ::cruiser_msgs::GetVirtualPathRequest> should match 
// service_traits::MD5Sum< ::cruiser_msgs::GetVirtualPath > 
template<>
struct MD5Sum< ::cruiser_msgs::GetVirtualPathRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cruiser_msgs::GetVirtualPath >::value();
  }
  static const char* value(const ::cruiser_msgs::GetVirtualPathRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cruiser_msgs::GetVirtualPathRequest> should match 
// service_traits::DataType< ::cruiser_msgs::GetVirtualPath > 
template<>
struct DataType< ::cruiser_msgs::GetVirtualPathRequest>
{
  static const char* value()
  {
    return DataType< ::cruiser_msgs::GetVirtualPath >::value();
  }
  static const char* value(const ::cruiser_msgs::GetVirtualPathRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cruiser_msgs::GetVirtualPathResponse> should match 
// service_traits::MD5Sum< ::cruiser_msgs::GetVirtualPath > 
template<>
struct MD5Sum< ::cruiser_msgs::GetVirtualPathResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cruiser_msgs::GetVirtualPath >::value();
  }
  static const char* value(const ::cruiser_msgs::GetVirtualPathResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cruiser_msgs::GetVirtualPathResponse> should match 
// service_traits::DataType< ::cruiser_msgs::GetVirtualPath > 
template<>
struct DataType< ::cruiser_msgs::GetVirtualPathResponse>
{
  static const char* value()
  {
    return DataType< ::cruiser_msgs::GetVirtualPath >::value();
  }
  static const char* value(const ::cruiser_msgs::GetVirtualPathResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_GETVIRTUALPATH_H
