// Generated by gencpp from file control_msgs/FollowJointTrajectoryAction.msg
// DO NOT EDIT!


#ifndef CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYACTION_H
#define CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <control_msgs/FollowJointTrajectoryActionGoal.h>
#include <control_msgs/FollowJointTrajectoryActionResult.h>
#include <control_msgs/FollowJointTrajectoryActionFeedback.h>

namespace control_msgs
{
template <class ContainerAllocator>
struct FollowJointTrajectoryAction_
{
  typedef FollowJointTrajectoryAction_<ContainerAllocator> Type;

  FollowJointTrajectoryAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  FollowJointTrajectoryAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::control_msgs::FollowJointTrajectoryActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::control_msgs::FollowJointTrajectoryActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::control_msgs::FollowJointTrajectoryActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> const> ConstPtr;

}; // struct FollowJointTrajectoryAction_

typedef ::control_msgs::FollowJointTrajectoryAction_<std::allocator<void> > FollowJointTrajectoryAction;

typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryAction > FollowJointTrajectoryActionPtr;
typedef boost::shared_ptr< ::control_msgs::FollowJointTrajectoryAction const> FollowJointTrajectoryActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace control_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/caros/ros/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/caros/ros/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/caros/ros/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/home/caros/ros/share/trajectory_msgs/cmake/../msg'], 'control_msgs': ['/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/devel_isolated/control_msgs/share/control_msgs/msg', '/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/control_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bc4f9b743838566551c0390c65f1a248";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbc4f9b7438385665ULL;
  static const uint64_t static_value2 = 0x51c0390c65f1a248ULL;
};

template<class ContainerAllocator>
struct DataType< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "control_msgs/FollowJointTrajectoryAction";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
FollowJointTrajectoryActionGoal action_goal\n\
FollowJointTrajectoryActionResult action_result\n\
FollowJointTrajectoryActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: control_msgs/FollowJointTrajectoryActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
FollowJointTrajectoryGoal goal\n\
\n\
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
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: control_msgs/FollowJointTrajectoryGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
# The joint trajectory to follow\n\
trajectory_msgs/JointTrajectory trajectory\n\
\n\
# Tolerances for the trajectory.  If the measured joint values fall\n\
# outside the tolerances the trajectory goal is aborted.  Any\n\
# tolerances that are not specified (by being omitted or set to 0) are\n\
# set to the defaults for the action server (often taken from the\n\
# parameter server).\n\
\n\
# Tolerances applied to the joints as the trajectory is executed.  If\n\
# violated, the goal aborts with error_code set to\n\
# PATH_TOLERANCE_VIOLATED.\n\
JointTolerance[] path_tolerance\n\
\n\
# To report success, the joints must be within goal_tolerance of the\n\
# final trajectory value.  The goal must be achieved by time the\n\
# trajectory ends plus goal_time_tolerance.  (goal_time_tolerance\n\
# allows some leeway in time, so that the trajectory goal can still\n\
# succeed even if the joints reach the goal some time after the\n\
# precise end time of the trajectory).\n\
#\n\
# If the joints are not within goal_tolerance after \"trajectory finish\n\
# time\" + goal_time_tolerance, the goal aborts with error_code set to\n\
# GOAL_TOLERANCE_VIOLATED\n\
JointTolerance[] goal_tolerance\n\
duration goal_time_tolerance\n\
\n\
\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectory\n\
Header header\n\
string[] joint_names\n\
JointTrajectoryPoint[] points\n\
================================================================================\n\
MSG: trajectory_msgs/JointTrajectoryPoint\n\
# Each trajectory point specifies either positions[, velocities[, accelerations]]\n\
# or positions[, effort] for the trajectory to be executed.\n\
# All specified values are in the same order as the joint names in JointTrajectory.msg\n\
\n\
float64[] positions\n\
float64[] velocities\n\
float64[] accelerations\n\
float64[] effort\n\
duration time_from_start\n\
\n\
================================================================================\n\
MSG: control_msgs/JointTolerance\n\
# The tolerances specify the amount the position, velocity, and\n\
# accelerations can vary from the setpoints.  For example, in the case\n\
# of trajectory control, when the actual position varies beyond\n\
# (desired position + position tolerance), the trajectory goal may\n\
# abort.\n\
# \n\
# There are two special values for tolerances:\n\
#  * 0 - The tolerance is unspecified and will remain at whatever the default is\n\
#  * -1 - The tolerance is \"erased\".  If there was a default, the joint will be\n\
#         allowed to move without restriction.\n\
\n\
string name\n\
float64 position  # in radians or meters (for a revolute or prismatic joint, respectively)\n\
float64 velocity  # in rad/sec or m/sec\n\
float64 acceleration  # in rad/sec^2 or m/sec^2\n\
\n\
================================================================================\n\
MSG: control_msgs/FollowJointTrajectoryActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
FollowJointTrajectoryResult result\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: control_msgs/FollowJointTrajectoryResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
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
\n\
================================================================================\n\
MSG: control_msgs/FollowJointTrajectoryActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
FollowJointTrajectoryFeedback feedback\n\
\n\
================================================================================\n\
MSG: control_msgs/FollowJointTrajectoryFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
Header header\n\
string[] joint_names\n\
trajectory_msgs/JointTrajectoryPoint desired\n\
trajectory_msgs/JointTrajectoryPoint actual\n\
trajectory_msgs/JointTrajectoryPoint error\n\
\n\
";
  }

  static const char* value(const ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct FollowJointTrajectoryAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::control_msgs::FollowJointTrajectoryAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::control_msgs::FollowJointTrajectoryActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::control_msgs::FollowJointTrajectoryActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::control_msgs::FollowJointTrajectoryActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CONTROL_MSGS_MESSAGE_FOLLOWJOINTTRAJECTORYACTION_H
