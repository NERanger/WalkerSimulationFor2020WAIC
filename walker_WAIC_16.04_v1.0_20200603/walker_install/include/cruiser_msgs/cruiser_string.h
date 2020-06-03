// Generated by gencpp from file cruiser_msgs/cruiser_string.msg
// DO NOT EDIT!


#ifndef CRUISER_MSGS_MESSAGE_CRUISER_STRING_H
#define CRUISER_MSGS_MESSAGE_CRUISER_STRING_H

#include <ros/service_traits.h>


#include <cruiser_msgs/cruiser_stringRequest.h>
#include <cruiser_msgs/cruiser_stringResponse.h>


namespace cruiser_msgs
{

struct cruiser_string
{

typedef cruiser_stringRequest Request;
typedef cruiser_stringResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct cruiser_string
} // namespace cruiser_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::cruiser_msgs::cruiser_string > {
  static const char* value()
  {
    return "be3d0e35ecd74786b92f4acafccf0d4a";
  }

  static const char* value(const ::cruiser_msgs::cruiser_string&) { return value(); }
};

template<>
struct DataType< ::cruiser_msgs::cruiser_string > {
  static const char* value()
  {
    return "cruiser_msgs/cruiser_string";
  }

  static const char* value(const ::cruiser_msgs::cruiser_string&) { return value(); }
};


// service_traits::MD5Sum< ::cruiser_msgs::cruiser_stringRequest> should match 
// service_traits::MD5Sum< ::cruiser_msgs::cruiser_string > 
template<>
struct MD5Sum< ::cruiser_msgs::cruiser_stringRequest>
{
  static const char* value()
  {
    return MD5Sum< ::cruiser_msgs::cruiser_string >::value();
  }
  static const char* value(const ::cruiser_msgs::cruiser_stringRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::cruiser_msgs::cruiser_stringRequest> should match 
// service_traits::DataType< ::cruiser_msgs::cruiser_string > 
template<>
struct DataType< ::cruiser_msgs::cruiser_stringRequest>
{
  static const char* value()
  {
    return DataType< ::cruiser_msgs::cruiser_string >::value();
  }
  static const char* value(const ::cruiser_msgs::cruiser_stringRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::cruiser_msgs::cruiser_stringResponse> should match 
// service_traits::MD5Sum< ::cruiser_msgs::cruiser_string > 
template<>
struct MD5Sum< ::cruiser_msgs::cruiser_stringResponse>
{
  static const char* value()
  {
    return MD5Sum< ::cruiser_msgs::cruiser_string >::value();
  }
  static const char* value(const ::cruiser_msgs::cruiser_stringResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::cruiser_msgs::cruiser_stringResponse> should match 
// service_traits::DataType< ::cruiser_msgs::cruiser_string > 
template<>
struct DataType< ::cruiser_msgs::cruiser_stringResponse>
{
  static const char* value()
  {
    return DataType< ::cruiser_msgs::cruiser_string >::value();
  }
  static const char* value(const ::cruiser_msgs::cruiser_stringResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CRUISER_MSGS_MESSAGE_CRUISER_STRING_H
