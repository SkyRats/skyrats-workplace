// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:msg/GeographicMapChanges.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__STRUCT_HPP_

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
// Member 'diffs'
#include "geographic_msgs/msg/detail/geographic_map__struct.hpp"
// Member 'deletes'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__msg__GeographicMapChanges __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__msg__GeographicMapChanges __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeographicMapChanges_
{
  using Type = GeographicMapChanges_<ContainerAllocator>;

  explicit GeographicMapChanges_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    diffs(_init)
  {
    (void)_init;
  }

  explicit GeographicMapChanges_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    diffs(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _diffs_type =
    geographic_msgs::msg::GeographicMap_<ContainerAllocator>;
  _diffs_type diffs;
  using _deletes_type =
    std::vector<unique_identifier_msgs::msg::UUID_<ContainerAllocator>, typename ContainerAllocator::template rebind<unique_identifier_msgs::msg::UUID_<ContainerAllocator>>::other>;
  _deletes_type deletes;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__diffs(
    const geographic_msgs::msg::GeographicMap_<ContainerAllocator> & _arg)
  {
    this->diffs = _arg;
    return *this;
  }
  Type & set__deletes(
    const std::vector<unique_identifier_msgs::msg::UUID_<ContainerAllocator>, typename ContainerAllocator::template rebind<unique_identifier_msgs::msg::UUID_<ContainerAllocator>>::other> & _arg)
  {
    this->deletes = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__msg__GeographicMapChanges
    std::shared_ptr<geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__msg__GeographicMapChanges
    std::shared_ptr<geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeographicMapChanges_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->diffs != other.diffs) {
      return false;
    }
    if (this->deletes != other.deletes) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeographicMapChanges_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeographicMapChanges_

// alias to use template instance with default allocator
using GeographicMapChanges =
  geographic_msgs::msg::GeographicMapChanges_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEOGRAPHIC_MAP_CHANGES__STRUCT_HPP_
