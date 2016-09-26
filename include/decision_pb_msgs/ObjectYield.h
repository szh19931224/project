// Generated by gencpp from file decision_pb_msgs/ObjectYield.msg
// DO NOT EDIT!


#ifndef DECISION_PB_MSGS_MESSAGE_OBJECTYIELD_H
#define DECISION_PB_MSGS_MESSAGE_OBJECTYIELD_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <decision_pb_msgs/Range.h>

namespace decision_pb_msgs
{
template <class ContainerAllocator>
struct ObjectYield_
{
  typedef ObjectYield_<ContainerAllocator> Type;

  ObjectYield_()
    : distance_s(0.0)
    , preferred_distance_s()  {
    }
  ObjectYield_(const ContainerAllocator& _alloc)
    : distance_s(0.0)
    , preferred_distance_s(_alloc)  {
  (void)_alloc;
    }



   typedef double _distance_s_type;
  _distance_s_type distance_s;

   typedef  ::decision_pb_msgs::Range_<ContainerAllocator>  _preferred_distance_s_type;
  _preferred_distance_s_type preferred_distance_s;




  typedef boost::shared_ptr< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectYield_

typedef ::decision_pb_msgs::ObjectYield_<std::allocator<void> > ObjectYield;

typedef boost::shared_ptr< ::decision_pb_msgs::ObjectYield > ObjectYieldPtr;
typedef boost::shared_ptr< ::decision_pb_msgs::ObjectYield const> ObjectYieldConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::decision_pb_msgs::ObjectYield_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace decision_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'perception_pb_msgs': ['/home/caros/ros/share/perception_pb_msgs/cmake/../msg'], 'prediction_pb_msgs': ['/home/caros/ros/share/prediction_pb_msgs/cmake/../msg'], 'decision_pb_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/pb_msgs/decision_pb_msgs/msg'], 'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'header_pb_msgs': ['/home/caros/ros/share/header_pb_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9c96f49701835268bc12dea5225ffaca";
  }

  static const char* value(const ::decision_pb_msgs::ObjectYield_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9c96f49701835268ULL;
  static const uint64_t static_value2 = 0xbc12dea5225ffacaULL;
};

template<class ContainerAllocator>
struct DataType< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> >
{
  static const char* value()
  {
    return "decision_pb_msgs/ObjectYield";
  }

  static const char* value(const ::decision_pb_msgs::ObjectYield_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 distance_s \n\
Range preferred_distance_s \n\
\n\
================================================================================\n\
MSG: decision_pb_msgs/Range\n\
float64 start \n\
float64 end \n\
";
  }

  static const char* value(const ::decision_pb_msgs::ObjectYield_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.distance_s);
      stream.next(m.preferred_distance_s);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ObjectYield_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::decision_pb_msgs::ObjectYield_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::decision_pb_msgs::ObjectYield_<ContainerAllocator>& v)
  {
    s << indent << "distance_s: ";
    Printer<double>::stream(s, indent + "  ", v.distance_s);
    s << indent << "preferred_distance_s: ";
    s << std::endl;
    Printer< ::decision_pb_msgs::Range_<ContainerAllocator> >::stream(s, indent + "  ", v.preferred_distance_s);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DECISION_PB_MSGS_MESSAGE_OBJECTYIELD_H
