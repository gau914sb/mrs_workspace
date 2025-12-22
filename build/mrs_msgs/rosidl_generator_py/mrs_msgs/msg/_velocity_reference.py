# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/VelocityReference.idl
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


class Metaclass_VelocityReference(type):
    """Metaclass of message 'VelocityReference'."""

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
                'mrs_msgs.msg.VelocityReference')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__velocity_reference
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__velocity_reference
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__velocity_reference
            cls._TYPE_SUPPORT = module.type_support_msg__msg__velocity_reference
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__velocity_reference

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VelocityReference(metaclass=Metaclass_VelocityReference):
    """Message class 'VelocityReference'."""

    __slots__ = [
        '_velocity',
        '_altitude',
        '_heading',
        '_heading_rate',
        '_use_altitude',
        '_use_heading',
        '_use_heading_rate',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'velocity': 'geometry_msgs/Vector3',
        'altitude': 'double',
        'heading': 'double',
        'heading_rate': 'double',
        'use_altitude': 'boolean',
        'use_heading': 'boolean',
        'use_heading_rate': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        from geometry_msgs.msg import Vector3
        self.velocity = kwargs.get('velocity', Vector3())
        self.altitude = kwargs.get('altitude', float())
        self.heading = kwargs.get('heading', float())
        self.heading_rate = kwargs.get('heading_rate', float())
        self.use_altitude = kwargs.get('use_altitude', bool())
        self.use_heading = kwargs.get('use_heading', bool())
        self.use_heading_rate = kwargs.get('use_heading_rate', bool())

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
        if self.velocity != other.velocity:
            return False
        if self.altitude != other.altitude:
            return False
        if self.heading != other.heading:
            return False
        if self.heading_rate != other.heading_rate:
            return False
        if self.use_altitude != other.use_altitude:
            return False
        if self.use_heading != other.use_heading:
            return False
        if self.use_heading_rate != other.use_heading_rate:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'velocity' field must be a sub message of type 'Vector3'"
        self._velocity = value

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
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading = value

    @builtins.property
    def heading_rate(self):
        """Message field 'heading_rate'."""
        return self._heading_rate

    @heading_rate.setter
    def heading_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_rate = value

    @builtins.property
    def use_altitude(self):
        """Message field 'use_altitude'."""
        return self._use_altitude

    @use_altitude.setter
    def use_altitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'use_altitude' field must be of type 'bool'"
        self._use_altitude = value

    @builtins.property
    def use_heading(self):
        """Message field 'use_heading'."""
        return self._use_heading

    @use_heading.setter
    def use_heading(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'use_heading' field must be of type 'bool'"
        self._use_heading = value

    @builtins.property
    def use_heading_rate(self):
        """Message field 'use_heading_rate'."""
        return self._use_heading_rate

    @use_heading_rate.setter
    def use_heading_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'use_heading_rate' field must be of type 'bool'"
        self._use_heading_rate = value
