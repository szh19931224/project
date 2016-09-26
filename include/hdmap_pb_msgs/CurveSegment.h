// Generated by gencpp from file hdmap_pb_msgs/CurveSegment.msg
// DO NOT EDIT!


#ifndef HDMAP_PB_MSGS_MESSAGE_CURVESEGMENT_H
#define HDMAP_PB_MSGS_MESSAGE_CURVESEGMENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <hdmap_pb_msgs/LineSegment.h>
#include <hdmap_pb_msgs/Arc.h>
#include <hdmap_pb_msgs/Spiral.h>
#include <hdmap_pb_msgs/Spline.h>
#include <hdmap_pb_msgs/Poly3.h>
#include <hdmap_pb_msgs/Point.h>

namespace hdmap_pb_msgs
{
template <class ContainerAllocator>
struct CurveSegment_
{
  typedef CurveSegment_<ContainerAllocator> Type;

  CurveSegment_()
    : line_segment()
    , arc()
    , spiral()
    , spline()
    , poly3()
    , s(0.0)
    , start_position()
    , heading(0.0)
    , length(0.0)  {
    }
  CurveSegment_(const ContainerAllocator& _alloc)
    : line_segment(_alloc)
    , arc(_alloc)
    , spiral(_alloc)
    , spline(_alloc)
    , poly3(_alloc)
    , s(0.0)
    , start_position(_alloc)
    , heading(0.0)
    , length(0.0)  {
  (void)_alloc;
    }



   typedef  ::hdmap_pb_msgs::LineSegment_<ContainerAllocator>  _line_segment_type;
  _line_segment_type line_segment;

   typedef  ::hdmap_pb_msgs::Arc_<ContainerAllocator>  _arc_type;
  _arc_type arc;

   typedef  ::hdmap_pb_msgs::Spiral_<ContainerAllocator>  _spiral_type;
  _spiral_type spiral;

   typedef  ::hdmap_pb_msgs::Spline_<ContainerAllocator>  _spline_type;
  _spline_type spline;

   typedef  ::hdmap_pb_msgs::Poly3_<ContainerAllocator>  _poly3_type;
  _poly3_type poly3;

   typedef double _s_type;
  _s_type s;

   typedef  ::hdmap_pb_msgs::Point_<ContainerAllocator>  _start_position_type;
  _start_position_type start_position;

   typedef double _heading_type;
  _heading_type heading;

   typedef double _length_type;
  _length_type length;




  typedef boost::shared_ptr< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> const> ConstPtr;

}; // struct CurveSegment_

typedef ::hdmap_pb_msgs::CurveSegment_<std::allocator<void> > CurveSegment;

typedef boost::shared_ptr< ::hdmap_pb_msgs::CurveSegment > CurveSegmentPtr;
typedef boost::shared_ptr< ::hdmap_pb_msgs::CurveSegment const> CurveSegmentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace hdmap_pb_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'common_pb_msgs': ['/home/caros/ros/share/common_pb_msgs/cmake/../msg'], 'hdmap_pb_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/pb_msgs/hdmap_pb_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e8e639851340fc147eabd434b5f7c8bd";
  }

  static const char* value(const ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe8e639851340fc14ULL;
  static const uint64_t static_value2 = 0x7eabd434b5f7c8bdULL;
};

template<class ContainerAllocator>
struct DataType< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "hdmap_pb_msgs/CurveSegment";
  }

  static const char* value(const ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> >
{
  static const char* value()
  {
    return "LineSegment line_segment \n\
Arc arc \n\
Spiral spiral \n\
Spline spline \n\
Poly3 poly3 \n\
float64 s \n\
Point start_position \n\
float64 heading \n\
float64 length \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/LineSegment\n\
Point[] point \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/Point\n\
float64 x \n\
float64 y \n\
float64 z \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/Arc\n\
Point center \n\
float64 radius \n\
float64 start_angle \n\
float64 end_angle \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/Spiral\n\
float64 curv_start \n\
float64 curv_end \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/Spline\n\
int32 dimension \n\
int32 degree \n\
float64[] knot \n\
Point[] control \n\
\n\
================================================================================\n\
MSG: hdmap_pb_msgs/Poly3\n\
";
  }

  static const char* value(const ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.line_segment);
      stream.next(m.arc);
      stream.next(m.spiral);
      stream.next(m.spline);
      stream.next(m.poly3);
      stream.next(m.s);
      stream.next(m.start_position);
      stream.next(m.heading);
      stream.next(m.length);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CurveSegment_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::hdmap_pb_msgs::CurveSegment_<ContainerAllocator>& v)
  {
    s << indent << "line_segment: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::LineSegment_<ContainerAllocator> >::stream(s, indent + "  ", v.line_segment);
    s << indent << "arc: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::Arc_<ContainerAllocator> >::stream(s, indent + "  ", v.arc);
    s << indent << "spiral: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::Spiral_<ContainerAllocator> >::stream(s, indent + "  ", v.spiral);
    s << indent << "spline: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::Spline_<ContainerAllocator> >::stream(s, indent + "  ", v.spline);
    s << indent << "poly3: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::Poly3_<ContainerAllocator> >::stream(s, indent + "  ", v.poly3);
    s << indent << "s: ";
    Printer<double>::stream(s, indent + "  ", v.s);
    s << indent << "start_position: ";
    s << std::endl;
    Printer< ::hdmap_pb_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.start_position);
    s << indent << "heading: ";
    Printer<double>::stream(s, indent + "  ", v.heading);
    s << indent << "length: ";
    Printer<double>::stream(s, indent + "  ", v.length);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HDMAP_PB_MSGS_MESSAGE_CURVESEGMENT_H
