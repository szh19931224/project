// Generated by gencpp from file routing_pb_msgs/RoutingRequest.msg
// DO NOT EDIT!


#ifndef ROUTING_PB_MSGS_MESSAGE_ROUTINGREQUEST_H
#define ROUTING_PB_MSGS_MESSAGE_ROUTINGREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <header_pb_msgs/Header.h>
#include <routing_pb_msgs/LaneWaypoint.h>
#include <routing_pb_msgs/LaneWaypoint.h>
#include <routing_pb_msgs/Lane.h>

namespace routing_pb_msgs
{
template <class ContainerAllocator>
struct RoutingRequest_
{
  typedef RoutingRequest_<ContainerAllocator> Type;

  RoutingRequest_()
    : header()
    , start()
    , end()
    , blacklisted_lane()  {
    }
  RoutingRequest_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , start(_alloc)
    , end(_alloc)
    , blacklisted_lane(_alloc)  {
  (void)_alloc;
    }



   typedef  ::header_pb_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::routing_pb_msgs::LaneWaypoint_<ContainerAllocator>  _start_type;
  _start_type start;

   typedef  ::routing_pb_msgs::LaneWaypoint_<ContainerAllocator>  _end_type;
  _end_type end;

   typedef std::vector< ::routing_pb_msgs::Lane_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::routing_pb_msgs::Lane_<ContainerAllocator> >::other >  _blacklisted_lane_type;
  _blacklisted_lane_type blacklisted_lane;




  typedef boost::shared_ptr< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RoutingRequest_

typedef ::routing_pb_msgs::RoutingRequest_<std::allocator<void> > RoutingRequest;

typedef boost::shared_ptr< ::routing_pb_msgs::RoutingRequest > RoutingRequestPtr;
typedef boost::shared_ptr< ::routing_pb_msgs::RoutingRequest const> RoutingRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace routing_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'routing_pb_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/pb_msgs/routing_pb_msgs/msg'], 'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'header_pb_msgs': ['/home/caros/ros/share/header_pb_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4ec406a0c13a392eb58f483f1ae2b00e";
  }

  static const char* value(const ::routing_pb_msgs::RoutingRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4ec406a0c13a392eULL;
  static const uint64_t static_value2 = 0xb58f483f1ae2b00eULL;
};

template<class ContainerAllocator>
struct DataType< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "routing_pb_msgs/RoutingRequest";
  }

  static const char* value(const ::routing_pb_msgs::RoutingRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "header_pb_msgs/Header header \n\
LaneWaypoint start \n\
LaneWaypoint end \n\
Lane[] blacklisted_lane \n\
\n\
================================================================================\n\
MSG: header_pb_msgs/Header\n\
float64 timestamp_sec \n\
string module_name \n\
uint32 sequence_num \n\
\n\
================================================================================\n\
MSG: routing_pb_msgs/LaneWaypoint\n\
string id \n\
float64 s \n\
Pose pose \n\
\n\
================================================================================\n\
MSG: routing_pb_msgs/Pose\n\
float64 x \n\
float64 y \n\
\n\
================================================================================\n\
MSG: routing_pb_msgs/Lane\n\
string id \n\
float64 start_s \n\
float64 end_s \n\
float64 expired_timestamp \n\
";
  }

  static const char* value(const ::routing_pb_msgs::RoutingRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.start);
      stream.next(m.end);
      stream.next(m.blacklisted_lane);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct RoutingRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::routing_pb_msgs::RoutingRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::routing_pb_msgs::RoutingRequest_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::header_pb_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "start: ";
    s << std::endl;
    Printer< ::routing_pb_msgs::LaneWaypoint_<ContainerAllocator> >::stream(s, indent + "  ", v.start);
    s << indent << "end: ";
    s << std::endl;
    Printer< ::routing_pb_msgs::LaneWaypoint_<ContainerAllocator> >::stream(s, indent + "  ", v.end);
    s << indent << "blacklisted_lane[]" << std::endl;
    for (size_t i = 0; i < v.blacklisted_lane.size(); ++i)
    {
      s << indent << "  blacklisted_lane[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::routing_pb_msgs::Lane_<ContainerAllocator> >::stream(s, indent + "    ", v.blacklisted_lane[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROUTING_PB_MSGS_MESSAGE_ROUTINGREQUEST_H
