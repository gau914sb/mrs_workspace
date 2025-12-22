# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/ProfilerUpdate.idl
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


class Metaclass_ProfilerUpdate(type):
    """Metaclass of message 'ProfilerUpdate'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'START': 'start',
        'END': 'end',
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
                'mrs_msgs.msg.ProfilerUpdate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__profiler_update
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__profiler_update
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__profiler_update
            cls._TYPE_SUPPORT = module.type_support_msg__msg__profiler_update
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__profiler_update

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'START': cls.__constants['START'],
            'END': cls.__constants['END'],
        }

    @property
    def START(self):
        """Message constant 'START'."""
        return Metaclass_ProfilerUpdate.__constants['START']

    @property
    def END(self):
        """Message constant 'END'."""
        return Metaclass_ProfilerUpdate.__constants['END']


class ProfilerUpdate(metaclass=Metaclass_ProfilerUpdate):
    """
    Message class 'ProfilerUpdate'.

    Constants:
      START
      END
    """

    __slots__ = [
        '_stamp',
        '_node_name',
        '_routine_name',
        '_iteration',
        '_duration',
        '_event',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'node_name': 'string',
        'routine_name': 'string',
        'iteration': 'int64',
        'duration': 'double',
        'event': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.node_name = kwargs.get('node_name', str())
        self.routine_name = kwargs.get('routine_name', str())
        self.iteration = kwargs.get('iteration', int())
        self.duration = kwargs.get('duration', float())
        self.event = kwargs.get('event', str())

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
        if self.node_name != other.node_name:
            return False
        if self.routine_name != other.routine_name:
            return False
        if self.iteration != other.iteration:
            return False
        if self.duration != other.duration:
            return False
        if self.event != other.event:
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
    def node_name(self):
        """Message field 'node_name'."""
        return self._node_name

    @node_name.setter
    def node_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'node_name' field must be of type 'str'"
        self._node_name = value

    @builtins.property
    def routine_name(self):
        """Message field 'routine_name'."""
        return self._routine_name

    @routine_name.setter
    def routine_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'routine_name' field must be of type 'str'"
        self._routine_name = value

    @builtins.property
    def iteration(self):
        """Message field 'iteration'."""
        return self._iteration

    @iteration.setter
    def iteration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'iteration' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'iteration' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._iteration = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'duration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'duration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._duration = value

    @builtins.property
    def event(self):
        """Message field 'event'."""
        return self._event

    @event.setter
    def event(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'event' field must be of type 'str'"
        self._event = value
