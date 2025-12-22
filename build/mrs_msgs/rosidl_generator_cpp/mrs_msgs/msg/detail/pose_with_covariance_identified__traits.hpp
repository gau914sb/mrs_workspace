// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mrs_msgs:msg/PoseWithCovarianceIdentified.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "mrs_msgs/msg/pose_with_covariance_identified.hpp"


#ifndef MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__TRAITS_HPP_
#define MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "mrs_msgs/msg/detail/pose_with_covariance_identified__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace mrs_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PoseWithCovarianceIdentified & msg,
  std::ostream & out)
{
  out << "{";
  // member: id
  {
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << ", ";
  }

  // member: pose
  {
    out << "pose: ";
    to_flow_style_yaml(msg.pose, out);
    out << ", ";
  }

  // member: covariance
  {
    if (msg.covariance.size() == 0) {
      out << "covariance: []";
    } else {
      out << "covariance: [";
      size_t pending_items = msg.covariance.size();
      for (auto item : msg.covariance) {
        rosidl_generator_traits::value_to_yaml(item, out);
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
  const PoseWithCovarianceIdentified & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    rosidl_generator_traits::value_to_yaml(msg.id, out);
    out << "\n";
  }

  // member: pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pose:\n";
    to_block_style_yaml(msg.pose, out, indentation + 2);
  }

  // member: covariance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.covariance.size() == 0) {
      out << "covariance: []\n";
    } else {
      out << "covariance:\n";
      for (auto item : msg.covariance) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PoseWithCovarianceIdentified & msg, bool use_flow_style = false)
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

}  // namespace mrs_msgs

namespace rosidl_generator_traits
{

[[deprecated("use mrs_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const mrs_msgs::msg::PoseWithCovarianceIdentified & msg,
  std::ostream & out, size_t indentation = 0)
{
  mrs_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use mrs_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const mrs_msgs::msg::PoseWithCovarianceIdentified & msg)
{
  return mrs_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<mrs_msgs::msg::PoseWithCovarianceIdentified>()
{
  return "mrs_msgs::msg::PoseWithCovarianceIdentified";
}

template<>
inline const char * name<mrs_msgs::msg::PoseWithCovarianceIdentified>()
{
  return "mrs_msgs/msg/PoseWithCovarianceIdentified";
}

template<>
struct has_fixed_size<mrs_msgs::msg::PoseWithCovarianceIdentified>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<mrs_msgs::msg::PoseWithCovarianceIdentified>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<mrs_msgs::msg::PoseWithCovarianceIdentified>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MRS_MSGS__MSG__DETAIL__POSE_WITH_COVARIANCE_IDENTIFIED__TRAITS_HPP_
