// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mir_nav_interface:msg/LaserCloud.idl
// generated code does not contain a copyright notice

#ifndef MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__BUILDER_HPP_
#define MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "mir_nav_interface/msg/detail/laser_cloud__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace mir_nav_interface
{

namespace msg
{

namespace builder
{

class Init_LaserCloud_scanner
{
public:
  explicit Init_LaserCloud_scanner(::mir_nav_interface::msg::LaserCloud & msg)
  : msg_(msg)
  {}
  ::mir_nav_interface::msg::LaserCloud scanner(::mir_nav_interface::msg::LaserCloud::_scanner_type arg)
  {
    msg_.scanner = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mir_nav_interface::msg::LaserCloud msg_;
};

class Init_LaserCloud_odom_to_base
{
public:
  explicit Init_LaserCloud_odom_to_base(::mir_nav_interface::msg::LaserCloud & msg)
  : msg_(msg)
  {}
  Init_LaserCloud_scanner odom_to_base(::mir_nav_interface::msg::LaserCloud::_odom_to_base_type arg)
  {
    msg_.odom_to_base = std::move(arg);
    return Init_LaserCloud_scanner(msg_);
  }

private:
  ::mir_nav_interface::msg::LaserCloud msg_;
};

class Init_LaserCloud_origin
{
public:
  explicit Init_LaserCloud_origin(::mir_nav_interface::msg::LaserCloud & msg)
  : msg_(msg)
  {}
  Init_LaserCloud_odom_to_base origin(::mir_nav_interface::msg::LaserCloud::_origin_type arg)
  {
    msg_.origin = std::move(arg);
    return Init_LaserCloud_odom_to_base(msg_);
  }

private:
  ::mir_nav_interface::msg::LaserCloud msg_;
};

class Init_LaserCloud_cloud_data
{
public:
  Init_LaserCloud_cloud_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LaserCloud_origin cloud_data(::mir_nav_interface::msg::LaserCloud::_cloud_data_type arg)
  {
    msg_.cloud_data = std::move(arg);
    return Init_LaserCloud_origin(msg_);
  }

private:
  ::mir_nav_interface::msg::LaserCloud msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mir_nav_interface::msg::LaserCloud>()
{
  return mir_nav_interface::msg::builder::Init_LaserCloud_cloud_data();
}

}  // namespace mir_nav_interface

#endif  // MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__BUILDER_HPP_
