// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:msg/BoundingBox.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'min_pt'
// Member 'max_pt'
#include "geographic_msgs/msg/detail/geo_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__msg__BoundingBox __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__msg__BoundingBox __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct BoundingBox_
{
  using Type = BoundingBox_<ContainerAllocator>;

  explicit BoundingBox_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : min_pt(_init),
    max_pt(_init)
  {
    (void)_init;
  }

  explicit BoundingBox_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : min_pt(_alloc, _init),
    max_pt(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _min_pt_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _min_pt_type min_pt;
  using _max_pt_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _max_pt_type max_pt;

  // setters for named parameter idiom
  Type & set__min_pt(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->min_pt = _arg;
    return *this;
  }
  Type & set__max_pt(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->max_pt = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::msg::BoundingBox_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::msg::BoundingBox_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::msg::BoundingBox_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::msg::BoundingBox_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::BoundingBox_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::BoundingBox_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::BoundingBox_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::BoundingBox_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::msg::BoundingBox_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::msg::BoundingBox_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__msg__BoundingBox
    std::shared_ptr<geographic_msgs::msg::BoundingBox_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__msg__BoundingBox
    std::shared_ptr<geographic_msgs::msg::BoundingBox_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const BoundingBox_ & other) const
  {
    if (this->min_pt != other.min_pt) {
      return false;
    }
    if (this->max_pt != other.max_pt) {
      return false;
    }
    return true;
  }
  bool operator!=(const BoundingBox_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct BoundingBox_

// alias to use template instance with default allocator
using BoundingBox =
  geographic_msgs::msg::BoundingBox_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__BOUNDING_BOX__STRUCT_HPP_
