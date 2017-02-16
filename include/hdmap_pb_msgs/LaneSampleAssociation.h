// Generated by gencpp from file hdmap_pb_msgs/LaneSampleAssociation.msg
// DO NOT EDIT!


#ifndef HDMAP_PB_MSGS_MESSAGE_LANESAMPLEASSOCIATION_H
#define HDMAP_PB_MSGS_MESSAGE_LANESAMPLEASSOCIATION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace hdmap_pb_msgs
{
template <class ContainerAllocator>
struct LaneSampleAssociation_
{
  typedef LaneSampleAssociation_<ContainerAllocator> Type;

  LaneSampleAssociation_()
    : s(0.0)
    , width(0.0)  {
    }
  LaneSampleAssociation_(const ContainerAllocator& _alloc)
    : s(0.0)
    , width(0.0)  {
  (void)_alloc;
    }



   typedef double _s_type;
  _s_type s;

   typedef double _width_type;
  _width_type width;




  typedef boost::shared_ptr< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> const> ConstPtr;

}; // struct LaneSampleAssociation_

typedef ::hdmap_pb_msgs::LaneSampleAssociation_<std::allocator<void> > LaneSampleAssociation;

typedef boost::shared_ptr< ::hdmap_pb_msgs::LaneSampleAssociation > LaneSampleAssociationPtr;
typedef boost::shared_ptr< ::hdmap_pb_msgs::LaneSampleAssociation const> LaneSampleAssociationConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b8e5e301474ef7c2d89e3bb687484700";
  }

  static const char* value(const ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb8e5e301474ef7c2ULL;
  static const uint64_t static_value2 = 0xd89e3bb687484700ULL;
};

template<class ContainerAllocator>
struct DataType< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hdmap_pb_msgs/LaneSampleAssociation";
  }

  static const char* value(const ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 s \n\
float64 width \n\
";
  }

  static const char* value(const ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.s);
      stream.next(m.width);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LaneSampleAssociation_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hdmap_pb_msgs::LaneSampleAssociation_<ContainerAllocator>& v)
  {
    s << indent << "s: ";
    Printer<double>::stream(s, indent + "  ", v.s);
    s << indent << "width: ";
    Printer<double>::stream(s, indent + "  ", v.width);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HDMAP_PB_MSGS_MESSAGE_LANESAMPLEASSOCIATION_H
