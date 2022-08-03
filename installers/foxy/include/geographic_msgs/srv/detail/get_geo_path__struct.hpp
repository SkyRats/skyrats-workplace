// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:srv/GetGeoPath.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'start'
// Member 'goal'
#include "geographic_msgs/msg/detail/geo_point__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__srv__GetGeoPath_Request __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__srv__GetGeoPath_Request __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGeoPath_Request_
{
  using Type = GetGeoPath_Request_<ContainerAllocator>;

  explicit GetGeoPath_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_init),
    goal(_init)
  {
    (void)_init;
  }

  explicit GetGeoPath_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : start(_alloc, _init),
    goal(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _start_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _start_type start;
  using _goal_type =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator>;
  _goal_type goal;

  // setters for named parameter idiom
  Type & set__start(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__goal(
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> & _arg)
  {
    this->goal = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__srv__GetGeoPath_Request
    std::shared_ptr<geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__srv__GetGeoPath_Request
    std::shared_ptr<geographic_msgs::srv::GetGeoPath_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGeoPath_Request_ & other) const
  {
    if (this->start != other.start) {
      return false;
    }
    if (this->goal != other.goal) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGeoPath_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGeoPath_Request_

// alias to use template instance with default allocator
using GetGeoPath_Request =
  geographic_msgs::srv::GetGeoPath_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace geographic_msgs


// Include directives for member types
// Member 'plan'
#include "geographic_msgs/msg/detail/geo_path__struct.hpp"
// Member 'network'
// Member 'start_seg'
// Member 'goal_seg'
#include "unique_identifier_msgs/msg/detail/uuid__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__srv__GetGeoPath_Response __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__srv__GetGeoPath_Response __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGeoPath_Response_
{
  using Type = GetGeoPath_Response_<ContainerAllocator>;

  explicit GetGeoPath_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : plan(_init),
    network(_init),
    start_seg(_init),
    goal_seg(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status = "";
      this->distance = 0.0;
    }
  }

  explicit GetGeoPath_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc),
    plan(_alloc, _init),
    network(_alloc, _init),
    start_seg(_alloc, _init),
    goal_seg(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status = "";
      this->distance = 0.0;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_type status;
  using _plan_type =
    geographic_msgs::msg::GeoPath_<ContainerAllocator>;
  _plan_type plan;
  using _network_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _network_type network;
  using _start_seg_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _start_seg_type start_seg;
  using _goal_seg_type =
    unique_identifier_msgs::msg::UUID_<ContainerAllocator>;
  _goal_seg_type goal_seg;
  using _distance_type =
    double;
  _distance_type distance;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }
  Type & set__status(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->status = _arg;
    return *this;
  }
  Type & set__plan(
    const geographic_msgs::msg::GeoPath_<ContainerAllocator> & _arg)
  {
    this->plan = _arg;
    return *this;
  }
  Type & set__network(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->network = _arg;
    return *this;
  }
  Type & set__start_seg(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->start_seg = _arg;
    return *this;
  }
  Type & set__goal_seg(
    const unique_identifier_msgs::msg::UUID_<ContainerAllocator> & _arg)
  {
    this->goal_seg = _arg;
    return *this;
  }
  Type & set__distance(
    const double & _arg)
  {
    this->distance = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__srv__GetGeoPath_Response
    std::shared_ptr<geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__srv__GetGeoPath_Response
    std::shared_ptr<geographic_msgs::srv::GetGeoPath_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGeoPath_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->plan != other.plan) {
      return false;
    }
    if (this->network != other.network) {
      return false;
    }
    if (this->start_seg != other.start_seg) {
      return false;
    }
    if (this->goal_seg != other.goal_seg) {
      return false;
    }
    if (this->distance != other.distance) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGeoPath_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGeoPath_Response_

// alias to use template instance with default allocator
using GetGeoPath_Response =
  geographic_msgs::srv::GetGeoPath_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace geographic_msgs

namespace geographic_msgs
{

namespace srv
{

struct GetGeoPath
{
  using Request = geographic_msgs::srv::GetGeoPath_Request;
  using Response = geographic_msgs::srv::GetGeoPath_Response;
};

}  // namespace srv

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEO_PATH__STRUCT_HPP_
