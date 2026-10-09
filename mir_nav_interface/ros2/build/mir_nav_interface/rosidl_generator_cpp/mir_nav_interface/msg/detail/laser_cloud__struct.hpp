// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_nav_interface:msg/LaserCloud.idl
// generated code does not contain a copyright notice

#ifndef MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__STRUCT_HPP_
#define MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'cloud_data'
#include "sensor_msgs/msg/detail/point_cloud2__struct.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'odom_to_base'
#include "geometry_msgs/msg/detail/transform__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_nav_interface__msg__LaserCloud __attribute__((deprecated))
#else
# define DEPRECATED__mir_nav_interface__msg__LaserCloud __declspec(deprecated)
#endif

namespace mir_nav_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaserCloud_
{
  using Type = LaserCloud_<ContainerAllocator>;

  explicit LaserCloud_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cloud_data(_init),
    origin(_init),
    odom_to_base(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scanner = 0;
    }
  }

  explicit LaserCloud_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : cloud_data(_alloc, _init),
    origin(_alloc, _init),
    odom_to_base(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->scanner = 0;
    }
  }

  // field types and members
  using _cloud_data_type =
    sensor_msgs::msg::PointCloud2_<ContainerAllocator>;
  _cloud_data_type cloud_data;
  using _origin_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _origin_type origin;
  using _odom_to_base_type =
    geometry_msgs::msg::Transform_<ContainerAllocator>;
  _odom_to_base_type odom_to_base;
  using _scanner_type =
    uint8_t;
  _scanner_type scanner;

  // setters for named parameter idiom
  Type & set__cloud_data(
    const sensor_msgs::msg::PointCloud2_<ContainerAllocator> & _arg)
  {
    this->cloud_data = _arg;
    return *this;
  }
  Type & set__origin(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }
  Type & set__odom_to_base(
    const geometry_msgs::msg::Transform_<ContainerAllocator> & _arg)
  {
    this->odom_to_base = _arg;
    return *this;
  }
  Type & set__scanner(
    const uint8_t & _arg)
  {
    this->scanner = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t BACK_SCANNER =
    1u;
  static constexpr uint8_t FRONT_SCANNER =
    2u;
  static constexpr uint8_t RIGHT_SCANNER =
    3u;

  // pointer types
  using RawPtr =
    mir_nav_interface::msg::LaserCloud_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_nav_interface::msg::LaserCloud_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_nav_interface::msg::LaserCloud_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_nav_interface::msg::LaserCloud_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_nav_interface::msg::LaserCloud_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_nav_interface::msg::LaserCloud_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_nav_interface::msg::LaserCloud_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_nav_interface::msg::LaserCloud_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_nav_interface::msg::LaserCloud_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_nav_interface::msg::LaserCloud_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_nav_interface__msg__LaserCloud
    std::shared_ptr<mir_nav_interface::msg::LaserCloud_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_nav_interface__msg__LaserCloud
    std::shared_ptr<mir_nav_interface::msg::LaserCloud_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaserCloud_ & other) const
  {
    if (this->cloud_data != other.cloud_data) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    if (this->odom_to_base != other.odom_to_base) {
      return false;
    }
    if (this->scanner != other.scanner) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaserCloud_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaserCloud_

// alias to use template instance with default allocator
using LaserCloud =
  mir_nav_interface::msg::LaserCloud_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaserCloud_<ContainerAllocator>::BACK_SCANNER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaserCloud_<ContainerAllocator>::FRONT_SCANNER;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr uint8_t LaserCloud_<ContainerAllocator>::RIGHT_SCANNER;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace mir_nav_interface

#endif  // MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__STRUCT_HPP_
