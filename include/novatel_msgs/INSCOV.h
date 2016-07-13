// Generated by gencpp from file novatel_msgs/INSCOV.msg
// DO NOT EDIT!


#ifndef NOVATEL_MSGS_MESSAGE_INSCOV_H
#define NOVATEL_MSGS_MESSAGE_INSCOV_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <novatel_msgs/CommonHeader.h>

namespace novatel_msgs
{
template <class ContainerAllocator>
struct INSCOV_
{
  typedef INSCOV_<ContainerAllocator> Type;

  INSCOV_()
    : header()
    , week(0)
    , gpssec(0.0)
    , pos11(0.0)
    , pos12(0.0)
    , pos13(0.0)
    , pos21(0.0)
    , pos22(0.0)
    , pos23(0.0)
    , pos31(0.0)
    , pos32(0.0)
    , pos33(0.0)
    , att11(0.0)
    , att12(0.0)
    , att13(0.0)
    , att21(0.0)
    , att22(0.0)
    , att23(0.0)
    , att31(0.0)
    , att32(0.0)
    , att33(0.0)
    , vel11(0.0)
    , vel12(0.0)
    , vel13(0.0)
    , vel21(0.0)
    , vel22(0.0)
    , vel23(0.0)
    , vel31(0.0)
    , vel32(0.0)
    , vel33(0.0)  {
    }
  INSCOV_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , week(0)
    , gpssec(0.0)
    , pos11(0.0)
    , pos12(0.0)
    , pos13(0.0)
    , pos21(0.0)
    , pos22(0.0)
    , pos23(0.0)
    , pos31(0.0)
    , pos32(0.0)
    , pos33(0.0)
    , att11(0.0)
    , att12(0.0)
    , att13(0.0)
    , att21(0.0)
    , att22(0.0)
    , att23(0.0)
    , att31(0.0)
    , att32(0.0)
    , att33(0.0)
    , vel11(0.0)
    , vel12(0.0)
    , vel13(0.0)
    , vel21(0.0)
    , vel22(0.0)
    , vel23(0.0)
    , vel31(0.0)
    , vel32(0.0)
    , vel33(0.0)  {
  (void)_alloc;
    }



   typedef  ::novatel_msgs::CommonHeader_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _week_type;
  _week_type week;

   typedef double _gpssec_type;
  _gpssec_type gpssec;

   typedef double _pos11_type;
  _pos11_type pos11;

   typedef double _pos12_type;
  _pos12_type pos12;

   typedef double _pos13_type;
  _pos13_type pos13;

   typedef double _pos21_type;
  _pos21_type pos21;

   typedef double _pos22_type;
  _pos22_type pos22;

   typedef double _pos23_type;
  _pos23_type pos23;

   typedef double _pos31_type;
  _pos31_type pos31;

   typedef double _pos32_type;
  _pos32_type pos32;

   typedef double _pos33_type;
  _pos33_type pos33;

   typedef double _att11_type;
  _att11_type att11;

   typedef double _att12_type;
  _att12_type att12;

   typedef double _att13_type;
  _att13_type att13;

   typedef double _att21_type;
  _att21_type att21;

   typedef double _att22_type;
  _att22_type att22;

   typedef double _att23_type;
  _att23_type att23;

   typedef double _att31_type;
  _att31_type att31;

   typedef double _att32_type;
  _att32_type att32;

   typedef double _att33_type;
  _att33_type att33;

   typedef double _vel11_type;
  _vel11_type vel11;

   typedef double _vel12_type;
  _vel12_type vel12;

   typedef double _vel13_type;
  _vel13_type vel13;

   typedef double _vel21_type;
  _vel21_type vel21;

   typedef double _vel22_type;
  _vel22_type vel22;

   typedef double _vel23_type;
  _vel23_type vel23;

   typedef double _vel31_type;
  _vel31_type vel31;

   typedef double _vel32_type;
  _vel32_type vel32;

   typedef double _vel33_type;
  _vel33_type vel33;




  typedef boost::shared_ptr< ::novatel_msgs::INSCOV_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::novatel_msgs::INSCOV_<ContainerAllocator> const> ConstPtr;

}; // struct INSCOV_

typedef ::novatel_msgs::INSCOV_<std::allocator<void> > INSCOV;

typedef boost::shared_ptr< ::novatel_msgs::INSCOV > INSCOVPtr;
typedef boost::shared_ptr< ::novatel_msgs::INSCOV const> INSCOVConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::novatel_msgs::INSCOV_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::novatel_msgs::INSCOV_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace novatel_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/nav_msgs/cmake/../msg'], 'std_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/geometry_msgs/cmake/../msg'], 'novatel_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/drivers/src/car_ros_drivers/novatel/novatel_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::novatel_msgs::INSCOV_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::novatel_msgs::INSCOV_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_msgs::INSCOV_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::novatel_msgs::INSCOV_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_msgs::INSCOV_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::novatel_msgs::INSCOV_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::novatel_msgs::INSCOV_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4eba936d02928cad995721e91cbf2fd1";
  }

  static const char* value(const ::novatel_msgs::INSCOV_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4eba936d02928cadULL;
  static const uint64_t static_value2 = 0x995721e91cbf2fd1ULL;
};

template<class ContainerAllocator>
struct DataType< ::novatel_msgs::INSCOV_<ContainerAllocator> >
{
  static const char* value()
  {
    return "novatel_msgs/INSCOV";
  }

  static const char* value(const ::novatel_msgs::INSCOV_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::novatel_msgs::INSCOV_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# message 264\n\
novatel_msgs/CommonHeader header\n\
\n\
int32 week\n\
float64 gpssec\n\
\n\
float64 pos11\n\
float64 pos12\n\
float64 pos13\n\
float64 pos21\n\
float64 pos22\n\
float64 pos23\n\
float64 pos31\n\
float64 pos32\n\
float64 pos33\n\
float64 att11\n\
float64 att12\n\
float64 att13\n\
float64 att21\n\
float64 att22\n\
float64 att23\n\
float64 att31\n\
float64 att32\n\
float64 att33\n\
float64 vel11\n\
float64 vel12\n\
float64 vel13\n\
float64 vel21\n\
float64 vel22\n\
float64 vel23\n\
float64 vel31\n\
float64 vel32\n\
float64 vel33\n\
\n\
================================================================================\n\
MSG: novatel_msgs/CommonHeader\n\
# On the wire, this header is preceeded by three sync bytes,\n\
# which are 0xAA 0x44 0x12, and a uint8 which is the header length.\n\
\n\
# Message ID of the log being output.\n\
uint16 id\n\
\n\
# Measurement source, format, response bit.\n\
uint8 msg_type\n\
\n\
uint8 port_addr\n\
uint16 length\n\
uint16 sequence\n\
\n\
uint8 idle_time\n\
uint8 time_status\n\
\n\
uint16 gps_week\n\
uint32 gps_week_milliseconds\n\
\n\
# Table 3 in the SPAN on OEM6 manual.\n\
# See: http://www.novatel.com/assets/Documents/Manuals/OM-20000144UM.pdf#page=13\n\
uint32 receiver_status\n\
uint32 RECEIVER_STATUS_ERROR=1\n\
uint32 RECEIVER_STATUS_TEMPERATURE_WARNING=2\n\
uint32 RECEIVER_STATUS_VOLTAGE_SUPPLY_WARNING=4\n\
uint32 RECEIVER_STATUS_ANTENNA_UNPOWERED=8\n\
uint32 RECEIVER_STATUS_LNA_FAILURE=16\n\
uint32 RECEIVER_STATUS_ANTENNA_OPEN=32\n\
uint32 RECEIVER_STATUS_ANTENNA_SHORTED=64\n\
uint32 RECEIVER_STATUS_CPU_OVERLOADED=128\n\
uint32 RECEIVER_STATUS_COM1_BUFFER_OVERRUN=256\n\
uint32 RECEIVER_STATUS_COM2_BUFFER_OVERRUN=512\n\
uint32 RECEIVER_STATUS_COM3_BUFFER_OVERRUN=1024\n\
uint32 RECEIVER_STATUS_LINK_OVERLOAD=2048\n\
uint32 RECEIVER_STATUS_AUX_TRANSMIT_OVERRUN=8192\n\
uint32 RECEIVER_STATUS_AGC_OUT_OF_RANGE=16384\n\
uint32 RECEIVER_STATUS_INS_RESET=65536\n\
uint32 RECEIVER_STATUS_ALMANAC_INVALID=262144\n\
uint32 RECEIVER_STATUS_POSITION_SOLUTION_INVALID=524288\n\
uint32 RECEIVER_STATUS_POSITION_NOT_FIXED=1048576\n\
uint32 RECEIVER_STATUS_CLOCK_STEERING_DISABLED=2097152\n\
uint32 RECEIVER_STATUS_CLOCK_MODEL_INVALID=4194304\n\
uint32 RECEIVER_STATUS_EXTERNAL_OSCILLATOR_LOCKED=8388608\n\
uint32 RECEIVER_STATUS_SOFTWARE_RESOURCE_WARNING=16777216\n\
uint32 RECEIVER_STATUS_AUXILIARY3_EVENT=536870912\n\
uint32 RECEIVER_STATUS_AUXILIARY2_EVENT=1073741824\n\
uint32 RECEIVER_STATUS_AUXILIARY1_EVENT=2147483648\n\
\n\
uint16 reserved\n\
uint16 software_version\n\
\n\
";
  }

  static const char* value(const ::novatel_msgs::INSCOV_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::novatel_msgs::INSCOV_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.week);
      stream.next(m.gpssec);
      stream.next(m.pos11);
      stream.next(m.pos12);
      stream.next(m.pos13);
      stream.next(m.pos21);
      stream.next(m.pos22);
      stream.next(m.pos23);
      stream.next(m.pos31);
      stream.next(m.pos32);
      stream.next(m.pos33);
      stream.next(m.att11);
      stream.next(m.att12);
      stream.next(m.att13);
      stream.next(m.att21);
      stream.next(m.att22);
      stream.next(m.att23);
      stream.next(m.att31);
      stream.next(m.att32);
      stream.next(m.att33);
      stream.next(m.vel11);
      stream.next(m.vel12);
      stream.next(m.vel13);
      stream.next(m.vel21);
      stream.next(m.vel22);
      stream.next(m.vel23);
      stream.next(m.vel31);
      stream.next(m.vel32);
      stream.next(m.vel33);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct INSCOV_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::novatel_msgs::INSCOV_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::novatel_msgs::INSCOV_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::novatel_msgs::CommonHeader_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "week: ";
    Printer<int32_t>::stream(s, indent + "  ", v.week);
    s << indent << "gpssec: ";
    Printer<double>::stream(s, indent + "  ", v.gpssec);
    s << indent << "pos11: ";
    Printer<double>::stream(s, indent + "  ", v.pos11);
    s << indent << "pos12: ";
    Printer<double>::stream(s, indent + "  ", v.pos12);
    s << indent << "pos13: ";
    Printer<double>::stream(s, indent + "  ", v.pos13);
    s << indent << "pos21: ";
    Printer<double>::stream(s, indent + "  ", v.pos21);
    s << indent << "pos22: ";
    Printer<double>::stream(s, indent + "  ", v.pos22);
    s << indent << "pos23: ";
    Printer<double>::stream(s, indent + "  ", v.pos23);
    s << indent << "pos31: ";
    Printer<double>::stream(s, indent + "  ", v.pos31);
    s << indent << "pos32: ";
    Printer<double>::stream(s, indent + "  ", v.pos32);
    s << indent << "pos33: ";
    Printer<double>::stream(s, indent + "  ", v.pos33);
    s << indent << "att11: ";
    Printer<double>::stream(s, indent + "  ", v.att11);
    s << indent << "att12: ";
    Printer<double>::stream(s, indent + "  ", v.att12);
    s << indent << "att13: ";
    Printer<double>::stream(s, indent + "  ", v.att13);
    s << indent << "att21: ";
    Printer<double>::stream(s, indent + "  ", v.att21);
    s << indent << "att22: ";
    Printer<double>::stream(s, indent + "  ", v.att22);
    s << indent << "att23: ";
    Printer<double>::stream(s, indent + "  ", v.att23);
    s << indent << "att31: ";
    Printer<double>::stream(s, indent + "  ", v.att31);
    s << indent << "att32: ";
    Printer<double>::stream(s, indent + "  ", v.att32);
    s << indent << "att33: ";
    Printer<double>::stream(s, indent + "  ", v.att33);
    s << indent << "vel11: ";
    Printer<double>::stream(s, indent + "  ", v.vel11);
    s << indent << "vel12: ";
    Printer<double>::stream(s, indent + "  ", v.vel12);
    s << indent << "vel13: ";
    Printer<double>::stream(s, indent + "  ", v.vel13);
    s << indent << "vel21: ";
    Printer<double>::stream(s, indent + "  ", v.vel21);
    s << indent << "vel22: ";
    Printer<double>::stream(s, indent + "  ", v.vel22);
    s << indent << "vel23: ";
    Printer<double>::stream(s, indent + "  ", v.vel23);
    s << indent << "vel31: ";
    Printer<double>::stream(s, indent + "  ", v.vel31);
    s << indent << "vel32: ";
    Printer<double>::stream(s, indent + "  ", v.vel32);
    s << indent << "vel33: ";
    Printer<double>::stream(s, indent + "  ", v.vel33);
  }
};

} // namespace message_operations
} // namespace ros

#endif // NOVATEL_MSGS_MESSAGE_INSCOV_H
