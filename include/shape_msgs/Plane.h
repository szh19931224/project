// Generated by gencpp from file shape_msgs/Plane.msg
// DO NOT EDIT!


#ifndef SHAPE_MSGS_MESSAGE_PLANE_H
#define SHAPE_MSGS_MESSAGE_PLANE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace shape_msgs
{
template <class ContainerAllocator>
struct Plane_
{
  typedef Plane_<ContainerAllocator> Type;

  Plane_()
    : coef()  {
      coef.assign(0.0);
  }
  Plane_(const ContainerAllocator& _alloc)
    : coef()  {
  (void)_alloc;
      coef.assign(0.0);
  }



   typedef boost::array<double, 4>  _coef_type;
  _coef_type coef;




  typedef boost::shared_ptr< ::shape_msgs::Plane_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::shape_msgs::Plane_<ContainerAllocator> const> ConstPtr;

}; // struct Plane_

typedef ::shape_msgs::Plane_<std::allocator<void> > Plane;

typedef boost::shared_ptr< ::shape_msgs::Plane > PlanePtr;
typedef boost::shared_ptr< ::shape_msgs::Plane const> PlaneConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::shape_msgs::Plane_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::shape_msgs::Plane_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace shape_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/std_msgs/cmake/../msg'], 'shape_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/common_msgs/shape_msgs/msg'], 'geometry_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::shape_msgs::Plane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::shape_msgs::Plane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shape_msgs::Plane_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shape_msgs::Plane_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shape_msgs::Plane_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shape_msgs::Plane_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::shape_msgs::Plane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2c1b92ed8f31492f8e73f6a4a44ca796";
  }

  static const char* value(const ::shape_msgs::Plane_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2c1b92ed8f31492fULL;
  static const uint64_t static_value2 = 0x8e73f6a4a44ca796ULL;
};

template<class ContainerAllocator>
struct DataType< ::shape_msgs::Plane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "shape_msgs/Plane";
  }

  static const char* value(const ::shape_msgs::Plane_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::shape_msgs::Plane_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Representation of a plane, using the plane equation ax + by + cz + d = 0\n\
\n\
# a := coef[0]\n\
# b := coef[1]\n\
# c := coef[2]\n\
# d := coef[3]\n\
\n\
float64[4] coef\n\
";
  }

  static const char* value(const ::shape_msgs::Plane_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::shape_msgs::Plane_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.coef);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Plane_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::shape_msgs::Plane_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::shape_msgs::Plane_<ContainerAllocator>& v)
  {
    s << indent << "coef[]" << std::endl;
    for (size_t i = 0; i < v.coef.size(); ++i)
    {
      s << indent << "  coef[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.coef[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SHAPE_MSGS_MESSAGE_PLANE_H
