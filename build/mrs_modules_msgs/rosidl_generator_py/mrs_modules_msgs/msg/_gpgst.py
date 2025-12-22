# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/Gpgst.idl
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


class Metaclass_Gpgst(type):
    """Metaclass of message 'Gpgst'."""

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
                'mrs_modules_msgs.msg.Gpgst')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpgst
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpgst
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpgst
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpgst
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpgst

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


class Gpgst(metaclass=Metaclass_Gpgst):
    """Message class 'Gpgst'."""

    __slots__ = [
        '_header',
        '_message_id',
        '_utc',
        '_rms',
        '_smjr_std',
        '_smnr_std',
        '_orient',
        '_lat_std',
        '_lon_std',
        '_alt_std',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_id': 'string',
        'utc': 'double',
        'rms': 'double',
        'smjr_std': 'double',
        'smnr_std': 'double',
        'orient': 'double',
        'lat_std': 'double',
        'lon_std': 'double',
        'alt_std': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.message_id = kwargs.get('message_id', str())
        self.utc = kwargs.get('utc', float())
        self.rms = kwargs.get('rms', float())
        self.smjr_std = kwargs.get('smjr_std', float())
        self.smnr_std = kwargs.get('smnr_std', float())
        self.orient = kwargs.get('orient', float())
        self.lat_std = kwargs.get('lat_std', float())
        self.lon_std = kwargs.get('lon_std', float())
        self.alt_std = kwargs.get('alt_std', float())

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
        if self.message_id != other.message_id:
            return False
        if self.utc != other.utc:
            return False
        if self.rms != other.rms:
            return False
        if self.smjr_std != other.smjr_std:
            return False
        if self.smnr_std != other.smnr_std:
            return False
        if self.orient != other.orient:
            return False
        if self.lat_std != other.lat_std:
            return False
        if self.lon_std != other.lon_std:
            return False
        if self.alt_std != other.alt_std:
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
    def message_id(self):
        """Message field 'message_id'."""
        return self._message_id

    @message_id.setter
    def message_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message_id' field must be of type 'str'"
        self._message_id = value

    @builtins.property
    def utc(self):
        """Message field 'utc'."""
        return self._utc

    @utc.setter
    def utc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'utc' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'utc' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._utc = value

    @builtins.property
    def rms(self):
        """Message field 'rms'."""
        return self._rms

    @rms.setter
    def rms(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'rms' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'rms' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._rms = value

    @builtins.property
    def smjr_std(self):
        """Message field 'smjr_std'."""
        return self._smjr_std

    @smjr_std.setter
    def smjr_std(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'smjr_std' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'smjr_std' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._smjr_std = value

    @builtins.property
    def smnr_std(self):
        """Message field 'smnr_std'."""
        return self._smnr_std

    @smnr_std.setter
    def smnr_std(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'smnr_std' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'smnr_std' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._smnr_std = value

    @builtins.property
    def orient(self):
        """Message field 'orient'."""
        return self._orient

    @orient.setter
    def orient(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'orient' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'orient' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._orient = value

    @builtins.property
    def lat_std(self):
        """Message field 'lat_std'."""
        return self._lat_std

    @lat_std.setter
    def lat_std(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'lat_std' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat_std' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat_std = value

    @builtins.property
    def lon_std(self):
        """Message field 'lon_std'."""
        return self._lon_std

    @lon_std.setter
    def lon_std(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'lon_std' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon_std' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon_std = value

    @builtins.property
    def alt_std(self):
        """Message field 'alt_std'."""
        return self._alt_std

    @alt_std.setter
    def alt_std(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'alt_std' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'alt_std' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._alt_std = value
