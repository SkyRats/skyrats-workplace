// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:msg/GeoPoseStamped.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_STAMPED__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_STAMPED__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'pose'
#include "geographic_msgs/msg/detail/geo_pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__msg__GeoPoseStamped __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__msg__GeoPoseStamped __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeoPoseStamped_
{
  using Type = GeoPoseStamped_<ContainerAllocator>;

  explicit GeoPoseStamped_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    pose(_init)
  {
    (void)_init;
  }

  explicit GeoPoseStamped_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    pose(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _pose_type =
    geographic_msgs::msg::GeoPose_<ContainerAllocator>;
  _pose_type pose;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__pose(
    const geographic_msgs::msg::GeoPose_<ContainerAllocator> & _arg)
  {
    this->pose = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__msg__GeoPoseStamped
    std::shared_ptr<geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__msg__GeoPoseStamped
    std::shared_ptr<geographic_msgs::msg::GeoPoseStamped_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeoPoseStamped_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->pose != other.pose) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeoPoseStamped_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeoPoseStamped_

// alias to use template instance with default allocator
using GeoPoseStamped =
  geographic_msgs::msg::GeoPoseStamped_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POSE_STAMPED__STRUCT_HPP_
