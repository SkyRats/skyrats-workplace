// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from geographic_msgs:msg/GeoPoint.idl
// generated code does not contain a copyright notice

#ifndef GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__STRUCT_HPP_
#define GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__geographic_msgs__msg__GeoPoint __attribute__((deprecated))
#else
# define DEPRECATED__geographic_msgs__msg__GeoPoint __declspec(deprecated)
#endif

namespace geographic_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GeoPoint_
{
  using Type = GeoPoint_<ContainerAllocator>;

  explicit GeoPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
    }
  }

  explicit GeoPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->latitude = 0.0;
      this->longitude = 0.0;
      this->altitude = 0.0;
    }
  }

  // field types and members
  using _latitude_type =
    double;
  _latitude_type latitude;
  using _longitude_type =
    double;
  _longitude_type longitude;
  using _altitude_type =
    double;
  _altitude_type altitude;

  // setters for named parameter idiom
  Type & set__latitude(
    const double & _arg)
  {
    this->latitude = _arg;
    return *this;
  }
  Type & set__longitude(
    const double & _arg)
  {
    this->longitude = _arg;
    return *this;
  }
  Type & set__altitude(
    const double & _arg)
  {
    this->altitude = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    geographic_msgs::msg::GeoPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const geographic_msgs::msg::GeoPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<geographic_msgs::msg::GeoPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<geographic_msgs::msg::GeoPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::GeoPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::GeoPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      geographic_msgs::msg::GeoPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<geographic_msgs::msg::GeoPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<geographic_msgs::msg::GeoPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<geographic_msgs::msg::GeoPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__geographic_msgs__msg__GeoPoint
    std::shared_ptr<geographic_msgs::msg::GeoPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__geographic_msgs__msg__GeoPoint
    std::shared_ptr<geographic_msgs::msg::GeoPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GeoPoint_ & other) const
  {
    if (this->latitude != other.latitude) {
      return false;
    }
    if (this->longitude != other.longitude) {
      return false;
    }
    if (this->altitude != other.altitude) {
      return false;
    }
    return true;
  }
  bool operator!=(const GeoPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GeoPoint_

// alias to use template instance with default allocator
using GeoPoint =
  geographic_msgs::msg::GeoPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace geographic_msgs

#endif  // GEOGRAPHIC_MSGS__MSG__DETAIL__GEO_POINT__STRUCT_HPP_
