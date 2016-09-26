// Generated by gencpp from file common_pb_msgs/PointLLH.msg
// DO NOT EDIT!


#ifndef COMMON_PB_MSGS_MESSAGE_POINTLLH_H
#define COMMON_PB_MSGS_MESSAGE_POINTLLH_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace common_pb_msgs
{
template <class ContainerAllocator>
struct PointLLH_
{
  typedef PointLLH_<ContainerAllocator> Type;

  PointLLH_()
    : lon(0.0)
    , lat(0.0)
    , height(0.0)  {
    }
  PointLLH_(const ContainerAllocator& _alloc)
    : lon(0.0)
    , lat(0.0)
    , height(0.0)  {
  (void)_alloc;
    }



   typedef double _lon_type;
  _lon_type lon;

   typedef double _lat_type;
  _lat_type lat;

   typedef double _height_type;
  _height_type height;




  typedef boost::shared_ptr< ::common_pb_msgs::PointLLH_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::common_pb_msgs::PointLLH_<ContainerAllocator> const> ConstPtr;

}; // struct PointLLH_

typedef ::common_pb_msgs::PointLLH_<std::allocator<void> > PointLLH;

typedef boost::shared_ptr< ::common_pb_msgs::PointLLH > PointLLHPtr;
typedef boost::shared_ptr< ::common_pb_msgs::PointLLH const> PointLLHConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::common_pb_msgs::PointLLH_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::common_pb_msgs::PointLLH_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace common_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'common_pb_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/pb_msgs/common_pb_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::common_pb_msgs::PointLLH_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::common_pb_msgs::PointLLH_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_pb_msgs::PointLLH_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::common_pb_msgs::PointLLH_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_pb_msgs::PointLLH_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::common_pb_msgs::PointLLH_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::common_pb_msgs::PointLLH_<ContainerAllocator> >
{
  static const char* value()
  {
    return "360f7307744ede4ebecd668b1e5c39fc";
  }

  static const char* value(const ::common_pb_msgs::PointLLH_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x360f7307744ede4eULL;
  static const uint64_t static_value2 = 0xbecd668b1e5c39fcULL;
};

template<class ContainerAllocator>
struct DataType< ::common_pb_msgs::PointLLH_<ContainerAllocator> >
{
  static const char* value()
  {
    return "common_pb_msgs/PointLLH";
  }

  static const char* value(const ::common_pb_msgs::PointLLH_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::common_pb_msgs::PointLLH_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 lon \n\
float64 lat \n\
float64 height \n\
";
  }

  static const char* value(const ::common_pb_msgs::PointLLH_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::common_pb_msgs::PointLLH_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lon);
      stream.next(m.lat);
      stream.next(m.height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PointLLH_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::common_pb_msgs::PointLLH_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::common_pb_msgs::PointLLH_<ContainerAllocator>& v)
  {
    s << indent << "lon: ";
    Printer<double>::stream(s, indent + "  ", v.lon);
    s << indent << "lat: ";
    Printer<double>::stream(s, indent + "  ", v.lat);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // COMMON_PB_MSGS_MESSAGE_POINTLLH_H
