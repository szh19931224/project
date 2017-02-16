// Generated by gencpp from file hdmap_pb_msgs/Overlap.msg
// DO NOT EDIT!


#ifndef HDMAP_PB_MSGS_MESSAGE_OVERLAP_H
#define HDMAP_PB_MSGS_MESSAGE_OVERLAP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <hdmap_pb_msgs/Id.h>
#include <hdmap_pb_msgs/ObjectOverlapInfo.h>

namespace hdmap_pb_msgs
{
template <class ContainerAllocator>
struct Overlap_
{
  typedef Overlap_<ContainerAllocator> Type;

  Overlap_()
    : id()
    , object()  {
    }
  Overlap_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , object(_alloc)  {
  (void)_alloc;
    }



   typedef  ::hdmap_pb_msgs::Id_<ContainerAllocator>  _id_type;
  _id_type id;

   typedef std::vector< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >::other >  _object_type;
  _object_type object;




  typedef boost::shared_ptr< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> const> ConstPtr;

}; // struct Overlap_

typedef ::hdmap_pb_msgs::Overlap_<std::allocator<void> > Overlap;

typedef boost::shared_ptr< ::hdmap_pb_msgs::Overlap > OverlapPtr;
typedef boost::shared_ptr< ::hdmap_pb_msgs::Overlap const> OverlapConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hdmap_pb_msgs::Overlap_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hdmap_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'hdmap_pb_msgs': ['/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/pb_msgs/hdmap_pb_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d69e2c5f45b1dc96ea1b53d225f986e8";
  }

  static const char* value(const ::hdmap_pb_msgs::Overlap_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd69e2c5f45b1dc96ULL;
  static const uint64_t static_value2 = 0xea1b53d225f986e8ULL;
};

template<class ContainerAllocator>
struct DataType< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hdmap_pb_msgs/Overlap";
  }

  static const char* value(const ::hdmap_pb_msgs::Overlap_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Id id \n\
ObjectOverlapInfo[] object \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/Id\n\
int8 id \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/ObjectOverlapInfo\n\
Id id \n\
LaneOverlapInfo lane_overlap_info \n\
SignalOverlapInfo signal_overlap_info \n\
StopSignOverlapInfo stop_sign_overlap_info \n\
CrosswalkOverlapInfo crosswalk_overlap_info \n\
JunctionOverlapInfo junction_overlap_info \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/LaneOverlapInfo\n\
float64 start_s \n\
float64 end_s \n\
bool is_merge \n\
bool has_precedence \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/SignalOverlapInfo\n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/StopSignOverlapInfo\n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/CrosswalkOverlapInfo\n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/JunctionOverlapInfo\n\
";
  }

  static const char* value(const ::hdmap_pb_msgs::Overlap_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.object);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Overlap_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hdmap_pb_msgs::Overlap_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hdmap_pb_msgs::Overlap_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::Id_<ContainerAllocator> >::stream(s, indent + "  ", v.id);
    s << indent << "object[]" << std::endl;
    for (size_t i = 0; i < v.object.size(); ++i)
    {
      s << indent << "  object[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >::stream(s, indent + "    ", v.object[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // HDMAP_PB_MSGS_MESSAGE_OVERLAP_H
