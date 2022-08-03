// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from map_msgs:srv/ProjectedMapsInfo.idl
// generated code does not contain a copyright notice

#ifndef MAP_MSGS__SRV__DETAIL__PROJECTED_MAPS_INFO__STRUCT_HPP_
#define MAP_MSGS__SRV__DETAIL__PROJECTED_MAPS_INFO__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'projected_maps_info'
#include "map_msgs/msg/detail/projected_map_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__map_msgs__srv__ProjectedMapsInfo_Request __attribute__((deprecated))
#else
# define DEPRECATED__map_msgs__srv__ProjectedMapsInfo_Request __declspec(deprecated)
#endif

namespace map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProjectedMapsInfo_Request_
{
  using Type = ProjectedMapsInfo_Request_<ContainerAllocator>;

  explicit ProjectedMapsInfo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit ProjectedMapsInfo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _projected_maps_info_type =
    std::vector<map_msgs::msg::ProjectedMapInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<map_msgs::msg::ProjectedMapInfo_<ContainerAllocator>>::other>;
  _projected_maps_info_type projected_maps_info;

  // setters for named parameter idiom
  Type & set__projected_maps_info(
    const std::vector<map_msgs::msg::ProjectedMapInfo_<ContainerAllocator>, typename ContainerAllocator::template rebind<map_msgs::msg::ProjectedMapInfo_<ContainerAllocator>>::other> & _arg)
  {
    this->projected_maps_info = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__map_msgs__srv__ProjectedMapsInfo_Request
    std::shared_ptr<map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__map_msgs__srv__ProjectedMapsInfo_Request
    std::shared_ptr<map_msgs::srv::ProjectedMapsInfo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProjectedMapsInfo_Request_ & other) const
  {
    if (this->projected_maps_info != other.projected_maps_info) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProjectedMapsInfo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProjectedMapsInfo_Request_

// alias to use template instance with default allocator
using ProjectedMapsInfo_Request =
  map_msgs::srv::ProjectedMapsInfo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace map_msgs


#ifndef _WIN32
# define DEPRECATED__map_msgs__srv__ProjectedMapsInfo_Response __attribute__((deprecated))
#else
# define DEPRECATED__map_msgs__srv__ProjectedMapsInfo_Response __declspec(deprecated)
#endif

namespace map_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ProjectedMapsInfo_Response_
{
  using Type = ProjectedMapsInfo_Response_<ContainerAllocator>;

  explicit ProjectedMapsInfo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit ProjectedMapsInfo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__map_msgs__srv__ProjectedMapsInfo_Response
    std::shared_ptr<map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__map_msgs__srv__ProjectedMapsInfo_Response
    std::shared_ptr<map_msgs::srv::ProjectedMapsInfo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProjectedMapsInfo_Response_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProjectedMapsInfo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProjectedMapsInfo_Response_

// alias to use template instance with default allocator
using ProjectedMapsInfo_Response =
  map_msgs::srv::ProjectedMapsInfo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace map_msgs

namespace map_msgs
{

namespace srv
{

struct ProjectedMapsInfo
{
  using Request = map_msgs::srv::ProjectedMapsInfo_Request;
  using Response = map_msgs::srv::ProjectedMapsInfo_Response;
};

}  // namespace srv

}  // namespace map_msgs

#endif  // MAP_MSGS__SRV__DETAIL__PROJECTED_MAPS_INFO__STRUCT_HPP_
