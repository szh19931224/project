// Generated by gencpp from file sensor_msgs/MultiDOFJointState.msg
// DO NOT EDIT!


#ifndef SENSOR_MSGS_MESSAGE_MULTIDOFJOINTSTATE_H
#define SENSOR_MSGS_MESSAGE_MULTIDOFJOINTSTATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Transform.h>
#include <geometry_msgs/Twist.h>
#include <geometry_msgs/Wrench.h>

namespace sensor_msgs
{
template <class ContainerAllocator>
struct MultiDOFJointState_
{
  typedef MultiDOFJointState_<ContainerAllocator> Type;

  MultiDOFJointState_()
    : header()
    , joint_names()
    , transforms()
    , twist()
    , wrench()  {
    }
  MultiDOFJointState_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , joint_names(_alloc)
    , transforms(_alloc)
    , twist(_alloc)
    , wrench(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > , typename ContainerAllocator::template rebind<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::other >  _joint_names_type;
  _joint_names_type joint_names;

   typedef std::vector< ::geometry_msgs::Transform_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Transform_<ContainerAllocator> >::other >  _transforms_type;
  _transforms_type transforms;

   typedef std::vector< ::geometry_msgs::Twist_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Twist_<ContainerAllocator> >::other >  _twist_type;
  _twist_type twist;

   typedef std::vector< ::geometry_msgs::Wrench_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Wrench_<ContainerAllocator> >::other >  _wrench_type;
  _wrench_type wrench;




  typedef boost::shared_ptr< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> const> ConstPtr;

}; // struct MultiDOFJointState_

typedef ::sensor_msgs::MultiDOFJointState_<std::allocator<void> > MultiDOFJointState;

typedef boost::shared_ptr< ::sensor_msgs::MultiDOFJointState > MultiDOFJointStatePtr;
typedef boost::shared_ptr< ::sensor_msgs::MultiDOFJointState const> MultiDOFJointStateConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace sensor_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/geometry_msgs/cmake/../msg'], 'sensor_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/common_msgs/sensor_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "690f272f0640d2631c305eeb8301e59d";
  }

  static const char* value(const ::sensor_msgs::MultiDOFJointState_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x690f272f0640d263ULL;
  static const uint64_t static_value2 = 0x1c305eeb8301e59dULL;
};

template<class ContainerAllocator>
struct DataType< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "sensor_msgs/MultiDOFJointState";
  }

  static const char* value(const ::sensor_msgs::MultiDOFJointState_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Representation of state for joints with multiple degrees of freedom, \n\
# following the structure of JointState.\n\
#\n\
# It is assumed that a joint in a system corresponds to a transform that gets applied \n\
# along the kinematic chain. For example, a planar joint (as in URDF) is 3DOF (x, y, yaw)\n\
# and those 3DOF can be expressed as a transformation matrix, and that transformation\n\
# matrix can be converted back to (x, y, yaw)\n\
#\n\
# Each joint is uniquely identified by its name\n\
# The header specifies the time at which the joint states were recorded. All the joint states\n\
# in one message have to be recorded at the same time.\n\
#\n\
# This message consists of a multiple arrays, one for each part of the joint state. \n\
# The goal is to make each of the fields optional. When e.g. your joints have no\n\
# wrench associated with them, you can leave the wrench array empty. \n\
#\n\
# All arrays in this message should have the same size, or be empty.\n\
# This is the only way to uniquely associate the joint name with the correct\n\
# states.\n\
\n\
Header header\n\
\n\
string[] joint_names\n\
geometry_msgs/Transform[] transforms\n\
geometry_msgs/Twist[] twist\n\
geometry_msgs/Wrench[] wrench\n\
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
MSG: geometry_msgs/Transform\n\
# This represents the transform between two coordinate frames in free space.\n\
\n\
Vector3 translation\n\
Quaternion rotation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Twist\n\
# This expresses velocity in free space broken into its linear and angular parts.\n\
Vector3  linear\n\
Vector3  angular\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Wrench\n\
# This represents force in free space, separated into\n\
# its linear and angular parts.\n\
Vector3  force\n\
Vector3  torque\n\
";
  }

  static const char* value(const ::sensor_msgs::MultiDOFJointState_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.joint_names);
      stream.next(m.transforms);
      stream.next(m.twist);
      stream.next(m.wrench);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MultiDOFJointState_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::sensor_msgs::MultiDOFJointState_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::sensor_msgs::MultiDOFJointState_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "joint_names[]" << std::endl;
    for (size_t i = 0; i < v.joint_names.size(); ++i)
    {
      s << indent << "  joint_names[" << i << "]: ";
      Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.joint_names[i]);
    }
    s << indent << "transforms[]" << std::endl;
    for (size_t i = 0; i < v.transforms.size(); ++i)
    {
      s << indent << "  transforms[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Transform_<ContainerAllocator> >::stream(s, indent + "    ", v.transforms[i]);
    }
    s << indent << "twist[]" << std::endl;
    for (size_t i = 0; i < v.twist.size(); ++i)
    {
      s << indent << "  twist[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Twist_<ContainerAllocator> >::stream(s, indent + "    ", v.twist[i]);
    }
    s << indent << "wrench[]" << std::endl;
    for (size_t i = 0; i < v.wrench.size(); ++i)
    {
      s << indent << "  wrench[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Wrench_<ContainerAllocator> >::stream(s, indent + "    ", v.wrench[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SENSOR_MSGS_MESSAGE_MULTIDOFJOINTSTATE_H
