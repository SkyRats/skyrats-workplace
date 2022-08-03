// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:srv/UpdateGeographicMap.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__SRV__DETAIL__UPDATE_GEOGRAPHIC_MAP__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__SRV__DETAIL__UPDATE_GEOGRAPHIC_MAP__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'updates'
#include "geographic_msgs/msg/detail/geographic_map_changes__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__geographic_msgs__srv__UpdateGeographicMap_Request __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__srv__UpdateGeographicMap_Request __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateGeographicMap_Request_
{
  using Type = UpdateGeographicMap_Request_<ContainerAllocator>;

  explicit UpdateGeographicMap_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : updates(_init)
  {
    (void)_init;
  }

  explicit UpdateGeographicMap_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : updates(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _updates_type =
    geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator>;
  _updates_type updates;

  // setters for named parameter idiom
  Type & set__updates(
    const geographic_msgs::msg::GeographicMapChanges_<ContainerAllocator> & _arg)
  {
    this->updates = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__srv__UpdateGeographicMap_Request
    std::shared_ptr<geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__srv__UpdateGeographicMap_Request
    std::shared_ptr<geographic_msgs::srv::UpdateGeographicMap_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateGeographicMap_Request_ & other) const
  {
    if (this->updates != other.updates) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateGeographicMap_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateGeographicMap_Request_

// alias to use template instance with default allocator
using UpdateGeographicMap_Request =
  geographic_msgs::srv::UpdateGeographicMap_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace geographic_msgs


#ifndef _WIN32
# define DEPRECATED__geographic_msgs__srv__UpdateGeographicMap_Response __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__srv__UpdateGeographicMap_Response __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct UpdateGeographicMap_Response_
{
  using Type = UpdateGeographicMap_Response_<ContainerAllocator>;

  explicit UpdateGeographicMap_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
      this->status = "";
    }
  }

  explicit UpdateGeographicMap_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : status(_alloc)
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

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__srv__UpdateGeographicMap_Response
    std::shared_ptr<geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__srv__UpdateGeographicMap_Response
    std::shared_ptr<geographic_msgs::srv::UpdateGeographicMap_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const UpdateGeographicMap_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const UpdateGeographicMap_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct UpdateGeographicMap_Response_

// alias to use template instance with default allocator
using UpdateGeographicMap_Response =
  geographic_msgs::srv::UpdateGeographicMap_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace geographic_msgs

namespace geographic_msgs
{

namespace srv
{

struct UpdateGeographicMap
{
  using Request = geographic_msgs::srv::UpdateGeographicMap_Request;
  using Response = geographic_msgs::srv::UpdateGeographicMap_Response;
};

}  // namespace srv

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__SRV__DETAIL__UPDATE_GEOGRAPHIC_MAP__STRUCT_HPP_
