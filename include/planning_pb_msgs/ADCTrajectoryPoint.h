// Generated by gencpp from file planning_pb_msgs/ADCTrajectoryPoint.msg
// DO NOT EDIT!


#ifndef PLANNING_PB_MSGS_MESSAGE_ADCTRAJECTORYPOINT_H
#define PLANNING_PB_MSGS_MESSAGE_ADCTRAJECTORYPOINT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace planning_pb_msgs
{
template <class ContainerAllocator>
struct ADCTrajectoryPoint_
{
  typedef ADCTrajectoryPoint_<ContainerAllocator> Type;

  ADCTrajectoryPoint_()
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , s(0.0)
    , l(0.0)
    , speed(0.0)
    , acceleration_s(0.0)
    , curvature(0.0)
    , curvature_change_rate(0.0)
    , relative_time(0.0)
    , theta(0.0)  {
    }
  ADCTrajectoryPoint_(const ContainerAllocator& _alloc)
    : x(0.0)
    , y(0.0)
    , z(0.0)
    , s(0.0)
    , l(0.0)
    , speed(0.0)
    , acceleration_s(0.0)
    , curvature(0.0)
    , curvature_change_rate(0.0)
    , relative_time(0.0)
    , theta(0.0)  {
  (void)_alloc;
    }



   typedef double _x_type;
  _x_type x;

   typedef double _y_type;
  _y_type y;

   typedef double _z_type;
  _z_type z;

   typedef double _s_type;
  _s_type s;

   typedef double _l_type;
  _l_type l;

   typedef double _speed_type;
  _speed_type speed;

   typedef double _acceleration_s_type;
  _acceleration_s_type acceleration_s;

   typedef double _curvature_type;
  _curvature_type curvature;

   typedef double _curvature_change_rate_type;
  _curvature_change_rate_type curvature_change_rate;

   typedef double _relative_time_type;
  _relative_time_type relative_time;

   typedef double _theta_type;
  _theta_type theta;




  typedef boost::shared_ptr< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> const> ConstPtr;

}; // struct ADCTrajectoryPoint_

typedef ::planning_pb_msgs::ADCTrajectoryPoint_<std::allocator<void> > ADCTrajectoryPoint;

typedef boost::shared_ptr< ::planning_pb_msgs::ADCTrajectoryPoint > ADCTrajectoryPointPtr;
typedef boost::shared_ptr< ::planning_pb_msgs::ADCTrajectoryPoint const> ADCTrajectoryPointConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace planning_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'planning_pb_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/pb_msgs/planning_pb_msgs/msg'], 'header_pb_msgs': ['/home/caros/ros/share/header_pb_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "53b3ea5cb43ca5a8512cfcf893273bc0";
  }

  static const char* value(const ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x53b3ea5cb43ca5a8ULL;
  static const uint64_t static_value2 = 0x512cfcf893273bc0ULL;
};

template<class ContainerAllocator>
struct DataType< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planning_pb_msgs/ADCTrajectoryPoint";
  }

  static const char* value(const ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 x \n\
float64 y \n\
float64 z \n\
float64 s \n\
float64 l \n\
float64 speed \n\
float64 acceleration_s \n\
float64 curvature \n\
float64 curvature_change_rate \n\
float64 relative_time \n\
float64 theta \n\
";
  }

  static const char* value(const ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.s);
      stream.next(m.l);
      stream.next(m.speed);
      stream.next(m.acceleration_s);
      stream.next(m.curvature);
      stream.next(m.curvature_change_rate);
      stream.next(m.relative_time);
      stream.next(m.theta);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ADCTrajectoryPoint_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planning_pb_msgs::ADCTrajectoryPoint_<ContainerAllocator>& v)
  {
    s << indent << "x: ";
    Printer<double>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<double>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<double>::stream(s, indent + "  ", v.z);
    s << indent << "s: ";
    Printer<double>::stream(s, indent + "  ", v.s);
    s << indent << "l: ";
    Printer<double>::stream(s, indent + "  ", v.l);
    s << indent << "speed: ";
    Printer<double>::stream(s, indent + "  ", v.speed);
    s << indent << "acceleration_s: ";
    Printer<double>::stream(s, indent + "  ", v.acceleration_s);
    s << indent << "curvature: ";
    Printer<double>::stream(s, indent + "  ", v.curvature);
    s << indent << "curvature_change_rate: ";
    Printer<double>::stream(s, indent + "  ", v.curvature_change_rate);
    s << indent << "relative_time: ";
    Printer<double>::stream(s, indent + "  ", v.relative_time);
    s << indent << "theta: ";
    Printer<double>::stream(s, indent + "  ", v.theta);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNING_PB_MSGS_MESSAGE_ADCTRAJECTORYPOINT_H
