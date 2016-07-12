// Generated by gencpp from file actionlib/TestRequestAction.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_MESSAGE_TESTREQUESTACTION_H
#define ACTIONLIB_MESSAGE_TESTREQUESTACTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <actionlib/TestRequestActionGoal.h>
#include <actionlib/TestRequestActionResult.h>
#include <actionlib/TestRequestActionFeedback.h>

namespace actionlib
{
template <class ContainerAllocator>
struct TestRequestAction_
{
  typedef TestRequestAction_<ContainerAllocator> Type;

  TestRequestAction_()
    : action_goal()
    , action_result()
    , action_feedback()  {
    }
  TestRequestAction_(const ContainerAllocator& _alloc)
    : action_goal(_alloc)
    , action_result(_alloc)
    , action_feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::actionlib::TestRequestActionGoal_<ContainerAllocator>  _action_goal_type;
  _action_goal_type action_goal;

   typedef  ::actionlib::TestRequestActionResult_<ContainerAllocator>  _action_result_type;
  _action_result_type action_result;

   typedef  ::actionlib::TestRequestActionFeedback_<ContainerAllocator>  _action_feedback_type;
  _action_feedback_type action_feedback;




  typedef boost::shared_ptr< ::actionlib::TestRequestAction_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib::TestRequestAction_<ContainerAllocator> const> ConstPtr;

}; // struct TestRequestAction_

typedef ::actionlib::TestRequestAction_<std::allocator<void> > TestRequestAction;

typedef boost::shared_ptr< ::actionlib::TestRequestAction > TestRequestActionPtr;
typedef boost::shared_ptr< ::actionlib::TestRequestAction const> TestRequestActionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib::TestRequestAction_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib::TestRequestAction_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'actionlib': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/devel_isolated/actionlib/share/actionlib/msg'], 'std_msgs': ['/home/caros/ros/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/caros/ros/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actionlib::TestRequestAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib::TestRequestAction_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib::TestRequestAction_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib::TestRequestAction_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib::TestRequestAction_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib::TestRequestAction_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib::TestRequestAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dc44b1f4045dbf0d1db54423b3b86b30";
  }

  static const char* value(const ::actionlib::TestRequestAction_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xdc44b1f4045dbf0dULL;
  static const uint64_t static_value2 = 0x1db54423b3b86b30ULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib::TestRequestAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib/TestRequestAction";
  }

  static const char* value(const ::actionlib::TestRequestAction_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib::TestRequestAction_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
TestRequestActionGoal action_goal\n\
TestRequestActionResult action_result\n\
TestRequestActionFeedback action_feedback\n\
\n\
================================================================================\n\
MSG: actionlib/TestRequestActionGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalID goal_id\n\
TestRequestGoal goal\n\
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
MSG: actionlib/TestRequestGoal\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int32 TERMINATE_SUCCESS = 0\n\
int32 TERMINATE_ABORTED = 1\n\
int32 TERMINATE_REJECTED = 2\n\
int32 TERMINATE_LOSE = 3\n\
int32 TERMINATE_DROP = 4\n\
int32 TERMINATE_EXCEPTION = 5\n\
int32 terminate_status\n\
bool ignore_cancel  # If true, ignores requests to cancel\n\
string result_text\n\
int32 the_result    # Desired value for the_result in the Result\n\
bool is_simple_client\n\
duration delay_accept  # Delays accepting the goal by this amount of time\n\
duration delay_terminate  # Delays terminating for this amount of time\n\
duration pause_status  # Pauses the status messages for this amount of time\n\
\n\
================================================================================\n\
MSG: actionlib/TestRequestActionResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
TestRequestResult result\n\
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
MSG: actionlib/TestRequestResult\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int32 the_result\n\
bool is_simple_server\n\
\n\
================================================================================\n\
MSG: actionlib/TestRequestActionFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
TestRequestFeedback feedback\n\
\n\
================================================================================\n\
MSG: actionlib/TestRequestFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
";
  }

  static const char* value(const ::actionlib::TestRequestAction_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib::TestRequestAction_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.action_goal);
      stream.next(m.action_result);
      stream.next(m.action_feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TestRequestAction_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib::TestRequestAction_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib::TestRequestAction_<ContainerAllocator>& v)
  {
    s << indent << "action_goal: ";
    s << std::endl;
    Printer< ::actionlib::TestRequestActionGoal_<ContainerAllocator> >::stream(s, indent + "  ", v.action_goal);
    s << indent << "action_result: ";
    s << std::endl;
    Printer< ::actionlib::TestRequestActionResult_<ContainerAllocator> >::stream(s, indent + "  ", v.action_result);
    s << indent << "action_feedback: ";
    s << std::endl;
    Printer< ::actionlib::TestRequestActionFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.action_feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_MESSAGE_TESTREQUESTACTION_H
