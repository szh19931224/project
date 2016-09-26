// Generated by gencpp from file metric_msgs/MetricResponse.msg
// DO NOT EDIT!


#ifndef METRIC_MSGS_MESSAGE_METRICRESPONSE_H
#define METRIC_MSGS_MESSAGE_METRICRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <metric_msgs/MetricStatus.h>

namespace metric_msgs
{
template <class ContainerAllocator>
struct MetricResponse_
{
  typedef MetricResponse_<ContainerAllocator> Type;

  MetricResponse_()
    : status()  {
    }
  MetricResponse_(const ContainerAllocator& _alloc)
    : status(_alloc)  {
  (void)_alloc;
    }



   typedef  ::metric_msgs::MetricStatus_<ContainerAllocator>  _status_type;
  _status_type status;




  typedef boost::shared_ptr< ::metric_msgs::MetricResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::metric_msgs::MetricResponse_<ContainerAllocator> const> ConstPtr;

}; // struct MetricResponse_

typedef ::metric_msgs::MetricResponse_<std::allocator<void> > MetricResponse;

typedef boost::shared_ptr< ::metric_msgs::MetricResponse > MetricResponsePtr;
typedef boost::shared_ptr< ::metric_msgs::MetricResponse const> MetricResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::metric_msgs::MetricResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::metric_msgs::MetricResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace metric_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/home/caros/ros/share/std_msgs/cmake/../msg'], 'metric_msgs': ['/home/scmbuild/workspaces_cluster/baidu.adu.ros/baidu/adu/ros/common_msgs/metric_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::metric_msgs::MetricResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::metric_msgs::MetricResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::metric_msgs::MetricResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::metric_msgs::MetricResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::metric_msgs::MetricResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::metric_msgs::MetricResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::metric_msgs::MetricResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "17bb8e5dd6448d1931df91e45f2e3403";
  }

  static const char* value(const ::metric_msgs::MetricResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x17bb8e5dd6448d19ULL;
  static const uint64_t static_value2 = 0x31df91e45f2e3403ULL;
};

template<class ContainerAllocator>
struct DataType< ::metric_msgs::MetricResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "metric_msgs/MetricResponse";
  }

  static const char* value(const ::metric_msgs::MetricResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::metric_msgs::MetricResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "MetricStatus status\n\
\n\
\n\
================================================================================\n\
MSG: metric_msgs/MetricStatus\n\
uint8 OK=0\n\
uint8 WARN=1\n\
uint8 ERROR=2\n\
uint8 STALE=3\n\
\n\
uint8 level\n\
time stamp\n\
string message\n\
KeyValue[] values\n\
\n\
================================================================================\n\
MSG: metric_msgs/KeyValue\n\
string key\n\
string value\n\
";
  }

  static const char* value(const ::metric_msgs::MetricResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::metric_msgs::MetricResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct MetricResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::metric_msgs::MetricResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::metric_msgs::MetricResponse_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    s << std::endl;
    Printer< ::metric_msgs::MetricStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // METRIC_MSGS_MESSAGE_METRICRESPONSE_H
