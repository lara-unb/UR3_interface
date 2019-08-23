// Generated by gencpp from file ur3/arm_msg.msg
// DO NOT EDIT!


#ifndef UR3_MESSAGE_ARM_MSG_H
#define UR3_MESSAGE_ARM_MSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ur3
{
template <class ContainerAllocator>
struct arm_msg_
{
  typedef arm_msg_<ContainerAllocator> Type;

  arm_msg_()
    : pose()
    , velocity()
    , torque()  {
      pose.assign(0.0);

      velocity.assign(0.0);

      torque.assign(0.0);
  }
  arm_msg_(const ContainerAllocator& _alloc)
    : pose()
    , velocity()
    , torque()  {
  (void)_alloc;
      pose.assign(0.0);

      velocity.assign(0.0);

      torque.assign(0.0);
  }



   typedef boost::array<float, 6>  _pose_type;
  _pose_type pose;

   typedef boost::array<float, 6>  _velocity_type;
  _velocity_type velocity;

   typedef boost::array<float, 6>  _torque_type;
  _torque_type torque;





  typedef boost::shared_ptr< ::ur3::arm_msg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ur3::arm_msg_<ContainerAllocator> const> ConstPtr;

}; // struct arm_msg_

typedef ::ur3::arm_msg_<std::allocator<void> > arm_msg;

typedef boost::shared_ptr< ::ur3::arm_msg > arm_msgPtr;
typedef boost::shared_ptr< ::ur3::arm_msg const> arm_msgConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ur3::arm_msg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ur3::arm_msg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ur3

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'actionlib_msgs': ['/opt/ros/melodic/share/actionlib_msgs/cmake/../msg'], 'trajectory_msgs': ['/opt/ros/melodic/share/trajectory_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'control_msgs': ['/opt/ros/melodic/share/control_msgs/cmake/../msg'], 'ur3': ['/home/rafael/UR3/catkin_ur3/src/ur3/msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ur3::arm_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ur3::arm_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3::arm_msg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ur3::arm_msg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3::arm_msg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ur3::arm_msg_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ur3::arm_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9a4d464236a1d2454f78317edb9a4f4e";
  }

  static const char* value(const ::ur3::arm_msg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9a4d464236a1d245ULL;
  static const uint64_t static_value2 = 0x4f78317edb9a4f4eULL;
};

template<class ContainerAllocator>
struct DataType< ::ur3::arm_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ur3/arm_msg";
  }

  static const char* value(const ::ur3::arm_msg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ur3::arm_msg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[6] pose\n"
"float32[6] velocity\n"
"float32[6] torque\n"
;
  }

  static const char* value(const ::ur3::arm_msg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ur3::arm_msg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose);
      stream.next(m.velocity);
      stream.next(m.torque);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct arm_msg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ur3::arm_msg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ur3::arm_msg_<ContainerAllocator>& v)
  {
    s << indent << "pose[]" << std::endl;
    for (size_t i = 0; i < v.pose.size(); ++i)
    {
      s << indent << "  pose[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pose[i]);
    }
    s << indent << "velocity[]" << std::endl;
    for (size_t i = 0; i < v.velocity.size(); ++i)
    {
      s << indent << "  velocity[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.velocity[i]);
    }
    s << indent << "torque[]" << std::endl;
    for (size_t i = 0; i < v.torque.size(); ++i)
    {
      s << indent << "  torque[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.torque[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UR3_MESSAGE_ARM_MSG_H