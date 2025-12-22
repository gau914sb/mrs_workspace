# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/GPSFix.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position_covariance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GPSFix(type):
    """Metaclass of message 'GPSFix'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COVARIANCE_TYPE_UNKNOWN': 0,
        'COVARIANCE_TYPE_APPROXIMATED': 1,
        'COVARIANCE_TYPE_DIAGONAL_KNOWN': 2,
        'COVARIANCE_TYPE_KNOWN': 3,
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
                'mrs_modules_msgs.msg.GPSFix')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gps_fix
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gps_fix
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gps_fix
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gps_fix
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gps_fix

            from mrs_modules_msgs.msg import GpsStatus
            if GpsStatus.__class__._TYPE_SUPPORT is None:
                GpsStatus.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COVARIANCE_TYPE_UNKNOWN': cls.__constants['COVARIANCE_TYPE_UNKNOWN'],
            'COVARIANCE_TYPE_APPROXIMATED': cls.__constants['COVARIANCE_TYPE_APPROXIMATED'],
            'COVARIANCE_TYPE_DIAGONAL_KNOWN': cls.__constants['COVARIANCE_TYPE_DIAGONAL_KNOWN'],
            'COVARIANCE_TYPE_KNOWN': cls.__constants['COVARIANCE_TYPE_KNOWN'],
        }

    @property
    def COVARIANCE_TYPE_UNKNOWN(self):
        """Message constant 'COVARIANCE_TYPE_UNKNOWN'."""
        return Metaclass_GPSFix.__constants['COVARIANCE_TYPE_UNKNOWN']

    @property
    def COVARIANCE_TYPE_APPROXIMATED(self):
        """Message constant 'COVARIANCE_TYPE_APPROXIMATED'."""
        return Metaclass_GPSFix.__constants['COVARIANCE_TYPE_APPROXIMATED']

    @property
    def COVARIANCE_TYPE_DIAGONAL_KNOWN(self):
        """Message constant 'COVARIANCE_TYPE_DIAGONAL_KNOWN'."""
        return Metaclass_GPSFix.__constants['COVARIANCE_TYPE_DIAGONAL_KNOWN']

    @property
    def COVARIANCE_TYPE_KNOWN(self):
        """Message constant 'COVARIANCE_TYPE_KNOWN'."""
        return Metaclass_GPSFix.__constants['COVARIANCE_TYPE_KNOWN']


class GPSFix(metaclass=Metaclass_GPSFix):
    """
    Message class 'GPSFix'.

    Constants:
      COVARIANCE_TYPE_UNKNOWN
      COVARIANCE_TYPE_APPROXIMATED
      COVARIANCE_TYPE_DIAGONAL_KNOWN
      COVARIANCE_TYPE_KNOWN
    """

    __slots__ = [
        '_header',
        '_num_satellites_used_in_solution',
        '_num_satellites_tracked',
        '_status',
        '_latitude',
        '_longitude',
        '_altitude',
        '_track',
        '_speed',
        '_time',
        '_hdop',
        '_position_covariance',
        '_position_covariance_type',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'num_satellites_used_in_solution': 'uint8',
        'num_satellites_tracked': 'uint8',
        'status': 'mrs_modules_msgs/GpsStatus',
        'latitude': 'double',
        'longitude': 'float',
        'altitude': 'double',
        'track': 'double',
        'speed': 'double',
        'time': 'double',
        'hdop': 'float',
        'position_covariance': 'double[9]',
        'position_covariance_type': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_modules_msgs', 'msg'], 'GpsStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 9),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.num_satellites_used_in_solution = kwargs.get('num_satellites_used_in_solution', int())
        self.num_satellites_tracked = kwargs.get('num_satellites_tracked', int())
        from mrs_modules_msgs.msg import GpsStatus
        self.status = kwargs.get('status', GpsStatus())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.altitude = kwargs.get('altitude', float())
        self.track = kwargs.get('track', float())
        self.speed = kwargs.get('speed', float())
        self.time = kwargs.get('time', float())
        self.hdop = kwargs.get('hdop', float())
        if 'position_covariance' not in kwargs:
            self.position_covariance = numpy.zeros(9, dtype=numpy.float64)
        else:
            self.position_covariance = kwargs.get('position_covariance')
        self.position_covariance_type = kwargs.get('position_covariance_type', int())

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
        if self.num_satellites_used_in_solution != other.num_satellites_used_in_solution:
            return False
        if self.num_satellites_tracked != other.num_satellites_tracked:
            return False
        if self.status != other.status:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.altitude != other.altitude:
            return False
        if self.track != other.track:
            return False
        if self.speed != other.speed:
            return False
        if self.time != other.time:
            return False
        if self.hdop != other.hdop:
            return False
        if any(self.position_covariance != other.position_covariance):
            return False
        if self.position_covariance_type != other.position_covariance_type:
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
    def num_satellites_used_in_solution(self):
        """Message field 'num_satellites_used_in_solution'."""
        return self._num_satellites_used_in_solution

    @num_satellites_used_in_solution.setter
    def num_satellites_used_in_solution(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_satellites_used_in_solution' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_satellites_used_in_solution' field must be an unsigned integer in [0, 255]"
        self._num_satellites_used_in_solution = value

    @builtins.property
    def num_satellites_tracked(self):
        """Message field 'num_satellites_tracked'."""
        return self._num_satellites_tracked

    @num_satellites_tracked.setter
    def num_satellites_tracked(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_satellites_tracked' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_satellites_tracked' field must be an unsigned integer in [0, 255]"
        self._num_satellites_tracked = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if self._check_fields:
            from mrs_modules_msgs.msg import GpsStatus
            assert \
                isinstance(value, GpsStatus), \
                "The 'status' field must be a sub message of type 'GpsStatus'"
        self._status = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longitude = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude = value

    @builtins.property
    def track(self):
        """Message field 'track'."""
        return self._track

    @track.setter
    def track(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'track' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'track' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._track = value

    @builtins.property
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed = value

    @builtins.property
    def time(self):
        """Message field 'time'."""
        return self._time

    @time.setter
    def time(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time = value

    @builtins.property
    def hdop(self):
        """Message field 'hdop'."""
        return self._hdop

    @hdop.setter
    def hdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hdop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hdop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hdop = value

    @builtins.property
    def position_covariance(self):
        """Message field 'position_covariance'."""
        return self._position_covariance

    @position_covariance.setter
    def position_covariance(self, value):
        if self._check_fields:
            if isinstance(value, numpy.ndarray):
                assert value.dtype == numpy.float64, \
                    "The 'position_covariance' numpy.ndarray() must have the dtype of 'numpy.float64'"
                assert value.size == 9, \
                    "The 'position_covariance' numpy.ndarray() must have a size of 9"
                self._position_covariance = value
                return
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
                 len(value) == 9 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'position_covariance' field must be a set or sequence with length 9 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._position_covariance = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def position_covariance_type(self):
        """Message field 'position_covariance_type'."""
        return self._position_covariance_type

    @position_covariance_type.setter
    def position_covariance_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'position_covariance_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'position_covariance_type' field must be an unsigned integer in [0, 255]"
        self._position_covariance_type = value
