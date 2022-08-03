// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:msg/RoutePath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__STRUCT_HPP_

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
// Member 'network'
// Member 'segments'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'props'
#include "geographic_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__msg__RoutePath __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__msg__RoutePath __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RoutePath_
{
  using Type = RoutePath_<ContainerAllocator>;

  explicit RoutePath_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    network(_init)
  {
    (void)_init;
  }

  explicit RoutePath_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    network(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _network_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _network_type network;
  using _segments_type =
    std::vector<unique_identifier_msgs::msg::UUID_<ContainerAllocator>, typename ContainerAllocator::template rebind<unique_identifier_msgs::msg::UUID_<ContainerAllocator>>::other>;
  _segments_type segments;
  using _props_type =
    std::vector<geographic_msgs::msg::KeyValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<geographic_msgs::msg::KeyValue_<ContainerAllocator>>::other>;
  _props_type props;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__network(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->network = _arg;
    return *this;
  }
  Type & set__segments(
    const std::vector<unique_identifier_msgs::msg::UUID_<ContainerAllocator>, typename ContainerAllocator::template rebind<unique_identifier_msgs::msg::UUID_<ContainerAllocator>>::other> & _arg)
  {
    this->segments = _arg;
    return *this;
  }
  Type & set__props(
    const std::vector<geographic_msgs::msg::KeyValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<geographic_msgs::msg::KeyValue_<ContainerAllocator>>::other> & _arg)
  {
    this->props = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::msg::RoutePath_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::msg::RoutePath_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::msg::RoutePath_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::msg::RoutePath_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::RoutePath_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::RoutePath_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::RoutePath_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::RoutePath_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::msg::RoutePath_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::msg::RoutePath_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__msg__RoutePath
    std::shared_ptr<geographic_msgs::msg::RoutePath_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__msg__RoutePath
    std::shared_ptr<geographic_msgs::msg::RoutePath_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RoutePath_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->network != other.network) {
      return false;
    }
    if (this->segments != other.segments) {
      return false;
    }
    if (this->props != other.props) {
      return false;
    }
    return true;
  }
  bool operator!=(const RoutePath_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RoutePath_

// alias to use template instance with default allocator
using RoutePath =
  geographic_msgs::msg::RoutePath_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_PATH__STRUCT_HPP_
