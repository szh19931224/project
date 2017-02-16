// Generated by gencpp from file hdmap_pb_msgs/ObjectOverlapInfo.msg
// DO NOT EDIT!


#ifndef HDMAP_PB_MSGS_MESSAGE_OBJECTOVERLAPINFO_H
#define HDMAP_PB_MSGS_MESSAGE_OBJECTOVERLAPINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <hdmap_pb_msgs/Id.h>
#include <hdmap_pb_msgs/LaneOverlapInfo.h>
#include <hdmap_pb_msgs/SignalOverlapInfo.h>
#include <hdmap_pb_msgs/StopSignOverlapInfo.h>
#include <hdmap_pb_msgs/CrosswalkOverlapInfo.h>
#include <hdmap_pb_msgs/JunctionOverlapInfo.h>

namespace hdmap_pb_msgs
{
template <class ContainerAllocator>
struct ObjectOverlapInfo_
{
  typedef ObjectOverlapInfo_<ContainerAllocator> Type;

  ObjectOverlapInfo_()
    : id()
    , lane_overlap_info()
    , signal_overlap_info()
    , stop_sign_overlap_info()
    , crosswalk_overlap_info()
    , junction_overlap_info()  {
    }
  ObjectOverlapInfo_(const ContainerAllocator& _alloc)
    : id(_alloc)
    , lane_overlap_info(_alloc)
    , signal_overlap_info(_alloc)
    , stop_sign_overlap_info(_alloc)
    , crosswalk_overlap_info(_alloc)
    , junction_overlap_info(_alloc)  {
  (void)_alloc;
    }



   typedef  ::hdmap_pb_msgs::Id_<ContainerAllocator>  _id_type;
  _id_type id;

   typedef  ::hdmap_pb_msgs::LaneOverlapInfo_<ContainerAllocator>  _lane_overlap_info_type;
  _lane_overlap_info_type lane_overlap_info;

   typedef  ::hdmap_pb_msgs::SignalOverlapInfo_<ContainerAllocator>  _signal_overlap_info_type;
  _signal_overlap_info_type signal_overlap_info;

   typedef  ::hdmap_pb_msgs::StopSignOverlapInfo_<ContainerAllocator>  _stop_sign_overlap_info_type;
  _stop_sign_overlap_info_type stop_sign_overlap_info;

   typedef  ::hdmap_pb_msgs::CrosswalkOverlapInfo_<ContainerAllocator>  _crosswalk_overlap_info_type;
  _crosswalk_overlap_info_type crosswalk_overlap_info;

   typedef  ::hdmap_pb_msgs::JunctionOverlapInfo_<ContainerAllocator>  _junction_overlap_info_type;
  _junction_overlap_info_type junction_overlap_info;




  typedef boost::shared_ptr< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> const> ConstPtr;

}; // struct ObjectOverlapInfo_

typedef ::hdmap_pb_msgs::ObjectOverlapInfo_<std::allocator<void> > ObjectOverlapInfo;

typedef boost::shared_ptr< ::hdmap_pb_msgs::ObjectOverlapInfo > ObjectOverlapInfoPtr;
typedef boost::shared_ptr< ::hdmap_pb_msgs::ObjectOverlapInfo const> ObjectOverlapInfoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hdmap_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'hdmap_pb_msgs': ['/home/scmbuild/workspaces_cluster.tmp/tmp.20161206.225249.22574/baidu/adu/ros/pb_msgs/hdmap_pb_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "839259b89c01b1fa42a46936f1b66d54";
  }

  static const char* value(const ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x839259b89c01b1faULL;
  static const uint64_t static_value2 = 0x42a46936f1b66d54ULL;
};

template<class ContainerAllocator>
struct DataType< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hdmap_pb_msgs/ObjectOverlapInfo";
  }

  static const char* value(const ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Id id \n\
LaneOverlapInfo lane_overlap_info \n\
SignalOverlapInfo signal_overlap_info \n\
StopSignOverlapInfo stop_sign_overlap_info \n\
CrosswalkOverlapInfo crosswalk_overlap_info \n\
JunctionOverlapInfo junction_overlap_info \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/Id\n\
int8 id \n\
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

  static const char* value(const ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.id);
      stream.next(m.lane_overlap_info);
      stream.next(m.signal_overlap_info);
      stream.next(m.stop_sign_overlap_info);
      stream.next(m.crosswalk_overlap_info);
      stream.next(m.junction_overlap_info);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ObjectOverlapInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hdmap_pb_msgs::ObjectOverlapInfo_<ContainerAllocator>& v)
  {
    s << indent << "id: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::Id_<ContainerAllocator> >::stream(s, indent + "  ", v.id);
    s << indent << "lane_overlap_info: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::LaneOverlapInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.lane_overlap_info);
    s << indent << "signal_overlap_info: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::SignalOverlapInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.signal_overlap_info);
    s << indent << "stop_sign_overlap_info: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::StopSignOverlapInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.stop_sign_overlap_info);
    s << indent << "crosswalk_overlap_info: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::CrosswalkOverlapInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.crosswalk_overlap_info);
    s << indent << "junction_overlap_info: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::JunctionOverlapInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.junction_overlap_info);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HDMAP_PB_MSGS_MESSAGE_OBJECTOVERLAPINFO_H
