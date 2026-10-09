// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_nav_interface:msg/LaserCloud.idl
// generated code does not contain a copyright notice

#ifndef MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__TRAITS_HPP_
#define MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_nav_interface/msg/detail/laser_cloud__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'cloud_data'
#include "sensor_msgs/msg/detail/point_cloud2__traits.hpp"
// Member 'origin'
#include "geometry_msgs/msg/detail/pose__traits.hpp"
// Member 'odom_to_base'
#include "geometry_msgs/msg/detail/transform__traits.hpp"

namespace mir_nav_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaserCloud & msg,
  std::ostream & out)
{
  out << "{";
  // member: cloud_data
  {
    out << "cloud_data: ";
    to_flow_style_yaml(msg.cloud_data, out);
    out << ", ";
  }

  // member: origin
  {
    out << "origin: ";
    to_flow_style_yaml(msg.origin, out);
    out << ", ";
  }

  // member: odom_to_base
  {
    out << "odom_to_base: ";
    to_flow_style_yaml(msg.odom_to_base, out);
    out << ", ";
  }

  // member: scanner
  {
    out << "scanner: ";
    rosidl_generator_traits::value_to_yaml(msg.scanner, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaserCloud & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: cloud_data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cloud_data:\n";
    to_block_style_yaml(msg.cloud_data, out, indentation + 2);
  }

  // member: origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin:\n";
    to_block_style_yaml(msg.origin, out, indentation + 2);
  }

  // member: odom_to_base
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "odom_to_base:\n";
    to_block_style_yaml(msg.odom_to_base, out, indentation + 2);
  }

  // member: scanner
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "scanner: ";
    rosidl_generator_traits::value_to_yaml(msg.scanner, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaserCloud & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace mir_nav_interface

namespace rosidl_generator_traits
{

[[deprecated("use mir_nav_interface::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mir_nav_interface::msg::LaserCloud & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_nav_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_nav_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_nav_interface::msg::LaserCloud & msg)
{
  return mir_nav_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_nav_interface::msg::LaserCloud>()
{
  return "mir_nav_interface::msg::LaserCloud";
}

template<>
inline const char * name<mir_nav_interface::msg::LaserCloud>()
{
  return "mir_nav_interface/msg/LaserCloud";
}

template<>
struct has_fixed_size<mir_nav_interface::msg::LaserCloud>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value && has_fixed_size<geometry_msgs::msg::Transform>::value && has_fixed_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct has_bounded_size<mir_nav_interface::msg::LaserCloud>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value && has_bounded_size<geometry_msgs::msg::Transform>::value && has_bounded_size<sensor_msgs::msg::PointCloud2>::value> {};

template<>
struct is_message<mir_nav_interface::msg::LaserCloud>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD__TRAITS_HPP_
