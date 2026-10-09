// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_nav_interface:msg/LaserCloudList.idl
// generated code does not contain a copyright notice

#ifndef MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__BUILDER_HPP_
#define MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_nav_interface/msg/detail/laser_cloud_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_nav_interface
{

namespace msg
{

namespace builder
{

class Init_LaserCloudList_clouds
{
public:
  Init_LaserCloudList_clouds()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mir_nav_interface::msg::LaserCloudList clouds(::mir_nav_interface::msg::LaserCloudList::_clouds_type arg)
  {
    msg_.clouds = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_nav_interface::msg::LaserCloudList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_nav_interface::msg::LaserCloudList>()
{
  return mir_nav_interface::msg::builder::Init_LaserCloudList_clouds();
}

}  // namespace mir_nav_interface

#endif  // MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__BUILDER_HPP_
