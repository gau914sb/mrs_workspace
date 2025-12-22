# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/Histogram.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'bins'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Histogram(type):
    """Metaclass of message 'Histogram'."""

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
                'mrs_msgs.msg.Histogram')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__histogram
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__histogram
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__histogram
            cls._TYPE_SUPPORT = module.type_support_msg__msg__histogram
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__histogram

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


class Histogram(metaclass=Metaclass_Histogram):
    """Message class 'Histogram'."""

    __slots__ = [
        '_header',
        '_unit',
        '_bin_size',
        '_bin_min',
        '_bin_max',
        '_bin_mark',
        '_bins',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'unit': 'string',
        'bin_size': 'double',
        'bin_min': 'double',
        'bin_max': 'double',
        'bin_mark': 'uint32',
        'bins': 'sequence<float>',
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
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('float')),  # noqa: E501
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
        self.unit = kwargs.get('unit', str())
        self.bin_size = kwargs.get('bin_size', float())
        self.bin_min = kwargs.get('bin_min', float())
        self.bin_max = kwargs.get('bin_max', float())
        self.bin_mark = kwargs.get('bin_mark', int())
        self.bins = array.array('f', kwargs.get('bins', []))

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
        if self.unit != other.unit:
            return False
        if self.bin_size != other.bin_size:
            return False
        if self.bin_min != other.bin_min:
            return False
        if self.bin_max != other.bin_max:
            return False
        if self.bin_mark != other.bin_mark:
            return False
        if self.bins != other.bins:
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
    def unit(self):
        """Message field 'unit'."""
        return self._unit

    @unit.setter
    def unit(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'unit' field must be of type 'str'"
        self._unit = value

    @builtins.property
    def bin_size(self):
        """Message field 'bin_size'."""
        return self._bin_size

    @bin_size.setter
    def bin_size(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bin_size' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bin_size' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bin_size = value

    @builtins.property
    def bin_min(self):
        """Message field 'bin_min'."""
        return self._bin_min

    @bin_min.setter
    def bin_min(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bin_min' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bin_min' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bin_min = value

    @builtins.property
    def bin_max(self):
        """Message field 'bin_max'."""
        return self._bin_max

    @bin_max.setter
    def bin_max(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'bin_max' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'bin_max' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._bin_max = value

    @builtins.property
    def bin_mark(self):
        """Message field 'bin_mark'."""
        return self._bin_mark

    @bin_mark.setter
    def bin_mark(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'bin_mark' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'bin_mark' field must be an unsigned integer in [0, 4294967295]"
        self._bin_mark = value

    @builtins.property
    def bins(self):
        """Message field 'bins'."""
        return self._bins

    @bins.setter
    def bins(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'f', \
                    "The 'bins' array.array() must have the type code of 'f'"
                self._bins = value
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
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'bins' field must be a set or sequence and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._bins = array.array('f', value)
