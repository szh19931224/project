// Generated by gencpp from file nav_msgs/GetMapResponse.msg
// DO NOT EDIT!


#ifndef NAV_MSGS_MESSAGE_GETMAPRESPONSE_H
#define NAV_MSGS_MESSAGE_GETMAPRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <nav_msgs/OccupancyGrid.h>

namespace nav_msgs
{
template <class ContainerAllocator>
struct GetMapResponse_
{
  typedef GetMapResponse_<ContainerAllocator> Type;

  GetMapResponse_()
    : map()  {
    }
  GetMapResponse_(const ContainerAllocator& _alloc)
    : map(_alloc)  {
  (void)_alloc;
    }



   typedef  ::nav_msgs::OccupancyGrid_<ContainerAllocator>  _map_type;
  _map_type map;




  typedef boost::shared_ptr< ::nav_msgs::GetMapResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::nav_msgs::GetMapResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetMapResponse_

typedef ::nav_msgs::GetMapResponse_<std::allocator<void> > GetMapResponse;

typedef boost::shared_ptr< ::nav_msgs::GetMapResponse > GetMapResponsePtr;
typedef boost::shared_ptr< ::nav_msgs::GetMapResponse const> GetMapResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::nav_msgs::GetMapResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::nav_msgs::GetMapResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace nav_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/common_msgs/nav_msgs/msg', '/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/devel_isolated/nav_msgs/share/nav_msgs/msg'], 'std_msgs': ['/home/caros/ros/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/caros/ros/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/home/caros/ros/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::GetMapResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::nav_msgs::GetMapResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::GetMapResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::nav_msgs::GetMapResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::GetMapResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::nav_msgs::GetMapResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::nav_msgs::GetMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6cdd0a18e0aff5b0a3ca2326a89b54ff";
  }

  static const char* value(const ::nav_msgs::GetMapResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6cdd0a18e0aff5b0ULL;
  static const uint64_t static_value2 = 0xa3ca2326a89b54ffULL;
};

template<class ContainerAllocator>
struct DataType< ::nav_msgs::GetMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/GetMapResponse";
  }

  static const char* value(const ::nav_msgs::GetMapResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::nav_msgs::GetMapResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "nav_msgs/OccupancyGrid map\n\
\n\
\n\
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

  static const char* value(const ::nav_msgs::GetMapResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::nav_msgs::GetMapResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.map);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetMapResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::nav_msgs::GetMapResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::nav_msgs::GetMapResponse_<ContainerAllocator>& v)
  {
    s << indent << "map: ";
    s << std::endl;
    Printer< ::nav_msgs::OccupancyGrid_<ContainerAllocator> >::stream(s, indent + "  ", v.map);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NAV_MSGS_MESSAGE_GETMAPRESPONSE_H
