// Generated by gencpp from file dynamic_reconfigure/Group.msg
// DO NOT EDIT!


#ifndef DYNAMIC_RECONFIGURE_MESSAGE_GROUP_H
#define DYNAMIC_RECONFIGURE_MESSAGE_GROUP_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <dynamic_reconfigure/ParamDescription.h>

namespace dynamic_reconfigure
{
template <class ContainerAllocator>
struct Group_
{
  typedef Group_<ContainerAllocator> Type;

  Group_()
    : name()
    , type()
    , parameters()
    , parent(0)
    , id(0)  {
    }
  Group_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , type(_alloc)
    , parameters(_alloc)
    , parent(0)
    , id(0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef std::vector< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >::other >  _parameters_type;
  _parameters_type parameters;

   typedef int32_t _parent_type;
  _parent_type parent;

   typedef int32_t _id_type;
  _id_type id;




  typedef boost::shared_ptr< ::dynamic_reconfigure::Group_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dynamic_reconfigure::Group_<ContainerAllocator> const> ConstPtr;

}; // struct Group_

typedef ::dynamic_reconfigure::Group_<std::allocator<void> > Group;

typedef boost::shared_ptr< ::dynamic_reconfigure::Group > GroupPtr;
typedef boost::shared_ptr< ::dynamic_reconfigure::Group const> GroupConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dynamic_reconfigure::Group_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dynamic_reconfigure::Group_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dynamic_reconfigure

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'dynamic_reconfigure': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/ros/dynamic_reconfigure/msg'], 'std_msgs': ['/home/scmbuild/workspaces_cluster/baidu.car-os.ros/baidu/car-os/install_isolated/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::Group_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dynamic_reconfigure::Group_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::Group_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dynamic_reconfigure::Group_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::Group_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dynamic_reconfigure::Group_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dynamic_reconfigure::Group_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9e8cd9e9423c94823db3614dd8b1cf7a";
  }

  static const char* value(const ::dynamic_reconfigure::Group_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9e8cd9e9423c9482ULL;
  static const uint64_t static_value2 = 0x3db3614dd8b1cf7aULL;
};

template<class ContainerAllocator>
struct DataType< ::dynamic_reconfigure::Group_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dynamic_reconfigure/Group";
  }

  static const char* value(const ::dynamic_reconfigure::Group_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dynamic_reconfigure::Group_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string name\n\
string type\n\
ParamDescription[] parameters\n\
int32 parent \n\
int32 id\n\
\n\
================================================================================\n\
MSG: dynamic_reconfigure/ParamDescription\n\
string name\n\
string type\n\
uint32 level\n\
string description\n\
string edit_method\n\
";
  }

  static const char* value(const ::dynamic_reconfigure::Group_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dynamic_reconfigure::Group_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.type);
      stream.next(m.parameters);
      stream.next(m.parent);
      stream.next(m.id);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Group_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dynamic_reconfigure::Group_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dynamic_reconfigure::Group_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "parameters[]" << std::endl;
    for (size_t i = 0; i < v.parameters.size(); ++i)
    {
      s << indent << "  parameters[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::dynamic_reconfigure::ParamDescription_<ContainerAllocator> >::stream(s, indent + "    ", v.parameters[i]);
    }
    s << indent << "parent: ";
    Printer<int32_t>::stream(s, indent + "  ", v.parent);
    s << indent << "id: ";
    Printer<int32_t>::stream(s, indent + "  ", v.id);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DYNAMIC_RECONFIGURE_MESSAGE_GROUP_H
