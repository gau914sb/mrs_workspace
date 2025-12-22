# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/Path.idl
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


class Metaclass_Path(type):
    """Metaclass of message 'Path'."""

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
                'mrs_msgs.msg.Path')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__path
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__path
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__path
            cls._TYPE_SUPPORT = module.type_support_msg__msg__path
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__path

            from mrs_msgs.msg import Reference
            if Reference.__class__._TYPE_SUPPORT is None:
                Reference.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Path(metaclass=Metaclass_Path):
    """Message class 'Path'."""

    __slots__ = [
        '_header',
        '_input_id',
        '_use_heading',
        '_fly_now',
        '_stop_at_waypoints',
        '_loop',
        '_max_execution_time',
        '_max_deviation_from_path',
        '_dont_prepend_current_state',
        '_override_heading_atan2',
        '_override_constraints',
        '_override_max_velocity_horizontal',
        '_override_max_acceleration_horizontal',
        '_override_max_jerk_horizontal',
        '_override_max_velocity_vertical',
        '_override_max_acceleration_vertical',
        '_override_max_jerk_vertical',
        '_relax_heading',
        '_points',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'input_id': 'int64',
        'use_heading': 'boolean',
        'fly_now': 'boolean',
        'stop_at_waypoints': 'boolean',
        'loop': 'boolean',
        'max_execution_time': 'double',
        'max_deviation_from_path': 'double',
        'dont_prepend_current_state': 'boolean',
        'override_heading_atan2': 'boolean',
        'override_constraints': 'boolean',
        'override_max_velocity_horizontal': 'double',
        'override_max_acceleration_horizontal': 'double',
        'override_max_jerk_horizontal': 'double',
        'override_max_velocity_vertical': 'double',
        'override_max_acceleration_vertical': 'double',
        'override_max_jerk_vertical': 'double',
        'relax_heading': 'boolean',
        'points': 'sequence<mrs_msgs/Reference>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'Reference')),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.input_id = kwargs.get('input_id', int())
        self.use_heading = kwargs.get('use_heading', bool())
        self.fly_now = kwargs.get('fly_now', bool())
        self.stop_at_waypoints = kwargs.get('stop_at_waypoints', bool())
        self.loop = kwargs.get('loop', bool())
        self.max_execution_time = kwargs.get('max_execution_time', float())
        self.max_deviation_from_path = kwargs.get('max_deviation_from_path', float())
        self.dont_prepend_current_state = kwargs.get('dont_prepend_current_state', bool())
        self.override_heading_atan2 = kwargs.get('override_heading_atan2', bool())
        self.override_constraints = kwargs.get('override_constraints', bool())
        self.override_max_velocity_horizontal = kwargs.get('override_max_velocity_horizontal', float())
        self.override_max_acceleration_horizontal = kwargs.get('override_max_acceleration_horizontal', float())
        self.override_max_jerk_horizontal = kwargs.get('override_max_jerk_horizontal', float())
        self.override_max_velocity_vertical = kwargs.get('override_max_velocity_vertical', float())
        self.override_max_acceleration_vertical = kwargs.get('override_max_acceleration_vertical', float())
        self.override_max_jerk_vertical = kwargs.get('override_max_jerk_vertical', float())
        self.relax_heading = kwargs.get('relax_heading', bool())
        self.points = kwargs.get('points', [])

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
        if self.header != other.header:
            return False
        if self.input_id != other.input_id:
            return False
        if self.use_heading != other.use_heading:
            return False
        if self.fly_now != other.fly_now:
            return False
        if self.stop_at_waypoints != other.stop_at_waypoints:
            return False
        if self.loop != other.loop:
            return False
        if self.max_execution_time != other.max_execution_time:
            return False
        if self.max_deviation_from_path != other.max_deviation_from_path:
            return False
        if self.dont_prepend_current_state != other.dont_prepend_current_state:
            return False
        if self.override_heading_atan2 != other.override_heading_atan2:
            return False
        if self.override_constraints != other.override_constraints:
            return False
        if self.override_max_velocity_horizontal != other.override_max_velocity_horizontal:
            return False
        if self.override_max_acceleration_horizontal != other.override_max_acceleration_horizontal:
            return False
        if self.override_max_jerk_horizontal != other.override_max_jerk_horizontal:
            return False
        if self.override_max_velocity_vertical != other.override_max_velocity_vertical:
            return False
        if self.override_max_acceleration_vertical != other.override_max_acceleration_vertical:
            return False
        if self.override_max_jerk_vertical != other.override_max_jerk_vertical:
            return False
        if self.relax_heading != other.relax_heading:
            return False
        if self.points != other.points:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def input_id(self):
        """Message field 'input_id'."""
        return self._input_id

    @input_id.setter
    def input_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'input_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'input_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._input_id = value

    @builtins.property
    def use_heading(self):
        """Message field 'use_heading'."""
        return self._use_heading

    @use_heading.setter
    def use_heading(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'use_heading' field must be of type 'bool'"
        self._use_heading = value

    @builtins.property
    def fly_now(self):
        """Message field 'fly_now'."""
        return self._fly_now

    @fly_now.setter
    def fly_now(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'fly_now' field must be of type 'bool'"
        self._fly_now = value

    @builtins.property
    def stop_at_waypoints(self):
        """Message field 'stop_at_waypoints'."""
        return self._stop_at_waypoints

    @stop_at_waypoints.setter
    def stop_at_waypoints(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'stop_at_waypoints' field must be of type 'bool'"
        self._stop_at_waypoints = value

    @builtins.property
    def loop(self):
        """Message field 'loop'."""
        return self._loop

    @loop.setter
    def loop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'loop' field must be of type 'bool'"
        self._loop = value

    @builtins.property
    def max_execution_time(self):
        """Message field 'max_execution_time'."""
        return self._max_execution_time

    @max_execution_time.setter
    def max_execution_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_execution_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_execution_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_execution_time = value

    @builtins.property
    def max_deviation_from_path(self):
        """Message field 'max_deviation_from_path'."""
        return self._max_deviation_from_path

    @max_deviation_from_path.setter
    def max_deviation_from_path(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_deviation_from_path' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_deviation_from_path' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_deviation_from_path = value

    @builtins.property
    def dont_prepend_current_state(self):
        """Message field 'dont_prepend_current_state'."""
        return self._dont_prepend_current_state

    @dont_prepend_current_state.setter
    def dont_prepend_current_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'dont_prepend_current_state' field must be of type 'bool'"
        self._dont_prepend_current_state = value

    @builtins.property
    def override_heading_atan2(self):
        """Message field 'override_heading_atan2'."""
        return self._override_heading_atan2

    @override_heading_atan2.setter
    def override_heading_atan2(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'override_heading_atan2' field must be of type 'bool'"
        self._override_heading_atan2 = value

    @builtins.property
    def override_constraints(self):
        """Message field 'override_constraints'."""
        return self._override_constraints

    @override_constraints.setter
    def override_constraints(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'override_constraints' field must be of type 'bool'"
        self._override_constraints = value

    @builtins.property
    def override_max_velocity_horizontal(self):
        """Message field 'override_max_velocity_horizontal'."""
        return self._override_max_velocity_horizontal

    @override_max_velocity_horizontal.setter
    def override_max_velocity_horizontal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'override_max_velocity_horizontal' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'override_max_velocity_horizontal' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._override_max_velocity_horizontal = value

    @builtins.property
    def override_max_acceleration_horizontal(self):
        """Message field 'override_max_acceleration_horizontal'."""
        return self._override_max_acceleration_horizontal

    @override_max_acceleration_horizontal.setter
    def override_max_acceleration_horizontal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'override_max_acceleration_horizontal' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'override_max_acceleration_horizontal' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._override_max_acceleration_horizontal = value

    @builtins.property
    def override_max_jerk_horizontal(self):
        """Message field 'override_max_jerk_horizontal'."""
        return self._override_max_jerk_horizontal

    @override_max_jerk_horizontal.setter
    def override_max_jerk_horizontal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'override_max_jerk_horizontal' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'override_max_jerk_horizontal' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._override_max_jerk_horizontal = value

    @builtins.property
    def override_max_velocity_vertical(self):
        """Message field 'override_max_velocity_vertical'."""
        return self._override_max_velocity_vertical

    @override_max_velocity_vertical.setter
    def override_max_velocity_vertical(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'override_max_velocity_vertical' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'override_max_velocity_vertical' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._override_max_velocity_vertical = value

    @builtins.property
    def override_max_acceleration_vertical(self):
        """Message field 'override_max_acceleration_vertical'."""
        return self._override_max_acceleration_vertical

    @override_max_acceleration_vertical.setter
    def override_max_acceleration_vertical(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'override_max_acceleration_vertical' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'override_max_acceleration_vertical' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._override_max_acceleration_vertical = value

    @builtins.property
    def override_max_jerk_vertical(self):
        """Message field 'override_max_jerk_vertical'."""
        return self._override_max_jerk_vertical

    @override_max_jerk_vertical.setter
    def override_max_jerk_vertical(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'override_max_jerk_vertical' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'override_max_jerk_vertical' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._override_max_jerk_vertical = value

    @builtins.property
    def relax_heading(self):
        """Message field 'relax_heading'."""
        return self._relax_heading

    @relax_heading.setter
    def relax_heading(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'relax_heading' field must be of type 'bool'"
        self._relax_heading = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if self._check_fields:
            from mrs_msgs.msg import Reference
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
                 all(isinstance(v, Reference) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Reference'"
        self._points = value
