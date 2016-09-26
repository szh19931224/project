// Generated by gencpp from file shape_msgs/SolidPrimitive.msg
// DO NOT EDIT!


#ifndef SHAPE_MSGS_MESSAGE_SOLIDPRIMITIVE_H
#define SHAPE_MSGS_MESSAGE_SOLIDPRIMITIVE_H


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
struct SolidPrimitive_
{
  typedef SolidPrimitive_<ContainerAllocator> Type;

  SolidPrimitive_()
    : type(0)
    , dimensions()  {
    }
  SolidPrimitive_(const ContainerAllocator& _alloc)
    : type(0)
    , dimensions(_alloc)  {
  (void)_alloc;
    }



   typedef uint8_t _type_type;
  _type_type type;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _dimensions_type;
  _dimensions_type dimensions;


    enum { BOX = 1u };
     enum { SPHERE = 2u };
     enum { CYLINDER = 3u };
     enum { CONE = 4u };
     enum { BOX_X = 0u };
     enum { BOX_Y = 1u };
     enum { BOX_Z = 2u };
     enum { SPHERE_RADIUS = 0u };
     enum { CYLINDER_HEIGHT = 0u };
     enum { CYLINDER_RADIUS = 1u };
     enum { CONE_HEIGHT = 0u };
     enum { CONE_RADIUS = 1u };
 

  typedef boost::shared_ptr< ::shape_msgs::SolidPrimitive_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::shape_msgs::SolidPrimitive_<ContainerAllocator> const> ConstPtr;

}; // struct SolidPrimitive_

typedef ::shape_msgs::SolidPrimitive_<std::allocator<void> > SolidPrimitive;

typedef boost::shared_ptr< ::shape_msgs::SolidPrimitive > SolidPrimitivePtr;
typedef boost::shared_ptr< ::shape_msgs::SolidPrimitive const> SolidPrimitiveConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::shape_msgs::SolidPrimitive_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace shape_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/caros/ros/share/std_msgs/cmake/../msg'], 'shape_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/common_msgs/shape_msgs/msg'], 'geometry_msgs': ['/home/caros/ros/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::shape_msgs::SolidPrimitive_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::shape_msgs::SolidPrimitive_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::shape_msgs::SolidPrimitive_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d8f8cbc74c5ff283fca29569ccefb45d";
  }

  static const char* value(const ::shape_msgs::SolidPrimitive_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd8f8cbc74c5ff283ULL;
  static const uint64_t static_value2 = 0xfca29569ccefb45dULL;
};

template<class ContainerAllocator>
struct DataType< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "shape_msgs/SolidPrimitive";
  }

  static const char* value(const ::shape_msgs::SolidPrimitive_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Define box, sphere, cylinder, cone \n\
# All shapes are defined to have their bounding boxes centered around 0,0,0.\n\
\n\
uint8 BOX=1\n\
uint8 SPHERE=2\n\
uint8 CYLINDER=3\n\
uint8 CONE=4\n\
\n\
# The type of the shape\n\
uint8 type\n\
\n\
\n\
# The dimensions of the shape\n\
float64[] dimensions\n\
\n\
# The meaning of the shape dimensions: each constant defines the index in the 'dimensions' array\n\
\n\
# For the BOX type, the X, Y, and Z dimensions are the length of the corresponding\n\
# sides of the box.\n\
uint8 BOX_X=0\n\
uint8 BOX_Y=1\n\
uint8 BOX_Z=2\n\
\n\
\n\
# For the SPHERE type, only one component is used, and it gives the radius of\n\
# the sphere.\n\
uint8 SPHERE_RADIUS=0\n\
\n\
\n\
# For the CYLINDER and CONE types, the center line is oriented along\n\
# the Z axis.  Therefore the CYLINDER_HEIGHT (CONE_HEIGHT) component\n\
# of dimensions gives the height of the cylinder (cone).  The\n\
# CYLINDER_RADIUS (CONE_RADIUS) component of dimensions gives the\n\
# radius of the base of the cylinder (cone).  Cone and cylinder\n\
# primitives are defined to be circular. The tip of the cone is\n\
# pointing up, along +Z axis.\n\
\n\
uint8 CYLINDER_HEIGHT=0\n\
uint8 CYLINDER_RADIUS=1\n\
\n\
uint8 CONE_HEIGHT=0\n\
uint8 CONE_RADIUS=1\n\
";
  }

  static const char* value(const ::shape_msgs::SolidPrimitive_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.type);
      stream.next(m.dimensions);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct SolidPrimitive_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::shape_msgs::SolidPrimitive_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::shape_msgs::SolidPrimitive_<ContainerAllocator>& v)
  {
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "dimensions[]" << std::endl;
    for (size_t i = 0; i < v.dimensions.size(); ++i)
    {
      s << indent << "  dimensions[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.dimensions[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // SHAPE_MSGS_MESSAGE_SOLIDPRIMITIVE_H
