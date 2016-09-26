// Generated by gencpp from file control_msgs/QueryTrajectoryStateRequest.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_QUERYTRAJECTORYSTATEREQUEST_H
#define CONTROL_MSGS_MESSAGE_QUERYTRAJECTORYSTATEREQUEST_H


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
struct QueryTrajectoryStateRequest_
{
  typedef QueryTrajectoryStateRequest_<ContainerAllocator> Type;

  QueryTrajectoryStateRequest_()
    : time()  {
    }
  QueryTrajectoryStateRequest_(const ContainerAllocator& _alloc)
    : time()  {
  (void)_alloc;
    }



   typedef ros::Time _time_type;
  _time_type time;




  typedef boost::shared_ptr< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> const> ConstPtr;

}; // struct QueryTrajectoryStateRequest_

typedef ::control_msgs::QueryTrajectoryStateRequest_<std::allocator<void> > QueryTrajectoryStateRequest;

typedef boost::shared_ptr< ::control_msgs::QueryTrajectoryStateRequest > QueryTrajectoryStateRequestPtr;
typedef boost::shared_ptr< ::control_msgs::QueryTrajectoryStateRequest const> QueryTrajectoryStateRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "556a4fb76023a469987922359d08a844";
  }

  static const char* value(const ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x556a4fb76023a469ULL;
  static const uint64_t static_value2 = 0x987922359d08a844ULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/QueryTrajectoryStateRequest";
  }

  static const char* value(const ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time time\n\
";
  }

  static const char* value(const ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.time);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct QueryTrajectoryStateRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::QueryTrajectoryStateRequest_<ContainerAllocator>& v)
  {
    s << indent << "time: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.time);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_QUERYTRAJECTORYSTATEREQUEST_H
