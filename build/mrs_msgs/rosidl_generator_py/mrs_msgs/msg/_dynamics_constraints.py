# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/DynamicsConstraints.idl
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


class Metaclass_DynamicsConstraints(type):
    """Metaclass of message 'DynamicsConstraints'."""

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
                'mrs_msgs.msg.DynamicsConstraints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__dynamics_constraints
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__dynamics_constraints
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__dynamics_constraints
            cls._TYPE_SUPPORT = module.type_support_msg__msg__dynamics_constraints
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__dynamics_constraints

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DynamicsConstraints(metaclass=Metaclass_DynamicsConstraints):
    """Message class 'DynamicsConstraints'."""

    __slots__ = [
        '_horizontal_speed',
        '_horizontal_acceleration',
        '_horizontal_jerk',
        '_horizontal_snap',
        '_vertical_ascending_speed',
        '_vertical_ascending_acceleration',
        '_vertical_ascending_jerk',
        '_vertical_ascending_snap',
        '_vertical_descending_speed',
        '_vertical_descending_acceleration',
        '_vertical_descending_jerk',
        '_vertical_descending_snap',
        '_heading_speed',
        '_heading_acceleration',
        '_heading_jerk',
        '_heading_snap',
        '_roll_rate',
        '_pitch_rate',
        '_yaw_rate',
        '_tilt',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'horizontal_speed': 'double',
        'horizontal_acceleration': 'double',
        'horizontal_jerk': 'double',
        'horizontal_snap': 'double',
        'vertical_ascending_speed': 'double',
        'vertical_ascending_acceleration': 'double',
        'vertical_ascending_jerk': 'double',
        'vertical_ascending_snap': 'double',
        'vertical_descending_speed': 'double',
        'vertical_descending_acceleration': 'double',
        'vertical_descending_jerk': 'double',
        'vertical_descending_snap': 'double',
        'heading_speed': 'double',
        'heading_acceleration': 'double',
        'heading_jerk': 'double',
        'heading_snap': 'double',
        'roll_rate': 'double',
        'pitch_rate': 'double',
        'yaw_rate': 'double',
        'tilt': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.horizontal_speed = kwargs.get('horizontal_speed', float())
        self.horizontal_acceleration = kwargs.get('horizontal_acceleration', float())
        self.horizontal_jerk = kwargs.get('horizontal_jerk', float())
        self.horizontal_snap = kwargs.get('horizontal_snap', float())
        self.vertical_ascending_speed = kwargs.get('vertical_ascending_speed', float())
        self.vertical_ascending_acceleration = kwargs.get('vertical_ascending_acceleration', float())
        self.vertical_ascending_jerk = kwargs.get('vertical_ascending_jerk', float())
        self.vertical_ascending_snap = kwargs.get('vertical_ascending_snap', float())
        self.vertical_descending_speed = kwargs.get('vertical_descending_speed', float())
        self.vertical_descending_acceleration = kwargs.get('vertical_descending_acceleration', float())
        self.vertical_descending_jerk = kwargs.get('vertical_descending_jerk', float())
        self.vertical_descending_snap = kwargs.get('vertical_descending_snap', float())
        self.heading_speed = kwargs.get('heading_speed', float())
        self.heading_acceleration = kwargs.get('heading_acceleration', float())
        self.heading_jerk = kwargs.get('heading_jerk', float())
        self.heading_snap = kwargs.get('heading_snap', float())
        self.roll_rate = kwargs.get('roll_rate', float())
        self.pitch_rate = kwargs.get('pitch_rate', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.tilt = kwargs.get('tilt', float())

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
        if self.horizontal_speed != other.horizontal_speed:
            return False
        if self.horizontal_acceleration != other.horizontal_acceleration:
            return False
        if self.horizontal_jerk != other.horizontal_jerk:
            return False
        if self.horizontal_snap != other.horizontal_snap:
            return False
        if self.vertical_ascending_speed != other.vertical_ascending_speed:
            return False
        if self.vertical_ascending_acceleration != other.vertical_ascending_acceleration:
            return False
        if self.vertical_ascending_jerk != other.vertical_ascending_jerk:
            return False
        if self.vertical_ascending_snap != other.vertical_ascending_snap:
            return False
        if self.vertical_descending_speed != other.vertical_descending_speed:
            return False
        if self.vertical_descending_acceleration != other.vertical_descending_acceleration:
            return False
        if self.vertical_descending_jerk != other.vertical_descending_jerk:
            return False
        if self.vertical_descending_snap != other.vertical_descending_snap:
            return False
        if self.heading_speed != other.heading_speed:
            return False
        if self.heading_acceleration != other.heading_acceleration:
            return False
        if self.heading_jerk != other.heading_jerk:
            return False
        if self.heading_snap != other.heading_snap:
            return False
        if self.roll_rate != other.roll_rate:
            return False
        if self.pitch_rate != other.pitch_rate:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.tilt != other.tilt:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def horizontal_acceleration(self):
        """Message field 'horizontal_acceleration'."""
        return self._horizontal_acceleration

    @horizontal_acceleration.setter
    def horizontal_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'horizontal_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'horizontal_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._horizontal_acceleration = value

    @builtins.property
    def horizontal_jerk(self):
        """Message field 'horizontal_jerk'."""
        return self._horizontal_jerk

    @horizontal_jerk.setter
    def horizontal_jerk(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'horizontal_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'horizontal_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._horizontal_jerk = value

    @builtins.property
    def horizontal_snap(self):
        """Message field 'horizontal_snap'."""
        return self._horizontal_snap

    @horizontal_snap.setter
    def horizontal_snap(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'horizontal_snap' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'horizontal_snap' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._horizontal_snap = value

    @builtins.property
    def vertical_ascending_speed(self):
        """Message field 'vertical_ascending_speed'."""
        return self._vertical_ascending_speed

    @vertical_ascending_speed.setter
    def vertical_ascending_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_ascending_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_ascending_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_ascending_speed = value

    @builtins.property
    def vertical_ascending_acceleration(self):
        """Message field 'vertical_ascending_acceleration'."""
        return self._vertical_ascending_acceleration

    @vertical_ascending_acceleration.setter
    def vertical_ascending_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_ascending_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_ascending_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_ascending_acceleration = value

    @builtins.property
    def vertical_ascending_jerk(self):
        """Message field 'vertical_ascending_jerk'."""
        return self._vertical_ascending_jerk

    @vertical_ascending_jerk.setter
    def vertical_ascending_jerk(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_ascending_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_ascending_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_ascending_jerk = value

    @builtins.property
    def vertical_ascending_snap(self):
        """Message field 'vertical_ascending_snap'."""
        return self._vertical_ascending_snap

    @vertical_ascending_snap.setter
    def vertical_ascending_snap(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_ascending_snap' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_ascending_snap' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_ascending_snap = value

    @builtins.property
    def vertical_descending_speed(self):
        """Message field 'vertical_descending_speed'."""
        return self._vertical_descending_speed

    @vertical_descending_speed.setter
    def vertical_descending_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_descending_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_descending_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_descending_speed = value

    @builtins.property
    def vertical_descending_acceleration(self):
        """Message field 'vertical_descending_acceleration'."""
        return self._vertical_descending_acceleration

    @vertical_descending_acceleration.setter
    def vertical_descending_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_descending_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_descending_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_descending_acceleration = value

    @builtins.property
    def vertical_descending_jerk(self):
        """Message field 'vertical_descending_jerk'."""
        return self._vertical_descending_jerk

    @vertical_descending_jerk.setter
    def vertical_descending_jerk(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_descending_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_descending_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_descending_jerk = value

    @builtins.property
    def vertical_descending_snap(self):
        """Message field 'vertical_descending_snap'."""
        return self._vertical_descending_snap

    @vertical_descending_snap.setter
    def vertical_descending_snap(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_descending_snap' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_descending_snap' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_descending_snap = value

    @builtins.property
    def heading_speed(self):
        """Message field 'heading_speed'."""
        return self._heading_speed

    @heading_speed.setter
    def heading_speed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_speed' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_speed' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_speed = value

    @builtins.property
    def heading_acceleration(self):
        """Message field 'heading_acceleration'."""
        return self._heading_acceleration

    @heading_acceleration.setter
    def heading_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_acceleration' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_acceleration' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_acceleration = value

    @builtins.property
    def heading_jerk(self):
        """Message field 'heading_jerk'."""
        return self._heading_jerk

    @heading_jerk.setter
    def heading_jerk(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_jerk' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_jerk' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_jerk = value

    @builtins.property
    def heading_snap(self):
        """Message field 'heading_snap'."""
        return self._heading_snap

    @heading_snap.setter
    def heading_snap(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heading_snap' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heading_snap' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heading_snap = value

    @builtins.property
    def roll_rate(self):
        """Message field 'roll_rate'."""
        return self._roll_rate

    @roll_rate.setter
    def roll_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'roll_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'roll_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._roll_rate = value

    @builtins.property
    def pitch_rate(self):
        """Message field 'pitch_rate'."""
        return self._pitch_rate

    @pitch_rate.setter
    def pitch_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'pitch_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'pitch_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._pitch_rate = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'yaw_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._yaw_rate = value

    @builtins.property
    def tilt(self):
        """Message field 'tilt'."""
        return self._tilt

    @tilt.setter
    def tilt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tilt' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'tilt' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._tilt = value
