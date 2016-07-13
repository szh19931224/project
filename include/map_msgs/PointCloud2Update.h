// Generated by gencpp from file map_msgs/PointCloud2Update.msg
// DO NOT EDIT!


#ifndef MAP_MSGS_MESSAGE_POINTCLOUD2UPDATE_H
#define MAP_MSGS_MESSAGE_POINTCLOUD2UPDATE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <sensor_msgs/PointCloud2.h>

namespace map_msgs
{
template <class ContainerAllocator>
struct PointCloud2Update_
{
  typedef PointCloud2Update_<ContainerAllocator> Type;

  PointCloud2Update_()
    : header()
    , type(0)
    , points()  {
    }
  PointCloud2Update_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , type(0)
    , points(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint32_t _type_type;
  _type_type type;

   typedef  ::sensor_msgs::PointCloud2_<ContainerAllocator>  _points_type;
  _points_type points;


    enum { ADD = 0u };
     enum { DELETE = 1u };
 

  typedef boost::shared_ptr< ::map_msgs::PointCloud2Update_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_msgs::PointCloud2Update_<ContainerAllocator> const> ConstPtr;

}; // struct PointCloud2Update_

typedef ::map_msgs::PointCloud2Update_<std::allocator<void> > PointCloud2Update;

typedef boost::shared_ptr< ::map_msgs::PointCloud2Update > PointCloud2UpdatePtr;
typedef boost::shared_ptr< ::map_msgs::PointCloud2Update const> PointCloud2UpdateConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_msgs::PointCloud2Update_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_msgs::PointCloud2Update_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace map_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/geometry_msgs/cmake/../msg'], 'map_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/map_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::map_msgs::PointCloud2Update_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_msgs::PointCloud2Update_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_msgs::PointCloud2Update_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_msgs::PointCloud2Update_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_msgs::PointCloud2Update_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_msgs::PointCloud2Update_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_msgs::PointCloud2Update_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6c58e4f249ae9cd2b24fb1ee0f99195e";
  }

  static const char* value(const ::map_msgs::PointCloud2Update_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6c58e4f249ae9cd2ULL;
  static const uint64_t static_value2 = 0xb24fb1ee0f99195eULL;
};

template<class ContainerAllocator>
struct DataType< ::map_msgs::PointCloud2Update_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_msgs/PointCloud2Update";
  }

  static const char* value(const ::map_msgs::PointCloud2Update_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_msgs::PointCloud2Update_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 ADD=0\n\
uint32 DELETE=1\n\
Header header\n\
uint32 type          # type of update, one of ADD or DELETE\n\
sensor_msgs/PointCloud2 points\n\
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
MSG: sensor_msgs/PointCloud2\n\
# This message holds a collection of N-dimensional points, which may\n\
# contain additional information such as normals, intensity, etc. The\n\
# point data is stored as a binary blob, its layout described by the\n\
# contents of the \"fields\" array.\n\
\n\
# The point cloud data may be organized 2d (image-like) or 1d\n\
# (unordered). Point clouds organized as 2d images may be produced by\n\
# camera depth sensors such as stereo or time-of-flight.\n\
\n\
# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n\
# points).\n\
Header header\n\
\n\
# 2D structure of the point cloud. If the cloud is unordered, height is\n\
# 1 and width is the length of the point cloud.\n\
uint32 height\n\
uint32 width\n\
\n\
# Describes the channels and their layout in the binary data blob.\n\
PointField[] fields\n\
\n\
bool    is_bigendian # Is this data bigendian?\n\
uint32  point_step   # Length of a point in bytes\n\
uint32  row_step     # Length of a row in bytes\n\
uint8[] data         # Actual point data, size is (row_step*height)\n\
\n\
bool is_dense        # True if there are no invalid points\n\
\n\
================================================================================\n\
MSG: sensor_msgs/PointField\n\
# This message holds the description of one point entry in the\n\
# PointCloud2 message format.\n\
uint8 INT8    = 1\n\
uint8 UINT8   = 2\n\
uint8 INT16   = 3\n\
uint8 UINT16  = 4\n\
uint8 INT32   = 5\n\
uint8 UINT32  = 6\n\
uint8 FLOAT32 = 7\n\
uint8 FLOAT64 = 8\n\
\n\
string name      # Name of field\n\
uint32 offset    # Offset from start of point struct\n\
uint8  datatype  # Datatype enumeration, see above\n\
uint32 count     # How many elements in the field\n\
";
  }

  static const char* value(const ::map_msgs::PointCloud2Update_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_msgs::PointCloud2Update_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.type);
      stream.next(m.points);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct PointCloud2Update_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_msgs::PointCloud2Update_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_msgs::PointCloud2Update_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "type: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.type);
    s << indent << "points: ";
    s << std::endl;
    Printer< ::sensor_msgs::PointCloud2_<ContainerAllocator> >::stream(s, indent + "  ", v.points);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_MSGS_MESSAGE_POINTCLOUD2UPDATE_H
