// Generated by gencpp from file sensor_msgs/FluidPressure.msg
// DO NOT EDIT!


#ifndef SENSOR_MSGS_MESSAGE_FLUIDPRESSURE_H
#define SENSOR_MSGS_MESSAGE_FLUIDPRESSURE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace sensor_msgs
{
template <class ContainerAllocator>
struct FluidPressure_
{
  typedef FluidPressure_<ContainerAllocator> Type;

  FluidPressure_()
    : header()
    , fluid_pressure(0.0)
    , variance(0.0)  {
    }
  FluidPressure_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , fluid_pressure(0.0)
    , variance(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _fluid_pressure_type;
  _fluid_pressure_type fluid_pressure;

   typedef double _variance_type;
  _variance_type variance;




  typedef boost::shared_ptr< ::sensor_msgs::FluidPressure_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs::FluidPressure_<ContainerAllocator> const> ConstPtr;

}; // struct FluidPressure_

typedef ::sensor_msgs::FluidPressure_<std::allocator<void> > FluidPressure;

typedef boost::shared_ptr< ::sensor_msgs::FluidPressure > FluidPressurePtr;
typedef boost::shared_ptr< ::sensor_msgs::FluidPressure const> FluidPressureConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_msgs::FluidPressure_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_msgs::FluidPressure_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/common_msgs/sensor_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::FluidPressure_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::FluidPressure_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::FluidPressure_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::FluidPressure_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::FluidPressure_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::FluidPressure_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs::FluidPressure_<ContainerAllocator> >
{
  static const char* value()
  {
    return "804dc5cea1c5306d6a2eb80b9833befe";
  }

  static const char* value(const ::sensor_msgs::FluidPressure_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x804dc5cea1c5306dULL;
  static const uint64_t static_value2 = 0x6a2eb80b9833befeULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs::FluidPressure_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/FluidPressure";
  }

  static const char* value(const ::sensor_msgs::FluidPressure_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs::FluidPressure_<ContainerAllocator> >
{
  static const char* value()
  {
    return " # Single pressure reading.  This message is appropriate for measuring the\n\
 # pressure inside of a fluid (air, water, etc).  This also includes\n\
 # atmospheric or barometric pressure.\n\
\n\
 # This message is not appropriate for force/pressure contact sensors.\n\
\n\
 Header header           # timestamp of the measurement\n\
                         # frame_id is the location of the pressure sensor\n\
\n\
 float64 fluid_pressure  # Absolute pressure reading in Pascals.\n\
\n\
 float64 variance        # 0 is interpreted as variance unknown\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::sensor_msgs::FluidPressure_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_msgs::FluidPressure_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.fluid_pressure);
      stream.next(m.variance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct FluidPressure_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs::FluidPressure_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_msgs::FluidPressure_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "fluid_pressure: ";
    Printer<double>::stream(s, indent + "  ", v.fluid_pressure);
    s << indent << "variance: ";
    Printer<double>::stream(s, indent + "  ", v.variance);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_MESSAGE_FLUIDPRESSURE_H
