# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/ObstacleSectors.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'sectors'
# Member 'sector_sensors'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleSectors(type):
    """Metaclass of message 'ObstacleSectors'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'OBSTACLE_NOT_DETECTED': -1.0,
        'OBSTACLE_NO_DATA': -2.0,
        'SENSOR_NONE': -1,
        'SENSOR_DEPTH': 0,
        'SENSOR_LIDAR1D': 1,
        'SENSOR_LIDAR2D': 2,
        'SENSOR_LIDAR3D': 3,
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
                'mrs_msgs.msg.ObstacleSectors')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_sectors
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_sectors
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_sectors
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_sectors
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_sectors

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'OBSTACLE_NOT_DETECTED': cls.__constants['OBSTACLE_NOT_DETECTED'],
            'OBSTACLE_NO_DATA': cls.__constants['OBSTACLE_NO_DATA'],
            'SENSOR_NONE': cls.__constants['SENSOR_NONE'],
            'SENSOR_DEPTH': cls.__constants['SENSOR_DEPTH'],
            'SENSOR_LIDAR1D': cls.__constants['SENSOR_LIDAR1D'],
            'SENSOR_LIDAR2D': cls.__constants['SENSOR_LIDAR2D'],
            'SENSOR_LIDAR3D': cls.__constants['SENSOR_LIDAR3D'],
        }

    @property
    def OBSTACLE_NOT_DETECTED(self):
        """Message constant 'OBSTACLE_NOT_DETECTED'."""
        return Metaclass_ObstacleSectors.__constants['OBSTACLE_NOT_DETECTED']

    @property
    def OBSTACLE_NO_DATA(self):
        """Message constant 'OBSTACLE_NO_DATA'."""
        return Metaclass_ObstacleSectors.__constants['OBSTACLE_NO_DATA']

    @property
    def SENSOR_NONE(self):
        """Message constant 'SENSOR_NONE'."""
        return Metaclass_ObstacleSectors.__constants['SENSOR_NONE']

    @property
    def SENSOR_DEPTH(self):
        """Message constant 'SENSOR_DEPTH'."""
        return Metaclass_ObstacleSectors.__constants['SENSOR_DEPTH']

    @property
    def SENSOR_LIDAR1D(self):
        """Message constant 'SENSOR_LIDAR1D'."""
        return Metaclass_ObstacleSectors.__constants['SENSOR_LIDAR1D']

    @property
    def SENSOR_LIDAR2D(self):
        """Message constant 'SENSOR_LIDAR2D'."""
        return Metaclass_ObstacleSectors.__constants['SENSOR_LIDAR2D']

    @property
    def SENSOR_LIDAR3D(self):
        """Message constant 'SENSOR_LIDAR3D'."""
        return Metaclass_ObstacleSectors.__constants['SENSOR_LIDAR3D']


class ObstacleSectors(metaclass=Metaclass_ObstacleSectors):
    """
    Message class 'ObstacleSectors'.

    Constants:
      OBSTACLE_NOT_DETECTED
      OBSTACLE_NO_DATA
      SENSOR_NONE
      SENSOR_DEPTH
      SENSOR_LIDAR1D
      SENSOR_LIDAR2D
      SENSOR_LIDAR3D
    """

    __slots__ = [
        '_header',
        '_n_horizontal_sectors',
        '_sectors_vertical_fov',
        '_sectors',
        '_sector_sensors',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'n_horizontal_sectors': 'uint32',
        'sectors_vertical_fov': 'double',
        'sectors': 'sequence<double>',
        'sector_sensors': 'sequence<int8>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int8')),  # noqa: E501
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
        self.n_horizontal_sectors = kwargs.get('n_horizontal_sectors', int())
        self.sectors_vertical_fov = kwargs.get('sectors_vertical_fov', float())
        self.sectors = array.array('d', kwargs.get('sectors', []))
        self.sector_sensors = array.array('b', kwargs.get('sector_sensors', []))

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
        if self.n_horizontal_sectors != other.n_horizontal_sectors:
            return False
        if self.sectors_vertical_fov != other.sectors_vertical_fov:
            return False
        if self.sectors != other.sectors:
            return False
        if self.sector_sensors != other.sector_sensors:
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
    def n_horizontal_sectors(self):
        """Message field 'n_horizontal_sectors'."""
        return self._n_horizontal_sectors

    @n_horizontal_sectors.setter
    def n_horizontal_sectors(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'n_horizontal_sectors' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'n_horizontal_sectors' field must be an unsigned integer in [0, 4294967295]"
        self._n_horizontal_sectors = value

    @builtins.property
    def sectors_vertical_fov(self):
        """Message field 'sectors_vertical_fov'."""
        return self._sectors_vertical_fov

    @sectors_vertical_fov.setter
    def sectors_vertical_fov(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'sectors_vertical_fov' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sectors_vertical_fov' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sectors_vertical_fov = value

    @builtins.property
    def sectors(self):
        """Message field 'sectors'."""
        return self._sectors

    @sectors.setter
    def sectors(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'sectors' array.array() must have the type code of 'd'"
                self._sectors = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'sectors' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._sectors = array.array('d', value)

    @builtins.property
    def sector_sensors(self):
        """Message field 'sector_sensors'."""
        return self._sector_sensors

    @sector_sensors.setter
    def sector_sensors(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'b', \
                    "The 'sector_sensors' array.array() must have the type code of 'b'"
                self._sector_sensors = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'sector_sensors' field must be a set or sequence and each value of type 'int' and each integer in [-128, 127]"
        self._sector_sensors = array.array('b', value)
