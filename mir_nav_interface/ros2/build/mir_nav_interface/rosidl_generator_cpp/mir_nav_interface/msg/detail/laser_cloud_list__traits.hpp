// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mir_nav_interface:msg/LaserCloudList.idl
// generated code does not contain a copyright notice

#ifndef MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__TRAITS_HPP_
#define MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mir_nav_interface/msg/detail/laser_cloud_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'clouds'
#include "mir_nav_interface/msg/detail/laser_cloud__traits.hpp"

namespace mir_nav_interface
{

namespace msg
{

inline void to_flow_style_yaml(
  const LaserCloudList & msg,
  std::ostream & out)
{
  out << "{";
  // member: clouds
  {
    if (msg.clouds.size() == 0) {
      out << "clouds: []";
    } else {
      out << "clouds: [";
      size_t pending_items = msg.clouds.size();
      for (auto item : msg.clouds) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const LaserCloudList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: clouds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.clouds.size() == 0) {
      out << "clouds: []\n";
    } else {
      out << "clouds:\n";
      for (auto item : msg.clouds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const LaserCloudList & msg, bool use_flow_style = false)
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
  const mir_nav_interface::msg::LaserCloudList & msg,
  std::ostream & out, size_t indentation = 0)
{
  mir_nav_interface::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mir_nav_interface::msg::to_yaml() instead")]]
inline std::string to_yaml(const mir_nav_interface::msg::LaserCloudList & msg)
{
  return mir_nav_interface::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mir_nav_interface::msg::LaserCloudList>()
{
  return "mir_nav_interface::msg::LaserCloudList";
}

template<>
inline const char * name<mir_nav_interface::msg::LaserCloudList>()
{
  return "mir_nav_interface/msg/LaserCloudList";
}

template<>
struct has_fixed_size<mir_nav_interface::msg::LaserCloudList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mir_nav_interface::msg::LaserCloudList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mir_nav_interface::msg::LaserCloudList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MIR_NAV_INTERFACE__MSG__DETAIL__LASER_CLOUD_LIST__TRAITS_HPP_
