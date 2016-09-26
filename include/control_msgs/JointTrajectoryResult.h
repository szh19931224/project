// Generated by gencpp from file control_msgs/JointTrajectoryResult.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_JOINTTRAJECTORYRESULT_H
#define CONTROL_MSGS_MESSAGE_JOINTTRAJECTORYRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace control_msgs
{
template <class ContainerAllocator>
struct JointTrajectoryResult_
{
  typedef JointTrajectoryResult_<ContainerAllocator> Type;

  JointTrajectoryResult_()
    {
    }
  JointTrajectoryResult_(const ContainerAllocator& _alloc)
    {
  (void)_alloc;
    }






  typedef boost::shared_ptr< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> const> ConstPtr;

}; // struct JointTrajectoryResult_

typedef ::control_msgs::JointTrajectoryResult_<std::allocator<void> > JointTrajectoryResult;

typedef boost::shared_ptr< ::control_msgs::JointTrajectoryResult > JointTrajectoryResultPtr;
typedef boost::shared_ptr< ::control_msgs::JointTrajectoryResult const> JointTrajectoryResultConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::JointTrajectoryResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/caros/ros/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/caros/ros/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/caros/ros/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/home/caros/ros/share/trajectory_msgs/cmake/../msg'], 'control_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/devel_isolated/control_msgs/share/control_msgs/msg', '/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d41d8cd98f00b204e9800998ecf8427e";
  }

  static const char* value(const ::control_msgs::JointTrajectoryResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd41d8cd98f00b204ULL;
  static const uint64_t static_value2 = 0xe9800998ecf8427eULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/JointTrajectoryResult";
  }

  static const char* value(const ::control_msgs::JointTrajectoryResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
";
  }

  static const char* value(const ::control_msgs::JointTrajectoryResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream&, T)
    {}

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct JointTrajectoryResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::JointTrajectoryResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream&, const std::string&, const ::control_msgs::JointTrajectoryResult_<ContainerAllocator>&)
  {}
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_JOINTTRAJECTORYRESULT_H
