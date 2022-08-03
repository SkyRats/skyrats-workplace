// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:msg/MapFeature.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__MAP_FEATURE__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__MAP_FEATURE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'id'
// Member 'components'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'props'
#include "geographic_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__msg__MapFeature __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__msg__MapFeature __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MapFeature_
{
  using Type = MapFeature_<ContainerAllocator>;

  explicit MapFeature_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_init)
  {
    (void)_init;
  }

  explicit MapFeature_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : id(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _id_type id;
  using _components_type =
    std::vector<unique_identifier_msgs::msg::UUID_<ContainerAllocator>, typename ContainerAllocator::template rebind<unique_identifier_msgs::msg::UUID_<ContainerAllocator>>::other>;
  _components_type components;
  using _props_type =
    std::vector<geographic_msgs::msg::KeyValue_<ContainerAllocator>, typename ContainerAllocator::template rebind<geographic_msgs::msg::KeyValue_<ContainerAllocator>>::other>;
  _props_type props;

  // setters for named parameter idiom
  Type & set__id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__components(
    const std::vector<unique_identifier_msgs::msg::UUID_<ContainerAllocator>, typename ContainerAllocator::template rebind<unique_identifier_msgs::msg::UUID_<ContainerAllocator>>::other> & _arg)
  {
    this->components = _arg;
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
    geographic_msgs::msg::MapFeature_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::msg::MapFeature_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::msg::MapFeature_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::msg::MapFeature_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::MapFeature_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::MapFeature_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::MapFeature_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::MapFeature_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::msg::MapFeature_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::msg::MapFeature_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__msg__MapFeature
    std::shared_ptr<geographic_msgs::msg::MapFeature_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__msg__MapFeature
    std::shared_ptr<geographic_msgs::msg::MapFeature_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MapFeature_ & other) const
  {
    if (this->id != other.id) {
      return false;
    }
    if (this->components != other.components) {
      return false;
    }
    if (this->props != other.props) {
      return false;
    }
    return true;
  }
  bool operator!=(const MapFeature_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MapFeature_

// alias to use template instance with default allocator
using MapFeature =
  geographic_msgs::msg::MapFeature_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__MAP_FEATURE__STRUCT_HPP_
