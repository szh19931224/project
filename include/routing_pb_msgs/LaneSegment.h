// Generated by gencpp from file routing_pb_msgs/LaneSegment.msg
// DO NOT EDIT!


#ifndef ROUTING_PB_MSGS_MESSAGE_LANESEGMENT_H
#define ROUTING_PB_MSGS_MESSAGE_LANESEGMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace routing_pb_msgs
{
template <class ContainerAllocator>
struct LaneSegment_
{
  typedef LaneSegment_<ContainerAllocator> Type;

  LaneSegment_()
    : id()
    , start_s(0.0)
    , end_s(0.0)  {
    }
  LaneSegment_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , start_s(0.0)
    , end_s(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _id_type;
  _id_type id;

   typedef double _start_s_type;
  _start_s_type start_s;

   typedef double _end_s_type;
  _end_s_type end_s;




  typedef boost::shared_ptr< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> const> ConstPtr;

}; // struct LaneSegment_

typedef ::routing_pb_msgs::LaneSegment_<std::allocator<void> > LaneSegment;

typedef boost::shared_ptr< ::routing_pb_msgs::LaneSegment > LaneSegmentPtr;
typedef boost::shared_ptr< ::routing_pb_msgs::LaneSegment const> LaneSegmentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::routing_pb_msgs::LaneSegment_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace routing_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'routing_pb_msgs': ['/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/pb_msgs/routing_pb_msgs/msg'], 'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'header_pb_msgs': ['/home/caros/ros/share/header_pb_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "84908c83fe9738f40eb153cc54d9330b";
  }

  static const char* value(const ::routing_pb_msgs::LaneSegment_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x84908c83fe9738f4ULL;
  static const uint64_t static_value2 = 0x0eb153cc54d9330bULL;
};

template<class ContainerAllocator>
struct DataType< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "routing_pb_msgs/LaneSegment";
  }

  static const char* value(const ::routing_pb_msgs::LaneSegment_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string id \n\
float64 start_s \n\
float64 end_s \n\
";
  }

  static const char* value(const ::routing_pb_msgs::LaneSegment_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.start_s);
      stream.next(m.end_s);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LaneSegment_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::routing_pb_msgs::LaneSegment_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::routing_pb_msgs::LaneSegment_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.id);
    s << indent << "start_s: ";
    Printer<double>::stream(s, indent + "  ", v.start_s);
    s << indent << "end_s: ";
    Printer<double>::stream(s, indent + "  ", v.end_s);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROUTING_PB_MSGS_MESSAGE_LANESEGMENT_H
