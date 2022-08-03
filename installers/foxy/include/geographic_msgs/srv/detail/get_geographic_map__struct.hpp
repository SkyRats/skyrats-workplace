// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:srv/GetGeographicMap.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'bounds'
#include "geographic_msgs/msg/detail/bounding_box__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__srv__GetGeographicMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__srv__GetGeographicMap_Request __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGeographicMap_Request_
{
  using Type = GetGeographicMap_Request_<ContainerAllocator>;

  explicit GetGeographicMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : bounds(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->url = "";
    }
  }

  explicit GetGeographicMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : url(_alloc),
    bounds(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->url = "";
    }
  }

  // field types and members
  using _url_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _url_type url;
  using _bounds_type =
    geographic_msgs::msg::BoundingBox_<ContainerAllocator>;
  _bounds_type bounds;

  // setters for named parameter idiom
  Type & set__url(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->url = _arg;
    return *this;
  }
  Type & set__bounds(
    const geographic_msgs::msg::BoundingBox_<ContainerAllocator> & _arg)
  {
    this->bounds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__srv__GetGeographicMap_Request
    std::shared_ptr<geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__srv__GetGeographicMap_Request
    std::shared_ptr<geographic_msgs::srv::GetGeographicMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGeographicMap_Request_ & other) const
  {
    if (this->url != other.url) {
      return false;
    }
    if (this->bounds != other.bounds) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGeographicMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGeographicMap_Request_

// alias to use template instance with default allocator
using GetGeographicMap_Request =
  geographic_msgs::srv::GetGeographicMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace geographic_msgs


// Include directives for member types
// Member 'map'
#include "geographic_msgs/msg/detail/geographic_map__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__srv__GetGeographicMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__srv__GetGeographicMap_Response __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetGeographicMap_Response_
{
  using Type = GetGeographicMap_Response_<ContainerAllocator>;

  explicit GetGeographicMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : map(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status = "";
    }
  }

  explicit GetGeographicMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc),
    map(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status = "";
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;
  using _status_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _status_type status;
  using _map_type =
    geographic_msgs::msg::GeographicMap_<ContainerAllocator>;
  _map_type map;

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
  Type & set__map(
    const geographic_msgs::msg::GeographicMap_<ContainerAllocator> & _arg)
  {
    this->map = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__srv__GetGeographicMap_Response
    std::shared_ptr<geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__srv__GetGeographicMap_Response
    std::shared_ptr<geographic_msgs::srv::GetGeographicMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetGeographicMap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    if (this->map != other.map) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetGeographicMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetGeographicMap_Response_

// alias to use template instance with default allocator
using GetGeographicMap_Response =
  geographic_msgs::srv::GetGeographicMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace geographic_msgs

namespace geographic_msgs
{

namespace srv
{

struct GetGeographicMap
{
  using Request = geographic_msgs::srv::GetGeographicMap_Request;
  using Response = geographic_msgs::srv::GetGeographicMap_Response;
};

}  // namespace srv

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__GET_GEOGRAPHIC_MAP__STRUCT_HPP_
