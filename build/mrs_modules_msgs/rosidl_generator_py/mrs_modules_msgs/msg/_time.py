# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/Time.idl
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


class Metaclass_Time(type):
    """Metaclass of message 'Time'."""

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
            module = import_type_support('mrs_modules_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mrs_modules_msgs.msg.Time')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__time
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__time
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__time
            cls._TYPE_SUPPORT = module.type_support_msg__msg__time
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__time

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


class Time(metaclass=Metaclass_Time):
    """Message class 'Time'."""

    __slots__ = [
        '_header',
        '_clock_status',
        '_offset',
        '_offset_std',
        '_utc_offset',
        '_utc_year',
        '_utc_month',
        '_utc_day',
        '_utc_hour',
        '_utc_minute',
        '_utc_millisecond',
        '_utc_status',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'clock_status': 'string',
        'offset': 'double',
        'offset_std': 'double',
        'utc_offset': 'double',
        'utc_year': 'uint32',
        'utc_month': 'uint8',
        'utc_day': 'uint8',
        'utc_hour': 'uint8',
        'utc_minute': 'uint8',
        'utc_millisecond': 'uint32',
        'utc_status': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.clock_status = kwargs.get('clock_status', str())
        self.offset = kwargs.get('offset', float())
        self.offset_std = kwargs.get('offset_std', float())
        self.utc_offset = kwargs.get('utc_offset', float())
        self.utc_year = kwargs.get('utc_year', int())
        self.utc_month = kwargs.get('utc_month', int())
        self.utc_day = kwargs.get('utc_day', int())
        self.utc_hour = kwargs.get('utc_hour', int())
        self.utc_minute = kwargs.get('utc_minute', int())
        self.utc_millisecond = kwargs.get('utc_millisecond', int())
        self.utc_status = kwargs.get('utc_status', str())

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
        if self.clock_status != other.clock_status:
            return False
        if self.offset != other.offset:
            return False
        if self.offset_std != other.offset_std:
            return False
        if self.utc_offset != other.utc_offset:
            return False
        if self.utc_year != other.utc_year:
            return False
        if self.utc_month != other.utc_month:
            return False
        if self.utc_day != other.utc_day:
            return False
        if self.utc_hour != other.utc_hour:
            return False
        if self.utc_minute != other.utc_minute:
            return False
        if self.utc_millisecond != other.utc_millisecond:
            return False
        if self.utc_status != other.utc_status:
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
    def clock_status(self):
        """Message field 'clock_status'."""
        return self._clock_status

    @clock_status.setter
    def clock_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'clock_status' field must be of type 'str'"
        self._clock_status = value

    @builtins.property
    def offset(self):
        """Message field 'offset'."""
        return self._offset

    @offset.setter
    def offset(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._offset = value

    @builtins.property
    def offset_std(self):
        """Message field 'offset_std'."""
        return self._offset_std

    @offset_std.setter
    def offset_std(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'offset_std' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'offset_std' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._offset_std = value

    @builtins.property
    def utc_offset(self):
        """Message field 'utc_offset'."""
        return self._utc_offset

    @utc_offset.setter
    def utc_offset(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'utc_offset' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'utc_offset' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._utc_offset = value

    @builtins.property
    def utc_year(self):
        """Message field 'utc_year'."""
        return self._utc_year

    @utc_year.setter
    def utc_year(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'utc_year' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'utc_year' field must be an unsigned integer in [0, 4294967295]"
        self._utc_year = value

    @builtins.property
    def utc_month(self):
        """Message field 'utc_month'."""
        return self._utc_month

    @utc_month.setter
    def utc_month(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'utc_month' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'utc_month' field must be an unsigned integer in [0, 255]"
        self._utc_month = value

    @builtins.property
    def utc_day(self):
        """Message field 'utc_day'."""
        return self._utc_day

    @utc_day.setter
    def utc_day(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'utc_day' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'utc_day' field must be an unsigned integer in [0, 255]"
        self._utc_day = value

    @builtins.property
    def utc_hour(self):
        """Message field 'utc_hour'."""
        return self._utc_hour

    @utc_hour.setter
    def utc_hour(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'utc_hour' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'utc_hour' field must be an unsigned integer in [0, 255]"
        self._utc_hour = value

    @builtins.property
    def utc_minute(self):
        """Message field 'utc_minute'."""
        return self._utc_minute

    @utc_minute.setter
    def utc_minute(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'utc_minute' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'utc_minute' field must be an unsigned integer in [0, 255]"
        self._utc_minute = value

    @builtins.property
    def utc_millisecond(self):
        """Message field 'utc_millisecond'."""
        return self._utc_millisecond

    @utc_millisecond.setter
    def utc_millisecond(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'utc_millisecond' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'utc_millisecond' field must be an unsigned integer in [0, 4294967295]"
        self._utc_millisecond = value

    @builtins.property
    def utc_status(self):
        """Message field 'utc_status'."""
        return self._utc_status

    @utc_status.setter
    def utc_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'utc_status' field must be of type 'str'"
        self._utc_status = value
