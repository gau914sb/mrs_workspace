# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/TersusMessageHeader.idl
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


class Metaclass_TersusMessageHeader(type):
    """Metaclass of message 'TersusMessageHeader'."""

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
                'mrs_modules_msgs.msg.TersusMessageHeader')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tersus_message_header
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tersus_message_header
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tersus_message_header
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tersus_message_header
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tersus_message_header

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TersusMessageHeader(metaclass=Metaclass_TersusMessageHeader):
    """Message class 'TersusMessageHeader'."""

    __slots__ = [
        '_message_name',
        '_port_address',
        '_sequence',
        '_idle_time',
        '_time_status',
        '_gps_week',
        '_gps_week_seconds',
        '_receiver_status',
        '_software_version',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'message_name': 'string',
        'port_address': 'string',
        'sequence': 'uint16',
        'idle_time': 'float',
        'time_status': 'string',
        'gps_week': 'uint16',
        'gps_week_seconds': 'float',
        'receiver_status': 'uint32',
        'software_version': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.message_name = kwargs.get('message_name', str())
        self.port_address = kwargs.get('port_address', str())
        self.sequence = kwargs.get('sequence', int())
        self.idle_time = kwargs.get('idle_time', float())
        self.time_status = kwargs.get('time_status', str())
        self.gps_week = kwargs.get('gps_week', int())
        self.gps_week_seconds = kwargs.get('gps_week_seconds', float())
        self.receiver_status = kwargs.get('receiver_status', int())
        self.software_version = kwargs.get('software_version', int())

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
        if self.message_name != other.message_name:
            return False
        if self.port_address != other.port_address:
            return False
        if self.sequence != other.sequence:
            return False
        if self.idle_time != other.idle_time:
            return False
        if self.time_status != other.time_status:
            return False
        if self.gps_week != other.gps_week:
            return False
        if self.gps_week_seconds != other.gps_week_seconds:
            return False
        if self.receiver_status != other.receiver_status:
            return False
        if self.software_version != other.software_version:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def message_name(self):
        """Message field 'message_name'."""
        return self._message_name

    @message_name.setter
    def message_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message_name' field must be of type 'str'"
        self._message_name = value

    @builtins.property
    def port_address(self):
        """Message field 'port_address'."""
        return self._port_address

    @port_address.setter
    def port_address(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'port_address' field must be of type 'str'"
        self._port_address = value

    @builtins.property
    def sequence(self):
        """Message field 'sequence'."""
        return self._sequence

    @sequence.setter
    def sequence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sequence' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sequence' field must be an unsigned integer in [0, 65535]"
        self._sequence = value

    @builtins.property
    def idle_time(self):
        """Message field 'idle_time'."""
        return self._idle_time

    @idle_time.setter
    def idle_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'idle_time' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'idle_time' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._idle_time = value

    @builtins.property
    def time_status(self):
        """Message field 'time_status'."""
        return self._time_status

    @time_status.setter
    def time_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'time_status' field must be of type 'str'"
        self._time_status = value

    @builtins.property
    def gps_week(self):
        """Message field 'gps_week'."""
        return self._gps_week

    @gps_week.setter
    def gps_week(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'gps_week' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gps_week' field must be an unsigned integer in [0, 65535]"
        self._gps_week = value

    @builtins.property
    def gps_week_seconds(self):
        """Message field 'gps_week_seconds'."""
        return self._gps_week_seconds

    @gps_week_seconds.setter
    def gps_week_seconds(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'gps_week_seconds' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gps_week_seconds' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gps_week_seconds = value

    @builtins.property
    def receiver_status(self):
        """Message field 'receiver_status'."""
        return self._receiver_status

    @receiver_status.setter
    def receiver_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'receiver_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'receiver_status' field must be an unsigned integer in [0, 4294967295]"
        self._receiver_status = value

    @builtins.property
    def software_version(self):
        """Message field 'software_version'."""
        return self._software_version

    @software_version.setter
    def software_version(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'software_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'software_version' field must be an unsigned integer in [0, 65535]"
        self._software_version = value
