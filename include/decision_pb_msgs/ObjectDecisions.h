// Generated by gencpp from file decision_pb_msgs/ObjectDecisions.msg
// DO NOT EDIT!


#ifndef DECISION_PB_MSGS_MESSAGE_OBJECTDECISIONS_H
#define DECISION_PB_MSGS_MESSAGE_OBJECTDECISIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <decision_pb_msgs/ObjectDecision.h>

namespace decision_pb_msgs
{
template <class ContainerAllocator>
struct ObjectDecisions_
{
  typedef ObjectDecisions_<ContainerAllocator> Type;

  ObjectDecisions_()
    : decision()  {
    }
  ObjectDecisions_(const ContainerAllocator& _alloc)
    : decision(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::decision_pb_msgs::ObjectDecision_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::decision_pb_msgs::ObjectDecision_<ContainerAllocator> >::other >  _decision_type;
  _decision_type decision;




  typedef boost::shared_ptr< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectDecisions_

typedef ::decision_pb_msgs::ObjectDecisions_<std::allocator<void> > ObjectDecisions;

typedef boost::shared_ptr< ::decision_pb_msgs::ObjectDecisions > ObjectDecisionsPtr;
typedef boost::shared_ptr< ::decision_pb_msgs::ObjectDecisions const> ObjectDecisionsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace decision_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'perception_pb_msgs': ['/home/caros/ros/share/perception_pb_msgs/cmake/../msg'], 'prediction_pb_msgs': ['/home/caros/ros/share/prediction_pb_msgs/cmake/../msg'], 'decision_pb_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/pb_msgs/decision_pb_msgs/msg'], 'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'header_pb_msgs': ['/home/caros/ros/share/header_pb_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f350af6d937109eae881094b92443486";
  }

  static const char* value(const ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf350af6d937109eaULL;
  static const uint64_t static_value2 = 0xe881094b92443486ULL;
};

template<class ContainerAllocator>
struct DataType< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "decision_pb_msgs/ObjectDecisions";
  }

  static const char* value(const ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ObjectDecision[] decision \n\
\n\
================================================================================\n\
MSG: decision_pb_msgs/ObjectDecision\n\
prediction_pb_msgs/PredictionObstacle prediction \n\
string id \n\
int32 type \n\
ObjectDecisionType decision \n\
\n\
================================================================================\n\
MSG: prediction_pb_msgs/PredictionObstacle\n\
perception_pb_msgs/PerceptionObstacle perception_obstacle \n\
float64 time_stamp \n\
float64 predicted_period \n\
Trajectory[] trajectory \n\
\n\
================================================================================\n\
MSG: perception_pb_msgs/PerceptionObstacle\n\
int32 id \n\
Point position \n\
float64 theta \n\
Point velocity \n\
float64 length \n\
float64 width \n\
float64 height \n\
Point[] polygon_point \n\
float64 tracking_time \n\
int32 type \n\
float64 timestamp \n\
\n\
================================================================================\n\
MSG: perception_pb_msgs/Point\n\
float64 x \n\
float64 y \n\
float64 z \n\
\n\
================================================================================\n\
MSG: prediction_pb_msgs/Trajectory\n\
float64 probability \n\
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
\n\
================================================================================\n\
MSG: decision_pb_msgs/ObjectDecisionType\n\
ObjectIgnore ignore \n\
ObjectStop stop \n\
ObjectFollow follow \n\
ObjectYield yieldX \n\
ObjectOvertake overtake \n\
ObjectNudge nudge \n\
ObjectSidePass sidepass \n\
\n\
================================================================================\n\
MSG: decision_pb_msgs/ObjectIgnore\n\
\n\
================================================================================\n\
MSG: decision_pb_msgs/ObjectStop\n\
float64 distance_s \n\
Range preferred_distance_s \n\
\n\
================================================================================\n\
MSG: decision_pb_msgs/Range\n\
float64 start \n\
float64 end \n\
\n\
================================================================================\n\
MSG: decision_pb_msgs/ObjectFollow\n\
float64 distance_s \n\
Range preferred_distance_s \n\
\n\
================================================================================\n\
MSG: decision_pb_msgs/ObjectYield\n\
float64 distance_s \n\
Range preferred_distance_s \n\
\n\
================================================================================\n\
MSG: decision_pb_msgs/ObjectOvertake\n\
float64 distance_s \n\
Range preferred_distance_s \n\
\n\
================================================================================\n\
MSG: decision_pb_msgs/ObjectNudge\n\
float64 distance_l \n\
int32 type \n\
Range preferred_distance_l \n\
\n\
================================================================================\n\
MSG: decision_pb_msgs/ObjectSidePass\n\
float64 distance_s \n\
Range preferred_distance_s \n\
int32 type \n\
";
  }

  static const char* value(const ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.decision);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ObjectDecisions_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::decision_pb_msgs::ObjectDecisions_<ContainerAllocator>& v)
  {
    s << indent << "decision[]" << std::endl;
    for (size_t i = 0; i < v.decision.size(); ++i)
    {
      s << indent << "  decision[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::decision_pb_msgs::ObjectDecision_<ContainerAllocator> >::stream(s, indent + "    ", v.decision[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // DECISION_PB_MSGS_MESSAGE_OBJECTDECISIONS_H
