# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/Bestvel.idl
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


class Metaclass_Bestvel(type):
    """Metaclass of message 'Bestvel'."""

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
                'mrs_modules_msgs.msg.Bestvel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bestvel
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bestvel
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bestvel
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bestvel
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bestvel

            from mrs_modules_msgs.msg import TersusMessageHeader
            if TersusMessageHeader.__class__._TYPE_SUPPORT is None:
                TersusMessageHeader.__class__.__import_type_support__()

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


class Bestvel(metaclass=Metaclass_Bestvel):
    """Message class 'Bestvel'."""

    __slots__ = [
        '_header',
        '_tersus_msg_header',
        '_solution_status',
        '_velocity_type',
        '_latency',
        '_age',
        '_horizontal_speed',
        '_track_ground',
        '_vertical_speed',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tersus_msg_header': 'mrs_modules_msgs/TersusMessageHeader',
        'solution_status': 'string',
        'velocity_type': 'string',
        'latency': 'float',
        'age': 'float',
        'horizontal_speed': 'double',
        'track_ground': 'double',
        'vertical_speed': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_modules_msgs', 'msg'], 'TersusMessageHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        from mrs_modules_msgs.msg import TersusMessageHeader
        self.tersus_msg_header = kwargs.get('tersus_msg_header', TersusMessageHeader())
        self.solution_status = kwargs.get('solution_status', str())
        self.velocity_type = kwargs.get('velocity_type', str())
        self.latency = kwargs.get('latency', float())
        self.age = kwargs.get('age', float())
        self.horizontal_speed = kwargs.get('horizontal_speed', float())
        self.track_ground = kwargs.get('track_ground', float())
        self.vertical_speed = kwargs.get('vertical_speed', float())

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
        if self.tersus_msg_header != other.tersus_msg_header:
            return False
        if self.solution_status != other.solution_status:
            return False
        if self.velocity_type != other.velocity_type:
            return False
        if self.latency != other.latency:
            return False
        if self.age != other.age:
            return False
        if self.horizontal_speed != other.horizontal_speed:
            return False
        if self.track_ground != other.track_ground:
            return False
        if self.vertical_speed != other.vertical_speed:
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
    def tersus_msg_header(self):
        """Message field 'tersus_msg_header'."""
        return self._tersus_msg_header

    @tersus_msg_header.setter
    def tersus_msg_header(self, value):
        if self._check_fields:
            from mrs_modules_msgs.msg import TersusMessageHeader
            assert \
                isinstance(value, TersusMessageHeader), \
                "The 'tersus_msg_header' field must be a sub message of type 'TersusMessageHeader'"
        self._tersus_msg_header = value

    @builtins.property
    def solution_status(self):
        """Message field 'solution_status'."""
        return self._solution_status

    @solution_status.setter
    def solution_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'solution_status' field must be of type 'str'"
        self._solution_status = value

    @builtins.property
    def velocity_type(self):
        """Message field 'velocity_type'."""
        return self._velocity_type

    @velocity_type.setter
    def velocity_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'velocity_type' field must be of type 'str'"
        self._velocity_type = value

    @builtins.property
    def latency(self):
        """Message field 'latency'."""
        return self._latency

    @latency.setter
    def latency(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latency' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latency' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latency = value

    @builtins.property
    def age(self):
        """Message field 'age'."""
        return self._age

    @age.setter
    def age(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'age' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'age' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._age = value

    @builtins.property
    def horizontal_speed(self):
        """Message field 'horizontal_speed'."""
        return self._horizontal_speed

    @horizontal_speed.setter
    def horizontal_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'horizontal_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'horizontal_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._horizontal_speed = value

    @builtins.property
    def track_ground(self):
        """Message field 'track_ground'."""
        return self._track_ground

    @track_ground.setter
    def track_ground(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'track_ground' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'track_ground' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._track_ground = value

    @builtins.property
    def vertical_speed(self):
        """Message field 'vertical_speed'."""
        return self._vertical_speed

    @vertical_speed.setter
    def vertical_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_speed = value
