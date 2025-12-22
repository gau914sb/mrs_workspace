# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/UavManagerDiagnostics.idl
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


class Metaclass_UavManagerDiagnostics(type):
    """Metaclass of message 'UavManagerDiagnostics'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_INVALID': 0,
        'STATE_IDLING': 1,
        'STATE_TAKING_OFF': 2,
        'STATE_FLYING': 3,
        'STATE_LANDING': 4,
        'STATE_EMERGENCY': 5,
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
                'mrs_msgs.msg.UavManagerDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uav_manager_diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uav_manager_diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uav_manager_diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uav_manager_diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uav_manager_diagnostics

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_INVALID': cls.__constants['STATE_INVALID'],
            'STATE_IDLING': cls.__constants['STATE_IDLING'],
            'STATE_TAKING_OFF': cls.__constants['STATE_TAKING_OFF'],
            'STATE_FLYING': cls.__constants['STATE_FLYING'],
            'STATE_LANDING': cls.__constants['STATE_LANDING'],
            'STATE_EMERGENCY': cls.__constants['STATE_EMERGENCY'],
        }

    @property
    def STATE_INVALID(self):
        """Message constant 'STATE_INVALID'."""
        return Metaclass_UavManagerDiagnostics.__constants['STATE_INVALID']

    @property
    def STATE_IDLING(self):
        """Message constant 'STATE_IDLING'."""
        return Metaclass_UavManagerDiagnostics.__constants['STATE_IDLING']

    @property
    def STATE_TAKING_OFF(self):
        """Message constant 'STATE_TAKING_OFF'."""
        return Metaclass_UavManagerDiagnostics.__constants['STATE_TAKING_OFF']

    @property
    def STATE_FLYING(self):
        """Message constant 'STATE_FLYING'."""
        return Metaclass_UavManagerDiagnostics.__constants['STATE_FLYING']

    @property
    def STATE_LANDING(self):
        """Message constant 'STATE_LANDING'."""
        return Metaclass_UavManagerDiagnostics.__constants['STATE_LANDING']

    @property
    def STATE_EMERGENCY(self):
        """Message constant 'STATE_EMERGENCY'."""
        return Metaclass_UavManagerDiagnostics.__constants['STATE_EMERGENCY']


class UavManagerDiagnostics(metaclass=Metaclass_UavManagerDiagnostics):
    """
    Message class 'UavManagerDiagnostics'.

    Constants:
      STATE_INVALID
      STATE_IDLING
      STATE_TAKING_OFF
      STATE_FLYING
      STATE_LANDING
      STATE_EMERGENCY
    """

    __slots__ = [
        '_stamp',
        '_uav_name',
        '_home_latitude',
        '_home_longitude',
        '_cur_latitude',
        '_cur_longitude',
        '_flight_time',
        '_state',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'uav_name': 'string',
        'home_latitude': 'double',
        'home_longitude': 'double',
        'cur_latitude': 'double',
        'cur_longitude': 'double',
        'flight_time': 'double',
        'state': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.home_latitude = kwargs.get('home_latitude', float())
        self.home_longitude = kwargs.get('home_longitude', float())
        self.cur_latitude = kwargs.get('cur_latitude', float())
        self.cur_longitude = kwargs.get('cur_longitude', float())
        self.flight_time = kwargs.get('flight_time', float())
        self.state = kwargs.get('state', int())

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
        if self.home_latitude != other.home_latitude:
            return False
        if self.home_longitude != other.home_longitude:
            return False
        if self.cur_latitude != other.cur_latitude:
            return False
        if self.cur_longitude != other.cur_longitude:
            return False
        if self.flight_time != other.flight_time:
            return False
        if self.state != other.state:
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
    def home_latitude(self):
        """Message field 'home_latitude'."""
        return self._home_latitude

    @home_latitude.setter
    def home_latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'home_latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'home_latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._home_latitude = value

    @builtins.property
    def home_longitude(self):
        """Message field 'home_longitude'."""
        return self._home_longitude

    @home_longitude.setter
    def home_longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'home_longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'home_longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._home_longitude = value

    @builtins.property
    def cur_latitude(self):
        """Message field 'cur_latitude'."""
        return self._cur_latitude

    @cur_latitude.setter
    def cur_latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cur_latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cur_latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cur_latitude = value

    @builtins.property
    def cur_longitude(self):
        """Message field 'cur_longitude'."""
        return self._cur_longitude

    @cur_longitude.setter
    def cur_longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cur_longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cur_longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cur_longitude = value

    @builtins.property
    def flight_time(self):
        """Message field 'flight_time'."""
        return self._flight_time

    @flight_time.setter
    def flight_time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'flight_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'flight_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._flight_time = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value
