# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/PclToolsDiagnostics.idl
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


class Metaclass_PclToolsDiagnostics(type):
    """Metaclass of message 'PclToolsDiagnostics'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SENSOR_TYPE_NONE': -1,
        'SENSOR_TYPE_LIDAR_3D': 0,
        'SENSOR_TYPE_DEPTH_CAMERA': 1,
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
                'mrs_modules_msgs.msg.PclToolsDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pcl_tools_diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pcl_tools_diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pcl_tools_diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pcl_tools_diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pcl_tools_diagnostics

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SENSOR_TYPE_NONE': cls.__constants['SENSOR_TYPE_NONE'],
            'SENSOR_TYPE_LIDAR_3D': cls.__constants['SENSOR_TYPE_LIDAR_3D'],
            'SENSOR_TYPE_DEPTH_CAMERA': cls.__constants['SENSOR_TYPE_DEPTH_CAMERA'],
        }

    @property
    def SENSOR_TYPE_NONE(self):
        """Message constant 'SENSOR_TYPE_NONE'."""
        return Metaclass_PclToolsDiagnostics.__constants['SENSOR_TYPE_NONE']

    @property
    def SENSOR_TYPE_LIDAR_3D(self):
        """Message constant 'SENSOR_TYPE_LIDAR_3D'."""
        return Metaclass_PclToolsDiagnostics.__constants['SENSOR_TYPE_LIDAR_3D']

    @property
    def SENSOR_TYPE_DEPTH_CAMERA(self):
        """Message constant 'SENSOR_TYPE_DEPTH_CAMERA'."""
        return Metaclass_PclToolsDiagnostics.__constants['SENSOR_TYPE_DEPTH_CAMERA']


class PclToolsDiagnostics(metaclass=Metaclass_PclToolsDiagnostics):
    """
    Message class 'PclToolsDiagnostics'.

    Constants:
      SENSOR_TYPE_NONE
      SENSOR_TYPE_LIDAR_3D
      SENSOR_TYPE_DEPTH_CAMERA
    """

    __slots__ = [
        '_stamp',
        '_sensor_name',
        '_sensor_type',
        '_frequency',
        '_vfov',
        '_rows_before',
        '_cols_before',
        '_rows_after',
        '_cols_after',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'sensor_name': 'string',
        'sensor_type': 'uint8',
        'frequency': 'float',
        'vfov': 'float',
        'rows_before': 'uint16',
        'cols_before': 'uint16',
        'rows_after': 'uint16',
        'cols_after': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.sensor_name = kwargs.get('sensor_name', str())
        self.sensor_type = kwargs.get('sensor_type', int())
        self.frequency = kwargs.get('frequency', float())
        self.vfov = kwargs.get('vfov', float())
        self.rows_before = kwargs.get('rows_before', int())
        self.cols_before = kwargs.get('cols_before', int())
        self.rows_after = kwargs.get('rows_after', int())
        self.cols_after = kwargs.get('cols_after', int())

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
        if self.sensor_name != other.sensor_name:
            return False
        if self.sensor_type != other.sensor_type:
            return False
        if self.frequency != other.frequency:
            return False
        if self.vfov != other.vfov:
            return False
        if self.rows_before != other.rows_before:
            return False
        if self.cols_before != other.cols_before:
            return False
        if self.rows_after != other.rows_after:
            return False
        if self.cols_after != other.cols_after:
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
    def sensor_name(self):
        """Message field 'sensor_name'."""
        return self._sensor_name

    @sensor_name.setter
    def sensor_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'sensor_name' field must be of type 'str'"
        self._sensor_name = value

    @builtins.property
    def sensor_type(self):
        """Message field 'sensor_type'."""
        return self._sensor_type

    @sensor_type.setter
    def sensor_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'sensor_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_type' field must be an unsigned integer in [0, 255]"
        self._sensor_type = value

    @builtins.property
    def frequency(self):
        """Message field 'frequency'."""
        return self._frequency

    @frequency.setter
    def frequency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'frequency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'frequency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._frequency = value

    @builtins.property
    def vfov(self):
        """Message field 'vfov'."""
        return self._vfov

    @vfov.setter
    def vfov(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vfov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vfov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vfov = value

    @builtins.property
    def rows_before(self):
        """Message field 'rows_before'."""
        return self._rows_before

    @rows_before.setter
    def rows_before(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rows_before' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rows_before' field must be an unsigned integer in [0, 65535]"
        self._rows_before = value

    @builtins.property
    def cols_before(self):
        """Message field 'cols_before'."""
        return self._cols_before

    @cols_before.setter
    def cols_before(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cols_before' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cols_before' field must be an unsigned integer in [0, 65535]"
        self._cols_before = value

    @builtins.property
    def rows_after(self):
        """Message field 'rows_after'."""
        return self._rows_after

    @rows_after.setter
    def rows_after(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'rows_after' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rows_after' field must be an unsigned integer in [0, 65535]"
        self._rows_after = value

    @builtins.property
    def cols_after(self):
        """Message field 'cols_after'."""
        return self._cols_after

    @cols_after.setter
    def cols_after(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'cols_after' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'cols_after' field must be an unsigned integer in [0, 65535]"
        self._cols_after = value
