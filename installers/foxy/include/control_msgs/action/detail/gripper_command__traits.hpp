// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from control_msgs:action/GripperCommand.idl
// generated code does not contain a copyright notice

#ifndef CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
#define CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_

#include "control_msgs/action/detail/gripper_command__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'command'
#include "control_msgs/msg/detail/gripper_command__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_Goal>()
{
  return "control_msgs::action::GripperCommand_Goal";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_Goal>()
{
  return "control_msgs/action/GripperCommand_Goal";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_Goal>
  : std::integral_constant<bool, has_fixed_size<control_msgs::msg::GripperCommand>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_Goal>
  : std::integral_constant<bool, has_bounded_size<control_msgs::msg::GripperCommand>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_Result>()
{
  return "control_msgs::action::GripperCommand_Result";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_Result>()
{
  return "control_msgs/action/GripperCommand_Result";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::action::GripperCommand_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_Feedback>()
{
  return "control_msgs::action::GripperCommand_Feedback";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_Feedback>()
{
  return "control_msgs/action/GripperCommand_Feedback";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_Feedback>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<control_msgs::action::GripperCommand_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "control_msgs/action/detail/gripper_command__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_SendGoal_Request>()
{
  return "control_msgs::action::GripperCommand_SendGoal_Request";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_SendGoal_Request>()
{
  return "control_msgs/action/GripperCommand_SendGoal_Request";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::GripperCommand_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::GripperCommand_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_SendGoal_Response>()
{
  return "control_msgs::action::GripperCommand_SendGoal_Response";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_SendGoal_Response>()
{
  return "control_msgs/action/GripperCommand_SendGoal_Response";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_SendGoal>()
{
  return "control_msgs::action::GripperCommand_SendGoal";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_SendGoal>()
{
  return "control_msgs/action/GripperCommand_SendGoal";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::action::GripperCommand_SendGoal_Request>::value &&
    has_fixed_size<control_msgs::action::GripperCommand_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::action::GripperCommand_SendGoal_Request>::value &&
    has_bounded_size<control_msgs::action::GripperCommand_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::action::GripperCommand_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::action::GripperCommand_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::action::GripperCommand_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_GetResult_Request>()
{
  return "control_msgs::action::GripperCommand_GetResult_Request";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_GetResult_Request>()
{
  return "control_msgs/action/GripperCommand_GetResult_Request";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "control_msgs/action/detail/gripper_command__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_GetResult_Response>()
{
  return "control_msgs::action::GripperCommand_GetResult_Response";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_GetResult_Response>()
{
  return "control_msgs/action/GripperCommand_GetResult_Response";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::GripperCommand_Result>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::GripperCommand_Result>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_GetResult>()
{
  return "control_msgs::action::GripperCommand_GetResult";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_GetResult>()
{
  return "control_msgs/action/GripperCommand_GetResult";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<control_msgs::action::GripperCommand_GetResult_Request>::value &&
    has_fixed_size<control_msgs::action::GripperCommand_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<control_msgs::action::GripperCommand_GetResult_Request>::value &&
    has_bounded_size<control_msgs::action::GripperCommand_GetResult_Response>::value
  >
{
};

template<>
struct is_service<control_msgs::action::GripperCommand_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<control_msgs::action::GripperCommand_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<control_msgs::action::GripperCommand_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "control_msgs/action/detail/gripper_command__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<control_msgs::action::GripperCommand_FeedbackMessage>()
{
  return "control_msgs::action::GripperCommand_FeedbackMessage";
}

template<>
inline const char * name<control_msgs::action::GripperCommand_FeedbackMessage>()
{
  return "control_msgs/action/GripperCommand_FeedbackMessage";
}

template<>
struct has_fixed_size<control_msgs::action::GripperCommand_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<control_msgs::action::GripperCommand_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<control_msgs::action::GripperCommand_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<control_msgs::action::GripperCommand_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<control_msgs::action::GripperCommand_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<control_msgs::action::GripperCommand>
  : std::true_type
{
};

template<>
struct is_action_goal<control_msgs::action::GripperCommand_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<control_msgs::action::GripperCommand_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<control_msgs::action::GripperCommand_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // CONTROL_MSGS__ACTION__DETAIL__GRIPPER_COMMAND__TRAITS_HPP_
