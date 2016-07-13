// Generated by gencpp from file control_msgs/QueryCalibrationState.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_QUERYCALIBRATIONSTATE_H
#define CONTROL_MSGS_MESSAGE_QUERYCALIBRATIONSTATE_H

#include <ros/service_traits.h>


#include <control_msgs/QueryCalibrationStateRequest.h>
#include <control_msgs/QueryCalibrationStateResponse.h>


namespace control_msgs
{

struct QueryCalibrationState
{

typedef QueryCalibrationStateRequest Request;
typedef QueryCalibrationStateResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct QueryCalibrationState
} // namespace control_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::control_msgs::QueryCalibrationState > {
  static const char* value()
  {
    return "28af3beedcb84986b8e470dc5470507d";
  }

  static const char* value(const ::control_msgs::QueryCalibrationState&) { return value(); }
};

template<>
struct DataType< ::control_msgs::QueryCalibrationState > {
  static const char* value()
  {
    return "control_msgs/QueryCalibrationState";
  }

  static const char* value(const ::control_msgs::QueryCalibrationState&) { return value(); }
};


// service_traits::MD5Sum< ::control_msgs::QueryCalibrationStateRequest> should match 
// service_traits::MD5Sum< ::control_msgs::QueryCalibrationState > 
template<>
struct MD5Sum< ::control_msgs::QueryCalibrationStateRequest>
{
  static const char* value()
  {
    return MD5Sum< ::control_msgs::QueryCalibrationState >::value();
  }
  static const char* value(const ::control_msgs::QueryCalibrationStateRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::control_msgs::QueryCalibrationStateRequest> should match 
// service_traits::DataType< ::control_msgs::QueryCalibrationState > 
template<>
struct DataType< ::control_msgs::QueryCalibrationStateRequest>
{
  static const char* value()
  {
    return DataType< ::control_msgs::QueryCalibrationState >::value();
  }
  static const char* value(const ::control_msgs::QueryCalibrationStateRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::control_msgs::QueryCalibrationStateResponse> should match 
// service_traits::MD5Sum< ::control_msgs::QueryCalibrationState > 
template<>
struct MD5Sum< ::control_msgs::QueryCalibrationStateResponse>
{
  static const char* value()
  {
    return MD5Sum< ::control_msgs::QueryCalibrationState >::value();
  }
  static const char* value(const ::control_msgs::QueryCalibrationStateResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::control_msgs::QueryCalibrationStateResponse> should match 
// service_traits::DataType< ::control_msgs::QueryCalibrationState > 
template<>
struct DataType< ::control_msgs::QueryCalibrationStateResponse>
{
  static const char* value()
  {
    return DataType< ::control_msgs::QueryCalibrationState >::value();
  }
  static const char* value(const ::control_msgs::QueryCalibrationStateResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_QUERYCALIBRATIONSTATE_H
