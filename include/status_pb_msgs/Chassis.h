// Generated by gencpp from file status_pb_msgs/Chassis.msg
// DO NOT EDIT!


#ifndef STATUS_PB_MSGS_MESSAGE_CHASSIS_H
#define STATUS_PB_MSGS_MESSAGE_CHASSIS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace status_pb_msgs
{
template <class ContainerAllocator>
struct Chassis_
{
  typedef Chassis_<ContainerAllocator> Type;

  Chassis_()
    : driving_mode(0)
    , error_code(0)
    , engine_started(false)
    , engine_rpm(0.0)
    , speed_mps(0.0)
    , odometer_m(0.0)
    , fuel_range_m(0)
    , throttle_percentage(0.0)
    , brake_percentage(0.0)
    , gear_location(0)
    , steering_percentage(0.0)
    , steering_torque_nm(0.0)
    , parking_brake(false)
    , high_beam_signal(false)
    , low_beam_signal(false)
    , left_turn_signal(false)
    , right_turn_signal(false)
    , horn(false)
    , wiper(false)  {
    }
  Chassis_(const ContainerAllocator& _alloc)
    : driving_mode(0)
    , error_code(0)
    , engine_started(false)
    , engine_rpm(0.0)
    , speed_mps(0.0)
    , odometer_m(0.0)
    , fuel_range_m(0)
    , throttle_percentage(0.0)
    , brake_percentage(0.0)
    , gear_location(0)
    , steering_percentage(0.0)
    , steering_torque_nm(0.0)
    , parking_brake(false)
    , high_beam_signal(false)
    , low_beam_signal(false)
    , left_turn_signal(false)
    , right_turn_signal(false)
    , horn(false)
    , wiper(false)  {
  (void)_alloc;
    }



   typedef int32_t _driving_mode_type;
  _driving_mode_type driving_mode;

   typedef int32_t _error_code_type;
  _error_code_type error_code;

   typedef uint8_t _engine_started_type;
  _engine_started_type engine_started;

   typedef float _engine_rpm_type;
  _engine_rpm_type engine_rpm;

   typedef float _speed_mps_type;
  _speed_mps_type speed_mps;

   typedef float _odometer_m_type;
  _odometer_m_type odometer_m;

   typedef int32_t _fuel_range_m_type;
  _fuel_range_m_type fuel_range_m;

   typedef float _throttle_percentage_type;
  _throttle_percentage_type throttle_percentage;

   typedef float _brake_percentage_type;
  _brake_percentage_type brake_percentage;

   typedef int32_t _gear_location_type;
  _gear_location_type gear_location;

   typedef float _steering_percentage_type;
  _steering_percentage_type steering_percentage;

   typedef float _steering_torque_nm_type;
  _steering_torque_nm_type steering_torque_nm;

   typedef uint8_t _parking_brake_type;
  _parking_brake_type parking_brake;

   typedef uint8_t _high_beam_signal_type;
  _high_beam_signal_type high_beam_signal;

   typedef uint8_t _low_beam_signal_type;
  _low_beam_signal_type low_beam_signal;

   typedef uint8_t _left_turn_signal_type;
  _left_turn_signal_type left_turn_signal;

   typedef uint8_t _right_turn_signal_type;
  _right_turn_signal_type right_turn_signal;

   typedef uint8_t _horn_type;
  _horn_type horn;

   typedef uint8_t _wiper_type;
  _wiper_type wiper;




  typedef boost::shared_ptr< ::status_pb_msgs::Chassis_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::status_pb_msgs::Chassis_<ContainerAllocator> const> ConstPtr;

}; // struct Chassis_

typedef ::status_pb_msgs::Chassis_<std::allocator<void> > Chassis;

typedef boost::shared_ptr< ::status_pb_msgs::Chassis > ChassisPtr;
typedef boost::shared_ptr< ::status_pb_msgs::Chassis const> ChassisConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::status_pb_msgs::Chassis_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::status_pb_msgs::Chassis_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace status_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'localization_pb_msgs': ['/home/caros/ros/share/localization_pb_msgs/cmake/../msg'], 'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'status_pb_msgs': ['/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/pb_msgs/status_pb_msgs/msg'], 'header_pb_msgs': ['/home/caros/ros/share/header_pb_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::status_pb_msgs::Chassis_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::status_pb_msgs::Chassis_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::status_pb_msgs::Chassis_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::status_pb_msgs::Chassis_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::status_pb_msgs::Chassis_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::status_pb_msgs::Chassis_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::status_pb_msgs::Chassis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f2d8ec377a6a1aeabfb0e7ae112bbef4";
  }

  static const char* value(const ::status_pb_msgs::Chassis_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf2d8ec377a6a1aeaULL;
  static const uint64_t static_value2 = 0xbfb0e7ae112bbef4ULL;
};

template<class ContainerAllocator>
struct DataType< ::status_pb_msgs::Chassis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "status_pb_msgs/Chassis";
  }

  static const char* value(const ::status_pb_msgs::Chassis_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::status_pb_msgs::Chassis_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 driving_mode \n\
int32 error_code \n\
bool engine_started \n\
float32 engine_rpm \n\
float32 speed_mps \n\
float32 odometer_m \n\
int32 fuel_range_m \n\
float32 throttle_percentage \n\
float32 brake_percentage \n\
int32 gear_location \n\
float32 steering_percentage \n\
float32 steering_torque_nm \n\
bool parking_brake \n\
bool high_beam_signal \n\
bool low_beam_signal \n\
bool left_turn_signal \n\
bool right_turn_signal \n\
bool horn \n\
bool wiper \n\
";
  }

  static const char* value(const ::status_pb_msgs::Chassis_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::status_pb_msgs::Chassis_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.driving_mode);
      stream.next(m.error_code);
      stream.next(m.engine_started);
      stream.next(m.engine_rpm);
      stream.next(m.speed_mps);
      stream.next(m.odometer_m);
      stream.next(m.fuel_range_m);
      stream.next(m.throttle_percentage);
      stream.next(m.brake_percentage);
      stream.next(m.gear_location);
      stream.next(m.steering_percentage);
      stream.next(m.steering_torque_nm);
      stream.next(m.parking_brake);
      stream.next(m.high_beam_signal);
      stream.next(m.low_beam_signal);
      stream.next(m.left_turn_signal);
      stream.next(m.right_turn_signal);
      stream.next(m.horn);
      stream.next(m.wiper);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Chassis_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::status_pb_msgs::Chassis_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::status_pb_msgs::Chassis_<ContainerAllocator>& v)
  {
    s << indent << "driving_mode: ";
    Printer<int32_t>::stream(s, indent + "  ", v.driving_mode);
    s << indent << "error_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error_code);
    s << indent << "engine_started: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.engine_started);
    s << indent << "engine_rpm: ";
    Printer<float>::stream(s, indent + "  ", v.engine_rpm);
    s << indent << "speed_mps: ";
    Printer<float>::stream(s, indent + "  ", v.speed_mps);
    s << indent << "odometer_m: ";
    Printer<float>::stream(s, indent + "  ", v.odometer_m);
    s << indent << "fuel_range_m: ";
    Printer<int32_t>::stream(s, indent + "  ", v.fuel_range_m);
    s << indent << "throttle_percentage: ";
    Printer<float>::stream(s, indent + "  ", v.throttle_percentage);
    s << indent << "brake_percentage: ";
    Printer<float>::stream(s, indent + "  ", v.brake_percentage);
    s << indent << "gear_location: ";
    Printer<int32_t>::stream(s, indent + "  ", v.gear_location);
    s << indent << "steering_percentage: ";
    Printer<float>::stream(s, indent + "  ", v.steering_percentage);
    s << indent << "steering_torque_nm: ";
    Printer<float>::stream(s, indent + "  ", v.steering_torque_nm);
    s << indent << "parking_brake: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.parking_brake);
    s << indent << "high_beam_signal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.high_beam_signal);
    s << indent << "low_beam_signal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.low_beam_signal);
    s << indent << "left_turn_signal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.left_turn_signal);
    s << indent << "right_turn_signal: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.right_turn_signal);
    s << indent << "horn: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.horn);
    s << indent << "wiper: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.wiper);
  }
};

} // namespace message_operations
} // namespace ros

#endif // STATUS_PB_MSGS_MESSAGE_CHASSIS_H
