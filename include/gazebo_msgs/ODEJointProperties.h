// Generated by gencpp from file gazebo_msgs/ODEJointProperties.msg
// DO NOT EDIT!


#ifndef GAZEBO_MSGS_MESSAGE_ODEJOINTPROPERTIES_H
#define GAZEBO_MSGS_MESSAGE_ODEJOINTPROPERTIES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gazebo_msgs
{
template <class ContainerAllocator>
struct ODEJointProperties_
{
  typedef ODEJointProperties_<ContainerAllocator> Type;

  ODEJointProperties_()
    : damping()
    , hiStop()
    , loStop()
    , erp()
    , cfm()
    , stop_erp()
    , stop_cfm()
    , fudge_factor()
    , fmax()
    , vel()  {
    }
  ODEJointProperties_(const ContainerAllocator& _alloc)
    : damping(_alloc)
    , hiStop(_alloc)
    , loStop(_alloc)
    , erp(_alloc)
    , cfm(_alloc)
    , stop_erp(_alloc)
    , stop_cfm(_alloc)
    , fudge_factor(_alloc)
    , fmax(_alloc)
    , vel(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _damping_type;
  _damping_type damping;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _hiStop_type;
  _hiStop_type hiStop;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _loStop_type;
  _loStop_type loStop;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _erp_type;
  _erp_type erp;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _cfm_type;
  _cfm_type cfm;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _stop_erp_type;
  _stop_erp_type stop_erp;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _stop_cfm_type;
  _stop_cfm_type stop_cfm;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _fudge_factor_type;
  _fudge_factor_type fudge_factor;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _fmax_type;
  _fmax_type fmax;

   typedef std::vector<double, typename ContainerAllocator::template rebind<double>::other >  _vel_type;
  _vel_type vel;




  typedef boost::shared_ptr< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> const> ConstPtr;

}; // struct ODEJointProperties_

typedef ::gazebo_msgs::ODEJointProperties_<std::allocator<void> > ODEJointProperties;

typedef boost::shared_ptr< ::gazebo_msgs::ODEJointProperties > ODEJointPropertiesPtr;
typedef boost::shared_ptr< ::gazebo_msgs::ODEJointProperties const> ODEJointPropertiesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gazebo_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/std_msgs/cmake/../msg'], 'trajectory_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/trajectory_msgs/cmake/../msg'], 'gazebo_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/gazebo_ros_pkgs/gazebo_msgs/msg'], 'geometry_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1b744c32a920af979f53afe2f9c3511f";
  }

  static const char* value(const ::gazebo_msgs::ODEJointProperties_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1b744c32a920af97ULL;
  static const uint64_t static_value2 = 0x9f53afe2f9c3511fULL;
};

template<class ContainerAllocator>
struct DataType< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gazebo_msgs/ODEJointProperties";
  }

  static const char* value(const ::gazebo_msgs::ODEJointProperties_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# access to low level joint properties, change these at your own risk\n\
float64[] damping             # joint damping\n\
float64[] hiStop              # joint limit\n\
float64[] loStop              # joint limit\n\
float64[] erp                 # set joint erp\n\
float64[] cfm                 # set joint cfm\n\
float64[] stop_erp            # set joint erp for joint limit \"contact\" joint\n\
float64[] stop_cfm            # set joint cfm for joint limit \"contact\" joint\n\
float64[] fudge_factor        # joint fudge_factor applied at limits, see ODE manual for info.\n\
float64[] fmax                # ode joint param fmax\n\
float64[] vel                 # ode joint param vel\n\
";
  }

  static const char* value(const ::gazebo_msgs::ODEJointProperties_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.damping);
      stream.next(m.hiStop);
      stream.next(m.loStop);
      stream.next(m.erp);
      stream.next(m.cfm);
      stream.next(m.stop_erp);
      stream.next(m.stop_cfm);
      stream.next(m.fudge_factor);
      stream.next(m.fmax);
      stream.next(m.vel);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct ODEJointProperties_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gazebo_msgs::ODEJointProperties_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gazebo_msgs::ODEJointProperties_<ContainerAllocator>& v)
  {
    s << indent << "damping[]" << std::endl;
    for (size_t i = 0; i < v.damping.size(); ++i)
    {
      s << indent << "  damping[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.damping[i]);
    }
    s << indent << "hiStop[]" << std::endl;
    for (size_t i = 0; i < v.hiStop.size(); ++i)
    {
      s << indent << "  hiStop[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.hiStop[i]);
    }
    s << indent << "loStop[]" << std::endl;
    for (size_t i = 0; i < v.loStop.size(); ++i)
    {
      s << indent << "  loStop[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.loStop[i]);
    }
    s << indent << "erp[]" << std::endl;
    for (size_t i = 0; i < v.erp.size(); ++i)
    {
      s << indent << "  erp[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.erp[i]);
    }
    s << indent << "cfm[]" << std::endl;
    for (size_t i = 0; i < v.cfm.size(); ++i)
    {
      s << indent << "  cfm[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.cfm[i]);
    }
    s << indent << "stop_erp[]" << std::endl;
    for (size_t i = 0; i < v.stop_erp.size(); ++i)
    {
      s << indent << "  stop_erp[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.stop_erp[i]);
    }
    s << indent << "stop_cfm[]" << std::endl;
    for (size_t i = 0; i < v.stop_cfm.size(); ++i)
    {
      s << indent << "  stop_cfm[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.stop_cfm[i]);
    }
    s << indent << "fudge_factor[]" << std::endl;
    for (size_t i = 0; i < v.fudge_factor.size(); ++i)
    {
      s << indent << "  fudge_factor[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.fudge_factor[i]);
    }
    s << indent << "fmax[]" << std::endl;
    for (size_t i = 0; i < v.fmax.size(); ++i)
    {
      s << indent << "  fmax[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.fmax[i]);
    }
    s << indent << "vel[]" << std::endl;
    for (size_t i = 0; i < v.vel.size(); ++i)
    {
      s << indent << "  vel[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.vel[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GAZEBO_MSGS_MESSAGE_ODEJOINTPROPERTIES_H
