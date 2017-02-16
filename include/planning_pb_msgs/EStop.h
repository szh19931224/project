// Generated by gencpp from file planning_pb_msgs/EStop.msg
// DO NOT EDIT!


#ifndef PLANNING_PB_MSGS_MESSAGE_ESTOP_H
#define PLANNING_PB_MSGS_MESSAGE_ESTOP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace planning_pb_msgs
{
template <class ContainerAllocator>
struct EStop_
{
  typedef EStop_<ContainerAllocator> Type;

  EStop_()
    : is_estop(false)  {
    }
  EStop_(const ContainerAllocator& _alloc)
    : is_estop(false)  {
  (void)_alloc;
    }



   typedef uint8_t _is_estop_type;
  _is_estop_type is_estop;




  typedef boost::shared_ptr< ::planning_pb_msgs::EStop_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::planning_pb_msgs::EStop_<ContainerAllocator> const> ConstPtr;

}; // struct EStop_

typedef ::planning_pb_msgs::EStop_<std::allocator<void> > EStop;

typedef boost::shared_ptr< ::planning_pb_msgs::EStop > EStopPtr;
typedef boost::shared_ptr< ::planning_pb_msgs::EStop const> EStopConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::planning_pb_msgs::EStop_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::planning_pb_msgs::EStop_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace planning_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'planning_pb_msgs': ['/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/pb_msgs/planning_pb_msgs/msg'], 'header_pb_msgs': ['/home/caros/ros/share/header_pb_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::planning_pb_msgs::EStop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::planning_pb_msgs::EStop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planning_pb_msgs::EStop_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::planning_pb_msgs::EStop_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planning_pb_msgs::EStop_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::planning_pb_msgs::EStop_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::planning_pb_msgs::EStop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f4581ae42ba8fbf872275b63a362b1de";
  }

  static const char* value(const ::planning_pb_msgs::EStop_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf4581ae42ba8fbf8ULL;
  static const uint64_t static_value2 = 0x72275b63a362b1deULL;
};

template<class ContainerAllocator>
struct DataType< ::planning_pb_msgs::EStop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "planning_pb_msgs/EStop";
  }

  static const char* value(const ::planning_pb_msgs::EStop_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::planning_pb_msgs::EStop_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool is_estop \n\
";
  }

  static const char* value(const ::planning_pb_msgs::EStop_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::planning_pb_msgs::EStop_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.is_estop);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct EStop_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::planning_pb_msgs::EStop_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::planning_pb_msgs::EStop_<ContainerAllocator>& v)
  {
    s << indent << "is_estop: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_estop);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PLANNING_PB_MSGS_MESSAGE_ESTOP_H
