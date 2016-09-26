// Generated by gencpp from file map_msgs/ProjectedMap.msg
// DO NOT EDIT!


#ifndef MAP_MSGS_MESSAGE_PROJECTEDMAP_H
#define MAP_MSGS_MESSAGE_PROJECTEDMAP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_msgs/OccupancyGrid.h>

namespace map_msgs
{
template <class ContainerAllocator>
struct ProjectedMap_
{
  typedef ProjectedMap_<ContainerAllocator> Type;

  ProjectedMap_()
    : map()
    , min_z(0.0)
    , max_z(0.0)  {
    }
  ProjectedMap_(const ContainerAllocator& _alloc)
    : map(_alloc)
    , min_z(0.0)
    , max_z(0.0)  {
  (void)_alloc;
    }



   typedef  ::nav_msgs::OccupancyGrid_<ContainerAllocator>  _map_type;
  _map_type map;

   typedef double _min_z_type;
  _min_z_type min_z;

   typedef double _max_z_type;
  _max_z_type max_z;




  typedef boost::shared_ptr< ::map_msgs::ProjectedMap_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::map_msgs::ProjectedMap_<ContainerAllocator> const> ConstPtr;

}; // struct ProjectedMap_

typedef ::map_msgs::ProjectedMap_<std::allocator<void> > ProjectedMap;

typedef boost::shared_ptr< ::map_msgs::ProjectedMap > ProjectedMapPtr;
typedef boost::shared_ptr< ::map_msgs::ProjectedMap const> ProjectedMapConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::map_msgs::ProjectedMap_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::map_msgs::ProjectedMap_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace map_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/home/caros/ros/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/home/caros/ros/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/caros/ros/share/actionlib_msgs/cmake/../msg'], 'sensor_msgs': ['/home/caros/ros/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/home/caros/ros/share/geometry_msgs/cmake/../msg'], 'map_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/map_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::map_msgs::ProjectedMap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::map_msgs::ProjectedMap_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_msgs::ProjectedMap_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::map_msgs::ProjectedMap_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_msgs::ProjectedMap_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::map_msgs::ProjectedMap_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::map_msgs::ProjectedMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "7bbe8f96e45089681dc1ea7d023cbfca";
  }

  static const char* value(const ::map_msgs::ProjectedMap_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x7bbe8f96e4508968ULL;
  static const uint64_t static_value2 = 0x1dc1ea7d023cbfcaULL;
};

template<class ContainerAllocator>
struct DataType< ::map_msgs::ProjectedMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "map_msgs/ProjectedMap";
  }

  static const char* value(const ::map_msgs::ProjectedMap_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::map_msgs::ProjectedMap_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/OccupancyGrid map\n\
float64 min_z\n\
float64 max_z\n\
================================================================================\n\
MSG: nav_msgs/OccupancyGrid\n\
# This represents a 2-D grid map, in which each cell represents the probability of\n\
# occupancy.\n\
\n\
Header header \n\
\n\
#MetaData for the map\n\
MapMetaData info\n\
\n\
# The map data, in row-major order, starting with (0,0).  Occupancy\n\
# probabilities are in the range [0,100].  Unknown is -1.\n\
int8[] data\n\
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
MSG: nav_msgs/MapMetaData\n\
# This hold basic information about the characterists of the OccupancyGrid\n\
\n\
# The time at which the map was loaded\n\
time map_load_time\n\
# The map resolution [m/cell]\n\
float32 resolution\n\
# Map width [cells]\n\
uint32 width\n\
# Map height [cells]\n\
uint32 height\n\
# The origin of the map [m, m, rad].  This is the real-world pose of the\n\
# cell (0,0) in the map.\n\
geometry_msgs/Pose origin\n\
================================================================================\n\
MSG: geometry_msgs/Pose\n\
# A representation of pose in free space, composed of postion and orientation. \n\
Point position\n\
Quaternion orientation\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
";
  }

  static const char* value(const ::map_msgs::ProjectedMap_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::map_msgs::ProjectedMap_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.map);
      stream.next(m.min_z);
      stream.next(m.max_z);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ProjectedMap_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::map_msgs::ProjectedMap_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::map_msgs::ProjectedMap_<ContainerAllocator>& v)
  {
    s << indent << "map: ";
    s << std::endl;
    Printer< ::nav_msgs::OccupancyGrid_<ContainerAllocator> >::stream(s, indent + "  ", v.map);
    s << indent << "min_z: ";
    Printer<double>::stream(s, indent + "  ", v.min_z);
    s << indent << "max_z: ";
    Printer<double>::stream(s, indent + "  ", v.max_z);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAP_MSGS_MESSAGE_PROJECTEDMAP_H
