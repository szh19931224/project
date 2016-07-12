// Generated by gencpp from file actionlib/TestGoal.msg
// DO NOT EDIT!


#ifndef ACTIONLIB_MESSAGE_TESTGOAL_H
#define ACTIONLIB_MESSAGE_TESTGOAL_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace actionlib
{
template <class ContainerAllocator>
struct TestGoal_
{
  typedef TestGoal_<ContainerAllocator> Type;

  TestGoal_()
    : goal(0)  {
    }
  TestGoal_(const ContainerAllocator& _alloc)
    : goal(0)  {
  (void)_alloc;
    }



   typedef int32_t _goal_type;
  _goal_type goal;




  typedef boost::shared_ptr< ::actionlib::TestGoal_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::actionlib::TestGoal_<ContainerAllocator> const> ConstPtr;

}; // struct TestGoal_

typedef ::actionlib::TestGoal_<std::allocator<void> > TestGoal;

typedef boost::shared_ptr< ::actionlib::TestGoal > TestGoalPtr;
typedef boost::shared_ptr< ::actionlib::TestGoal const> TestGoalConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::actionlib::TestGoal_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::actionlib::TestGoal_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace actionlib

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/devel_isolated/actionlib/share/actionlib/msg'], 'std_msgs': ['/home/caros/ros/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/home/caros/ros/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::actionlib::TestGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::actionlib::TestGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib::TestGoal_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::actionlib::TestGoal_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib::TestGoal_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::actionlib::TestGoal_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::actionlib::TestGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "18df0149936b7aa95588e3862476ebde";
  }

  static const char* value(const ::actionlib::TestGoal_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x18df0149936b7aa9ULL;
  static const uint64_t static_value2 = 0x5588e3862476ebdeULL;
};

template<class ContainerAllocator>
struct DataType< ::actionlib::TestGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "actionlib/TestGoal";
  }

  static const char* value(const ::actionlib::TestGoal_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::actionlib::TestGoal_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
int32 goal\n\
";
  }

  static const char* value(const ::actionlib::TestGoal_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::actionlib::TestGoal_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.goal);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct TestGoal_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::actionlib::TestGoal_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::actionlib::TestGoal_<ContainerAllocator>& v)
  {
    s << indent << "goal: ";
    Printer<int32_t>::stream(s, indent + "  ", v.goal);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ACTIONLIB_MESSAGE_TESTGOAL_H
