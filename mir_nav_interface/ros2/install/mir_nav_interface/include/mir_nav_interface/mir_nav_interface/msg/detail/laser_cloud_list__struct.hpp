// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mir_nav_interface:msg/LaserCloudList.idl
// generated code does not contain a copyright notice

#ifndef MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__STRUCT_HPP_
#define MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'clouds'
#include "mir_nav_interface/msg/detail/laser_cloud__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__mir_nav_interface__msg__LaserCloudList __attribute__((deprecated))
#else
# define DEPRECATED__mir_nav_interface__msg__LaserCloudList __declspec(deprecated)
#endif

namespace mir_nav_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LaserCloudList_
{
  using Type = LaserCloudList_<ContainerAllocator>;

  explicit LaserCloudList_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit LaserCloudList_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _clouds_type =
    std::vector<mir_nav_interface::msg::LaserCloud_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mir_nav_interface::msg::LaserCloud_<ContainerAllocator>>>;
  _clouds_type clouds;

  // setters for named parameter idiom
  Type & set__clouds(
    const std::vector<mir_nav_interface::msg::LaserCloud_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<mir_nav_interface::msg::LaserCloud_<ContainerAllocator>>> & _arg)
  {
    this->clouds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mir_nav_interface::msg::LaserCloudList_<ContainerAllocator> *;
  using ConstRawPtr =
    const mir_nav_interface::msg::LaserCloudList_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mir_nav_interface::msg::LaserCloudList_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mir_nav_interface::msg::LaserCloudList_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mir_nav_interface::msg::LaserCloudList_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mir_nav_interface::msg::LaserCloudList_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mir_nav_interface::msg::LaserCloudList_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mir_nav_interface::msg::LaserCloudList_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mir_nav_interface::msg::LaserCloudList_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mir_nav_interface::msg::LaserCloudList_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mir_nav_interface__msg__LaserCloudList
    std::shared_ptr<mir_nav_interface::msg::LaserCloudList_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mir_nav_interface__msg__LaserCloudList
    std::shared_ptr<mir_nav_interface::msg::LaserCloudList_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LaserCloudList_ & other) const
  {
    if (this->clouds != other.clouds) {
      return false;
    }
    return true;
  }
  bool operator!=(const LaserCloudList_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LaserCloudList_

// alias to use template instance with default allocator
using LaserCloudList =
  mir_nav_interface::msg::LaserCloudList_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mir_nav_interface

#endif  // MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__STRUCT_HPP_
