# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/UavStatusShort.idl
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


class Metaclass_UavStatusShort(type):
    """Metaclass of message 'UavStatusShort'."""

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
                'mrs_msgs.msg.UavStatusShort')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uav_status_short
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uav_status_short
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uav_status_short
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uav_status_short
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uav_status_short

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UavStatusShort(metaclass=Metaclass_UavStatusShort):
    """Message class 'UavStatusShort'."""

    __slots__ = [
        '_odom_hz',
        '_odom_color',
        '_odom_x',
        '_odom_y',
        '_odom_z',
        '_odom_hdg',
        '_cmd_x',
        '_cmd_y',
        '_cmd_z',
        '_cmd_hdg',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'odom_hz': 'float',
        'odom_color': 'int16',
        'odom_x': 'float',
        'odom_y': 'float',
        'odom_z': 'float',
        'odom_hdg': 'float',
        'cmd_x': 'float',
        'cmd_y': 'float',
        'cmd_z': 'float',
        'cmd_hdg': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.odom_hz = kwargs.get('odom_hz', float())
        self.odom_color = kwargs.get('odom_color', int())
        self.odom_x = kwargs.get('odom_x', float())
        self.odom_y = kwargs.get('odom_y', float())
        self.odom_z = kwargs.get('odom_z', float())
        self.odom_hdg = kwargs.get('odom_hdg', float())
        self.cmd_x = kwargs.get('cmd_x', float())
        self.cmd_y = kwargs.get('cmd_y', float())
        self.cmd_z = kwargs.get('cmd_z', float())
        self.cmd_hdg = kwargs.get('cmd_hdg', float())

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
        if self.odom_hz != other.odom_hz:
            return False
        if self.odom_color != other.odom_color:
            return False
        if self.odom_x != other.odom_x:
            return False
        if self.odom_y != other.odom_y:
            return False
        if self.odom_z != other.odom_z:
            return False
        if self.odom_hdg != other.odom_hdg:
            return False
        if self.cmd_x != other.cmd_x:
            return False
        if self.cmd_y != other.cmd_y:
            return False
        if self.cmd_z != other.cmd_z:
            return False
        if self.cmd_hdg != other.cmd_hdg:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def odom_hz(self):
        """Message field 'odom_hz'."""
        return self._odom_hz

    @odom_hz.setter
    def odom_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_hz = value

    @builtins.property
    def odom_color(self):
        """Message field 'odom_color'."""
        return self._odom_color

    @odom_color.setter
    def odom_color(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'odom_color' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'odom_color' field must be an integer in [-32768, 32767]"
        self._odom_color = value

    @builtins.property
    def odom_x(self):
        """Message field 'odom_x'."""
        return self._odom_x

    @odom_x.setter
    def odom_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_x = value

    @builtins.property
    def odom_y(self):
        """Message field 'odom_y'."""
        return self._odom_y

    @odom_y.setter
    def odom_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_y = value

    @builtins.property
    def odom_z(self):
        """Message field 'odom_z'."""
        return self._odom_z

    @odom_z.setter
    def odom_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_z = value

    @builtins.property
    def odom_hdg(self):
        """Message field 'odom_hdg'."""
        return self._odom_hdg

    @odom_hdg.setter
    def odom_hdg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_hdg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_hdg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_hdg = value

    @builtins.property
    def cmd_x(self):
        """Message field 'cmd_x'."""
        return self._cmd_x

    @cmd_x.setter
    def cmd_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cmd_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cmd_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cmd_x = value

    @builtins.property
    def cmd_y(self):
        """Message field 'cmd_y'."""
        return self._cmd_y

    @cmd_y.setter
    def cmd_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cmd_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cmd_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cmd_y = value

    @builtins.property
    def cmd_z(self):
        """Message field 'cmd_z'."""
        return self._cmd_z

    @cmd_z.setter
    def cmd_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cmd_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cmd_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cmd_z = value

    @builtins.property
    def cmd_hdg(self):
        """Message field 'cmd_hdg'."""
        return self._cmd_hdg

    @cmd_hdg.setter
    def cmd_hdg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cmd_hdg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cmd_hdg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cmd_hdg = value
