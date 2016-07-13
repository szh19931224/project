// Generated by gencpp from file control_msgs/FollowJointTrajectoryResult.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYRESULT_H
#define CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYRESULT_H


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
struct FollowJointTrajectoryResult_
{
  typedef FollowJointTrajectoryResult_<ContainerAllocator> Type;

  FollowJointTrajectoryResult_()
    : error_code(0)
    , error_string()  {
    }
  FollowJointTrajectoryResult_(const ContainerAllocator& _alloc)
    : error_code(0)
    , error_string(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _error_code_type;
  _error_code_type error_code;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _error_string_type;
  _error_string_type error_string;


    enum { SUCCESSFUL = 0 };
     enum { INVALID_GOAL = -1 };
     enum { INVALID_JOINTS = -2 };
     enum { OLD_HEADER_TIMESTAMP = -3 };
     enum { PATH_TOLERANCE_VIOLATED = -4 };
     enum { GOAL_TOLERANCE_VIOLATED = -5 };
 

  typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> const> ConstPtr;

}; // struct FollowJointTrajectoryResult_

typedef ::control_msgs::FollowJointTrajectoryResult_<std::allocator<void> > FollowJointTrajectoryResult;

typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryResult > FollowJointTrajectoryResultPtr;
typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryResult const> FollowJointTrajectoryResultConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/trajectory_msgs/cmake/../msg'], 'control_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/devel_isolated/control_msgs/share/control_msgs/msg', '/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "493383b18409bfb604b4e26c676401d2";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x493383b18409bfb6ULL;
  static const uint64_t static_value2 = 0x04b4e26c676401d2ULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/FollowJointTrajectoryResult";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int32 error_code\n\
int32 SUCCESSFUL = 0\n\
int32 INVALID_GOAL = -1\n\
int32 INVALID_JOINTS = -2\n\
int32 OLD_HEADER_TIMESTAMP = -3\n\
int32 PATH_TOLERANCE_VIOLATED = -4\n\
int32 GOAL_TOLERANCE_VIOLATED = -5\n\
\n\
# Human readable description of the error code. Contains complementary\n\
# information that is especially useful when execution fails, for instance:\n\
# - INVALID_GOAL: The reason for the invalid goal (e.g., the requested\n\
#   trajectory is in the past).\n\
# - INVALID_JOINTS: The mismatch between the expected controller joints\n\
#   and those provided in the goal.\n\
# - PATH_TOLERANCE_VIOLATED and GOAL_TOLERANCE_VIOLATED: Which joint\n\
#   violated which tolerance, and by how much.\n\
string error_string\n\
\n\
";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.error_code);
      stream.next(m.error_string);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct FollowJointTrajectoryResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::FollowJointTrajectoryResult_<ContainerAllocator>& v)
  {
    s << indent << "error_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.error_code);
    s << indent << "error_string: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.error_string);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYRESULT_H
