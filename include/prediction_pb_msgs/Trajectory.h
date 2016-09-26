// Generated by gencpp from file prediction_pb_msgs/Trajectory.msg
// DO NOT EDIT!


#ifndef PREDICTION_PB_MSGS_MESSAGE_TRAJECTORY_H
#define PREDICTION_PB_MSGS_MESSAGE_TRAJECTORY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <prediction_pb_msgs/TrajectoryPoint.h>

namespace prediction_pb_msgs
{
template <class ContainerAllocator>
struct Trajectory_
{
  typedef Trajectory_<ContainerAllocator> Type;

  Trajectory_()
    : probability(0.0)
    , trajectory_point()  {
    }
  Trajectory_(const ContainerAllocator& _alloc)
    : probability(0.0)
    , trajectory_point(_alloc)  {
  (void)_alloc;
    }



   typedef double _probability_type;
  _probability_type probability;

   typedef std::vector< ::prediction_pb_msgs::TrajectoryPoint_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::prediction_pb_msgs::TrajectoryPoint_<ContainerAllocator> >::other >  _trajectory_point_type;
  _trajectory_point_type trajectory_point;




  typedef boost::shared_ptr< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> const> ConstPtr;

}; // struct Trajectory_

typedef ::prediction_pb_msgs::Trajectory_<std::allocator<void> > Trajectory;

typedef boost::shared_ptr< ::prediction_pb_msgs::Trajectory > TrajectoryPtr;
typedef boost::shared_ptr< ::prediction_pb_msgs::Trajectory const> TrajectoryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::prediction_pb_msgs::Trajectory_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace prediction_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'perception_pb_msgs': ['/home/caros/ros/share/perception_pb_msgs/cmake/../msg'], 'prediction_pb_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/pb_msgs/prediction_pb_msgs/msg'], 'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'header_pb_msgs': ['/home/caros/ros/share/header_pb_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a44a558c9296d8f765d2e2a0e35fbf23";
  }

  static const char* value(const ::prediction_pb_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa44a558c9296d8f7ULL;
  static const uint64_t static_value2 = 0x65d2e2a0e35fbf23ULL;
};

template<class ContainerAllocator>
struct DataType< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "prediction_pb_msgs/Trajectory";
  }

  static const char* value(const ::prediction_pb_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 probability \n\
TrajectoryPoint[] trajectory_point \n\
\n\
================================================================================\n\
MSG: prediction_pb_msgs/TrajectoryPoint\n\
float64 x \n\
float64 y \n\
float64 z \n\
float64 velocity \n\
float64 t \n\
float64 heading \n\
";
  }

  static const char* value(const ::prediction_pb_msgs::Trajectory_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.probability);
      stream.next(m.trajectory_point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Trajectory_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::prediction_pb_msgs::Trajectory_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::prediction_pb_msgs::Trajectory_<ContainerAllocator>& v)
  {
    s << indent << "probability: ";
    Printer<double>::stream(s, indent + "  ", v.probability);
    s << indent << "trajectory_point[]" << std::endl;
    for (size_t i = 0; i < v.trajectory_point.size(); ++i)
    {
      s << indent << "  trajectory_point[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::prediction_pb_msgs::TrajectoryPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.trajectory_point[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PREDICTION_PB_MSGS_MESSAGE_TRAJECTORY_H
