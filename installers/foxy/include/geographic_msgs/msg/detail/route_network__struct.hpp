// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:msg/RouteNetwork.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__STRUCT_HPP_

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
// Member 'id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"
// Member 'bounds'
#include "geographic_msgs/msg/detail/bounding_box__struct.hpp"
// Member 'points'
#include "geographic_msgs/msg/detail/way_point__struct.hpp"
// Member 'segments'
#include "geographic_msgs/msg/detail/route_segment__struct.hpp"
// Member 'props'
#include "geographic_msgs/msg/detail/key_value__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__msg__RouteNetwork __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__msg__RouteNetwork __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RouteNetwork_
{
  using Type = RouteNetwork_<ContainerAllocator>;

  explicit RouteNetwork_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    id(_init),
    bounds(_init)
  {
    (void)_init;
  }

  explicit RouteNetwork_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    id(_alloc, _init),
    bounds(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _id_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _id_type id;
  using _bounds_type =
    geographic_msgs::msg::BoundingBox_<ContainerAllocator>;
  _bounds_type bounds;
  using _points_type =
    std::vector<geographic_msgs::msg::WayPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<geographic_msgs::msg::WayPoint_<ContainerAllocator>>::other>;
  _points_type points;
  using _segments_type =
    std::vector<geographic_msgs::msg::RouteSegment_<ContainerAllocator>, typename ContainerAllocator::template rebind<geographic_msgs::msg::RouteSegment_<ContainerAllocator>>::other>;
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
  Type & set__id(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__bounds(
    const geographic_msgs::msg::BoundingBox_<ContainerAllocator> & _arg)
  {
    this->bounds = _arg;
    return *this;
  }
  Type & set__points(
    const std::vector<geographic_msgs::msg::WayPoint_<ContainerAllocator>, typename ContainerAllocator::template rebind<geographic_msgs::msg::WayPoint_<ContainerAllocator>>::other> & _arg)
  {
    this->points = _arg;
    return *this;
  }
  Type & set__segments(
    const std::vector<geographic_msgs::msg::RouteSegment_<ContainerAllocator>, typename ContainerAllocator::template rebind<geographic_msgs::msg::RouteSegment_<ContainerAllocator>>::other> & _arg)
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
    geographic_msgs::msg::RouteNetwork_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::msg::RouteNetwork_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::msg::RouteNetwork_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::msg::RouteNetwork_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::RouteNetwork_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::RouteNetwork_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::RouteNetwork_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::RouteNetwork_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::msg::RouteNetwork_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::msg::RouteNetwork_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__msg__RouteNetwork
    std::shared_ptr<geographic_msgs::msg::RouteNetwork_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__msg__RouteNetwork
    std::shared_ptr<geographic_msgs::msg::RouteNetwork_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RouteNetwork_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->bounds != other.bounds) {
      return false;
    }
    if (this->points != other.points) {
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
  bool operator!=(const RouteNetwork_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RouteNetwork_

// alias to use template instance with default allocator
using RouteNetwork =
  geographic_msgs::msg::RouteNetwork_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__ROUTE_NETWORK__STRUCT_HPP_
