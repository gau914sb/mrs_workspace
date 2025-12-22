# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/ControlManagerDiagnostics.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlManagerDiagnostics(type):
    """Metaclass of message 'ControlManagerDiagnostics'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mrs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mrs_msgs.msg.ControlManagerDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_manager_diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_manager_diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_manager_diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_manager_diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_manager_diagnostics

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from mrs_msgs.msg import ControllerStatus
            if ControllerStatus.__class__._TYPE_SUPPORT is None:
                ControllerStatus.__class__.__import_type_support__()

            from mrs_msgs.msg import TrackerStatus
            if TrackerStatus.__class__._TYPE_SUPPORT is None:
                TrackerStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ControlManagerDiagnostics(metaclass=Metaclass_ControlManagerDiagnostics):
    """Message class 'ControlManagerDiagnostics'."""

    __slots__ = [
        '_stamp',
        '_uav_name',
        '_output_enabled',
        '_flying_normally',
        '_joystick_active',
        '_bumper_active',
        '_desired_uav_state_rate',
        '_active_tracker',
        '_tracker_status',
        '_active_controller',
        '_controller_status',
        '_available_controllers',
        '_available_trackers',
        '_human_switchable_controllers',
        '_human_switchable_trackers',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'uav_name': 'string',
        'output_enabled': 'boolean',
        'flying_normally': 'boolean',
        'joystick_active': 'boolean',
        'bumper_active': 'boolean',
        'desired_uav_state_rate': 'double',
        'active_tracker': 'string',
        'tracker_status': 'mrs_msgs/TrackerStatus',
        'active_controller': 'string',
        'controller_status': 'mrs_msgs/ControllerStatus',
        'available_controllers': 'sequence<string>',
        'available_trackers': 'sequence<string>',
        'human_switchable_controllers': 'sequence<boolean>',
        'human_switchable_trackers': 'sequence<boolean>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'TrackerStatus'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'ControllerStatus'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('boolean')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.uav_name = kwargs.get('uav_name', str())
        self.output_enabled = kwargs.get('output_enabled', bool())
        self.flying_normally = kwargs.get('flying_normally', bool())
        self.joystick_active = kwargs.get('joystick_active', bool())
        self.bumper_active = kwargs.get('bumper_active', bool())
        self.desired_uav_state_rate = kwargs.get('desired_uav_state_rate', float())
        self.active_tracker = kwargs.get('active_tracker', str())
        from mrs_msgs.msg import TrackerStatus
        self.tracker_status = kwargs.get('tracker_status', TrackerStatus())
        self.active_controller = kwargs.get('active_controller', str())
        from mrs_msgs.msg import ControllerStatus
        self.controller_status = kwargs.get('controller_status', ControllerStatus())
        self.available_controllers = kwargs.get('available_controllers', [])
        self.available_trackers = kwargs.get('available_trackers', [])
        self.human_switchable_controllers = kwargs.get('human_switchable_controllers', [])
        self.human_switchable_trackers = kwargs.get('human_switchable_trackers', [])

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.stamp != other.stamp:
            return False
        if self.uav_name != other.uav_name:
            return False
        if self.output_enabled != other.output_enabled:
            return False
        if self.flying_normally != other.flying_normally:
            return False
        if self.joystick_active != other.joystick_active:
            return False
        if self.bumper_active != other.bumper_active:
            return False
        if self.desired_uav_state_rate != other.desired_uav_state_rate:
            return False
        if self.active_tracker != other.active_tracker:
            return False
        if self.tracker_status != other.tracker_status:
            return False
        if self.active_controller != other.active_controller:
            return False
        if self.controller_status != other.controller_status:
            return False
        if self.available_controllers != other.available_controllers:
            return False
        if self.available_trackers != other.available_trackers:
            return False
        if self.human_switchable_controllers != other.human_switchable_controllers:
            return False
        if self.human_switchable_trackers != other.human_switchable_trackers:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def uav_name(self):
        """Message field 'uav_name'."""
        return self._uav_name

    @uav_name.setter
    def uav_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'uav_name' field must be of type 'str'"
        self._uav_name = value

    @builtins.property
    def output_enabled(self):
        """Message field 'output_enabled'."""
        return self._output_enabled

    @output_enabled.setter
    def output_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'output_enabled' field must be of type 'bool'"
        self._output_enabled = value

    @builtins.property
    def flying_normally(self):
        """Message field 'flying_normally'."""
        return self._flying_normally

    @flying_normally.setter
    def flying_normally(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'flying_normally' field must be of type 'bool'"
        self._flying_normally = value

    @builtins.property
    def joystick_active(self):
        """Message field 'joystick_active'."""
        return self._joystick_active

    @joystick_active.setter
    def joystick_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'joystick_active' field must be of type 'bool'"
        self._joystick_active = value

    @builtins.property
    def bumper_active(self):
        """Message field 'bumper_active'."""
        return self._bumper_active

    @bumper_active.setter
    def bumper_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'bumper_active' field must be of type 'bool'"
        self._bumper_active = value

    @builtins.property
    def desired_uav_state_rate(self):
        """Message field 'desired_uav_state_rate'."""
        return self._desired_uav_state_rate

    @desired_uav_state_rate.setter
    def desired_uav_state_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'desired_uav_state_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'desired_uav_state_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._desired_uav_state_rate = value

    @builtins.property
    def active_tracker(self):
        """Message field 'active_tracker'."""
        return self._active_tracker

    @active_tracker.setter
    def active_tracker(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'active_tracker' field must be of type 'str'"
        self._active_tracker = value

    @builtins.property
    def tracker_status(self):
        """Message field 'tracker_status'."""
        return self._tracker_status

    @tracker_status.setter
    def tracker_status(self, value):
        if self._check_fields:
            from mrs_msgs.msg import TrackerStatus
            assert \
                isinstance(value, TrackerStatus), \
                "The 'tracker_status' field must be a sub message of type 'TrackerStatus'"
        self._tracker_status = value

    @builtins.property
    def active_controller(self):
        """Message field 'active_controller'."""
        return self._active_controller

    @active_controller.setter
    def active_controller(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'active_controller' field must be of type 'str'"
        self._active_controller = value

    @builtins.property
    def controller_status(self):
        """Message field 'controller_status'."""
        return self._controller_status

    @controller_status.setter
    def controller_status(self, value):
        if self._check_fields:
            from mrs_msgs.msg import ControllerStatus
            assert \
                isinstance(value, ControllerStatus), \
                "The 'controller_status' field must be a sub message of type 'ControllerStatus'"
        self._controller_status = value

    @builtins.property
    def available_controllers(self):
        """Message field 'available_controllers'."""
        return self._available_controllers

    @available_controllers.setter
    def available_controllers(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'available_controllers' field must be a set or sequence and each value of type 'str'"
        self._available_controllers = value

    @builtins.property
    def available_trackers(self):
        """Message field 'available_trackers'."""
        return self._available_trackers

    @available_trackers.setter
    def available_trackers(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'available_trackers' field must be a set or sequence and each value of type 'str'"
        self._available_trackers = value

    @builtins.property
    def human_switchable_controllers(self):
        """Message field 'human_switchable_controllers'."""
        return self._human_switchable_controllers

    @human_switchable_controllers.setter
    def human_switchable_controllers(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'human_switchable_controllers' field must be a set or sequence and each value of type 'bool'"
        self._human_switchable_controllers = value

    @builtins.property
    def human_switchable_trackers(self):
        """Message field 'human_switchable_trackers'."""
        return self._human_switchable_trackers

    @human_switchable_trackers.setter
    def human_switchable_trackers(self, value):
        if self._check_fields:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'human_switchable_trackers' field must be a set or sequence and each value of type 'bool'"
        self._human_switchable_trackers = value
