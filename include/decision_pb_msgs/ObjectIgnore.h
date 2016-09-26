// Generated by gencpp from file decision_pb_msgs/ObjectIgnore.msg
// DO NOT EDIT!


#ifndef DECISION_PB_MSGS_MESSAGE_OBJECTIGNORE_H
#define DECISION_PB_MSGS_MESSAGE_OBJECTIGNORE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace decision_pb_msgs
{
template <class ContainerAllocator>
struct ObjectIgnore_
{
  typedef ObjectIgnore_<ContainerAllocator> Type;

  ObjectIgnore_()
    {
    }
  ObjectIgnore_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectIgnore_

typedef ::decision_pb_msgs::ObjectIgnore_<std::allocator<void> > ObjectIgnore;

typedef boost::shared_ptr< ::decision_pb_msgs::ObjectIgnore > ObjectIgnorePtr;
typedef boost::shared_ptr< ::decision_pb_msgs::ObjectIgnore const> ObjectIgnoreConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> >
{
  static const char* value()
  {
    return "decision_pb_msgs/ObjectIgnore";
  }

  static const char* value(const ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> >
{
  static const char* value()
  {
    return "\n\
";
  }

  static const char* value(const ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ObjectIgnore_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::decision_pb_msgs::ObjectIgnore_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // DECISION_PB_MSGS_MESSAGE_OBJECTIGNORE_H
