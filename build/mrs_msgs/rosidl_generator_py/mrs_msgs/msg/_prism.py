# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/Prism.idl
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


class Metaclass_Prism(type):
    """Metaclass of message 'Prism'."""

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
                'mrs_msgs.msg.Prism')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__prism
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__prism
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__prism
            cls._TYPE_SUPPORT = module.type_support_msg__msg__prism
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__prism

            from mrs_msgs.msg import Point2D
            if Point2D.__class__._TYPE_SUPPORT is None:
                Point2D.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Prism(metaclass=Metaclass_Prism):
    """Message class 'Prism'."""

    __slots__ = [
        '_horizontal_frame',
        '_vertical_frame',
        '_points',
        '_max_z',
        '_min_z',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'horizontal_frame': 'string',
        'vertical_frame': 'string',
        'points': 'sequence<mrs_msgs/Point2D>',
        'max_z': 'double',
        'min_z': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'Point2D')),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.horizontal_frame = kwargs.get('horizontal_frame', str())
        self.vertical_frame = kwargs.get('vertical_frame', str())
        self.points = kwargs.get('points', [])
        self.max_z = kwargs.get('max_z', float())
        self.min_z = kwargs.get('min_z', float())

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
        if self.horizontal_frame != other.horizontal_frame:
            return False
        if self.vertical_frame != other.vertical_frame:
            return False
        if self.points != other.points:
            return False
        if self.max_z != other.max_z:
            return False
        if self.min_z != other.min_z:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def horizontal_frame(self):
        """Message field 'horizontal_frame'."""
        return self._horizontal_frame

    @horizontal_frame.setter
    def horizontal_frame(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'horizontal_frame' field must be of type 'str'"
        self._horizontal_frame = value

    @builtins.property
    def vertical_frame(self):
        """Message field 'vertical_frame'."""
        return self._vertical_frame

    @vertical_frame.setter
    def vertical_frame(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'vertical_frame' field must be of type 'str'"
        self._vertical_frame = value

    @builtins.property
    def points(self):
        """Message field 'points'."""
        return self._points

    @points.setter
    def points(self, value):
        if self._check_fields:
            from mrs_msgs.msg import Point2D
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
                 all(isinstance(v, Point2D) for v in value) and
                 True), \
                "The 'points' field must be a set or sequence and each value of type 'Point2D'"
        self._points = value

    @builtins.property
    def max_z(self):
        """Message field 'max_z'."""
        return self._max_z

    @max_z.setter
    def max_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_z = value

    @builtins.property
    def min_z(self):
        """Message field 'min_z'."""
        return self._min_z

    @min_z.setter
    def min_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'min_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'min_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._min_z = value
