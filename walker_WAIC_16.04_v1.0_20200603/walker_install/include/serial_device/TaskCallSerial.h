// Generated by gencpp from file serial_device/TaskCallSerial.msg
// DO NOT EDIT!


#ifndef SERIAL_DEVICE_MESSAGE_TASKCALLSERIAL_H
#define SERIAL_DEVICE_MESSAGE_TASKCALLSERIAL_H

#include <ros/service_traits.h>


#include <serial_device/TaskCallSerialRequest.h>
#include <serial_device/TaskCallSerialResponse.h>


namespace serial_device
{

struct TaskCallSerial
{

typedef TaskCallSerialRequest Request;
typedef TaskCallSerialResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct TaskCallSerial
} // namespace serial_device


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::serial_device::TaskCallSerial > {
  static const char* value()
  {
    return "d091270bbc490f371f9855f018f74a07";
  }

  static const char* value(const ::serial_device::TaskCallSerial&) { return value(); }
};

template<>
struct DataType< ::serial_device::TaskCallSerial > {
  static const char* value()
  {
    return "serial_device/TaskCallSerial";
  }

  static const char* value(const ::serial_device::TaskCallSerial&) { return value(); }
};


// service_traits::MD5Sum< ::serial_device::TaskCallSerialRequest> should match 
// service_traits::MD5Sum< ::serial_device::TaskCallSerial > 
template<>
struct MD5Sum< ::serial_device::TaskCallSerialRequest>
{
  static const char* value()
  {
    return MD5Sum< ::serial_device::TaskCallSerial >::value();
  }
  static const char* value(const ::serial_device::TaskCallSerialRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::serial_device::TaskCallSerialRequest> should match 
// service_traits::DataType< ::serial_device::TaskCallSerial > 
template<>
struct DataType< ::serial_device::TaskCallSerialRequest>
{
  static const char* value()
  {
    return DataType< ::serial_device::TaskCallSerial >::value();
  }
  static const char* value(const ::serial_device::TaskCallSerialRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::serial_device::TaskCallSerialResponse> should match 
// service_traits::MD5Sum< ::serial_device::TaskCallSerial > 
template<>
struct MD5Sum< ::serial_device::TaskCallSerialResponse>
{
  static const char* value()
  {
    return MD5Sum< ::serial_device::TaskCallSerial >::value();
  }
  static const char* value(const ::serial_device::TaskCallSerialResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::serial_device::TaskCallSerialResponse> should match 
// service_traits::DataType< ::serial_device::TaskCallSerial > 
template<>
struct DataType< ::serial_device::TaskCallSerialResponse>
{
  static const char* value()
  {
    return DataType< ::serial_device::TaskCallSerial >::value();
  }
  static const char* value(const ::serial_device::TaskCallSerialResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // SERIAL_DEVICE_MESSAGE_TASKCALLSERIAL_H
