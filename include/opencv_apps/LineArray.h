// Generated by gencpp from file opencv_apps/LineArray.msg
// DO NOT EDIT!


#ifndef OPENCV_APPS_MESSAGE_LINEARRAY_H
#define OPENCV_APPS_MESSAGE_LINEARRAY_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <opencv_apps/Line.h>

namespace opencv_apps
{
template <class ContainerAllocator>
struct LineArray_
{
  typedef LineArray_<ContainerAllocator> Type;

  LineArray_()
    : lines()  {
    }
  LineArray_(const ContainerAllocator& _alloc)
    : lines(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::opencv_apps::Line_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::opencv_apps::Line_<ContainerAllocator> >::other >  _lines_type;
  _lines_type lines;




  typedef boost::shared_ptr< ::opencv_apps::LineArray_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::opencv_apps::LineArray_<ContainerAllocator> const> ConstPtr;

}; // struct LineArray_

typedef ::opencv_apps::LineArray_<std::allocator<void> > LineArray;

typedef boost::shared_ptr< ::opencv_apps::LineArray > LineArrayPtr;
typedef boost::shared_ptr< ::opencv_apps::LineArray const> LineArrayConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::opencv_apps::LineArray_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::opencv_apps::LineArray_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace opencv_apps

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/caros/ros/share/std_msgs/cmake/../msg'], 'opencv_apps': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/opencv_apps/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::opencv_apps::LineArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::opencv_apps::LineArray_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opencv_apps::LineArray_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::opencv_apps::LineArray_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opencv_apps::LineArray_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::opencv_apps::LineArray_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::opencv_apps::LineArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2b5441933900cc71528395dda29124da";
  }

  static const char* value(const ::opencv_apps::LineArray_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2b5441933900cc71ULL;
  static const uint64_t static_value2 = 0x528395dda29124daULL;
};

template<class ContainerAllocator>
struct DataType< ::opencv_apps::LineArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "opencv_apps/LineArray";
  }

  static const char* value(const ::opencv_apps::LineArray_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::opencv_apps::LineArray_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Line[] lines\n\
\n\
================================================================================\n\
MSG: opencv_apps/Line\n\
Point2D pt1\n\
Point2D pt2\n\
\n\
\n\
================================================================================\n\
MSG: opencv_apps/Point2D\n\
float64 x\n\
float64 y\n\
\n\
";
  }

  static const char* value(const ::opencv_apps::LineArray_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::opencv_apps::LineArray_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lines);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct LineArray_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::opencv_apps::LineArray_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::opencv_apps::LineArray_<ContainerAllocator>& v)
  {
    s << indent << "lines[]" << std::endl;
    for (size_t i = 0; i < v.lines.size(); ++i)
    {
      s << indent << "  lines[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::opencv_apps::Line_<ContainerAllocator> >::stream(s, indent + "    ", v.lines[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OPENCV_APPS_MESSAGE_LINEARRAY_H
