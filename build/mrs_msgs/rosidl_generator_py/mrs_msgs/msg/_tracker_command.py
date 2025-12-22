# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/TrackerCommand.idl
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


class Metaclass_TrackerCommand(type):
    """Metaclass of message 'TrackerCommand'."""

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
                'mrs_msgs.msg.TrackerCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracker_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracker_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracker_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracker_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracker_command

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from mrs_msgs.msg import MpcPredictionFullState
            if MpcPredictionFullState.__class__._TYPE_SUPPORT is None:
                MpcPredictionFullState.__class__.__import_type_support__()

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


class TrackerCommand(metaclass=Metaclass_TrackerCommand):
    """Message class 'TrackerCommand'."""

    __slots__ = [
        '_header',
        '_position',
        '_velocity',
        '_acceleration',
        '_jerk',
        '_snap',
        '_full_state_prediction',
        '_orientation',
        '_attitude_rate',
        '_throttle',
        '_heading',
        '_heading_rate',
        '_heading_acceleration',
        '_heading_jerk',
        '_disable_position_gains',
        '_disable_antiwindups',
        '_use_position_horizontal',
        '_use_position_vertical',
        '_use_velocity_horizontal',
        '_use_velocity_vertical',
        '_use_acceleration',
        '_use_jerk',
        '_use_snap',
        '_use_attitude_rate',
        '_use_heading',
        '_use_heading_rate',
        '_use_heading_acceleration',
        '_use_heading_jerk',
        '_use_orientation',
        '_use_throttle',
        '_use_full_state_prediction',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'position': 'geometry_msgs/Point',
        'velocity': 'geometry_msgs/Vector3',
        'acceleration': 'geometry_msgs/Vector3',
        'jerk': 'geometry_msgs/Vector3',
        'snap': 'geometry_msgs/Vector3',
        'full_state_prediction': 'mrs_msgs/MpcPredictionFullState',
        'orientation': 'geometry_msgs/Quaternion',
        'attitude_rate': 'geometry_msgs/Point',
        'throttle': 'double',
        'heading': 'double',
        'heading_rate': 'double',
        'heading_acceleration': 'double',
        'heading_jerk': 'double',
        'disable_position_gains': 'boolean',
        'disable_antiwindups': 'boolean',
        'use_position_horizontal': 'uint8',
        'use_position_vertical': 'uint8',
        'use_velocity_horizontal': 'uint8',
        'use_velocity_vertical': 'uint8',
        'use_acceleration': 'uint8',
        'use_jerk': 'uint8',
        'use_snap': 'uint8',
        'use_attitude_rate': 'uint8',
        'use_heading': 'uint8',
        'use_heading_rate': 'uint8',
        'use_heading_acceleration': 'uint8',
        'use_heading_jerk': 'uint8',
        'use_orientation': 'uint8',
        'use_throttle': 'uint8',
        'use_full_state_prediction': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'MpcPredictionFullState'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        from geometry_msgs.msg import Point
        self.position = kwargs.get('position', Point())
        from geometry_msgs.msg import Vector3
        self.velocity = kwargs.get('velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.acceleration = kwargs.get('acceleration', Vector3())
        from geometry_msgs.msg import Vector3
        self.jerk = kwargs.get('jerk', Vector3())
        from geometry_msgs.msg import Vector3
        self.snap = kwargs.get('snap', Vector3())
        from mrs_msgs.msg import MpcPredictionFullState
        self.full_state_prediction = kwargs.get('full_state_prediction', MpcPredictionFullState())
        from geometry_msgs.msg import Quaternion
        self.orientation = kwargs.get('orientation', Quaternion())
        from geometry_msgs.msg import Point
        self.attitude_rate = kwargs.get('attitude_rate', Point())
        self.throttle = kwargs.get('throttle', float())
        self.heading = kwargs.get('heading', float())
        self.heading_rate = kwargs.get('heading_rate', float())
        self.heading_acceleration = kwargs.get('heading_acceleration', float())
        self.heading_jerk = kwargs.get('heading_jerk', float())
        self.disable_position_gains = kwargs.get('disable_position_gains', bool())
        self.disable_antiwindups = kwargs.get('disable_antiwindups', bool())
        self.use_position_horizontal = kwargs.get('use_position_horizontal', int())
        self.use_position_vertical = kwargs.get('use_position_vertical', int())
        self.use_velocity_horizontal = kwargs.get('use_velocity_horizontal', int())
        self.use_velocity_vertical = kwargs.get('use_velocity_vertical', int())
        self.use_acceleration = kwargs.get('use_acceleration', int())
        self.use_jerk = kwargs.get('use_jerk', int())
        self.use_snap = kwargs.get('use_snap', int())
        self.use_attitude_rate = kwargs.get('use_attitude_rate', int())
        self.use_heading = kwargs.get('use_heading', int())
        self.use_heading_rate = kwargs.get('use_heading_rate', int())
        self.use_heading_acceleration = kwargs.get('use_heading_acceleration', int())
        self.use_heading_jerk = kwargs.get('use_heading_jerk', int())
        self.use_orientation = kwargs.get('use_orientation', int())
        self.use_throttle = kwargs.get('use_throttle', int())
        self.use_full_state_prediction = kwargs.get('use_full_state_prediction', int())

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
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.jerk != other.jerk:
            return False
        if self.snap != other.snap:
            return False
        if self.full_state_prediction != other.full_state_prediction:
            return False
        if self.orientation != other.orientation:
            return False
        if self.attitude_rate != other.attitude_rate:
            return False
        if self.throttle != other.throttle:
            return False
        if self.heading != other.heading:
            return False
        if self.heading_rate != other.heading_rate:
            return False
        if self.heading_acceleration != other.heading_acceleration:
            return False
        if self.heading_jerk != other.heading_jerk:
            return False
        if self.disable_position_gains != other.disable_position_gains:
            return False
        if self.disable_antiwindups != other.disable_antiwindups:
            return False
        if self.use_position_horizontal != other.use_position_horizontal:
            return False
        if self.use_position_vertical != other.use_position_vertical:
            return False
        if self.use_velocity_horizontal != other.use_velocity_horizontal:
            return False
        if self.use_velocity_vertical != other.use_velocity_vertical:
            return False
        if self.use_acceleration != other.use_acceleration:
            return False
        if self.use_jerk != other.use_jerk:
            return False
        if self.use_snap != other.use_snap:
            return False
        if self.use_attitude_rate != other.use_attitude_rate:
            return False
        if self.use_heading != other.use_heading:
            return False
        if self.use_heading_rate != other.use_heading_rate:
            return False
        if self.use_heading_acceleration != other.use_heading_acceleration:
            return False
        if self.use_heading_jerk != other.use_heading_jerk:
            return False
        if self.use_orientation != other.use_orientation:
            return False
        if self.use_throttle != other.use_throttle:
            return False
        if self.use_full_state_prediction != other.use_full_state_prediction:
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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'position' field must be a sub message of type 'Point'"
        self._position = value

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
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'acceleration' field must be a sub message of type 'Vector3'"
        self._acceleration = value

    @builtins.property
    def jerk(self):
        """Message field 'jerk'."""
        return self._jerk

    @jerk.setter
    def jerk(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'jerk' field must be a sub message of type 'Vector3'"
        self._jerk = value

    @builtins.property
    def snap(self):
        """Message field 'snap'."""
        return self._snap

    @snap.setter
    def snap(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'snap' field must be a sub message of type 'Vector3'"
        self._snap = value

    @builtins.property
    def full_state_prediction(self):
        """Message field 'full_state_prediction'."""
        return self._full_state_prediction

    @full_state_prediction.setter
    def full_state_prediction(self, value):
        if self._check_fields:
            from mrs_msgs.msg import MpcPredictionFullState
            assert \
                isinstance(value, MpcPredictionFullState), \
                "The 'full_state_prediction' field must be a sub message of type 'MpcPredictionFullState'"
        self._full_state_prediction = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Quaternion
            assert \
                isinstance(value, Quaternion), \
                "The 'orientation' field must be a sub message of type 'Quaternion'"
        self._orientation = value

    @builtins.property
    def attitude_rate(self):
        """Message field 'attitude_rate'."""
        return self._attitude_rate

    @attitude_rate.setter
    def attitude_rate(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'attitude_rate' field must be a sub message of type 'Point'"
        self._attitude_rate = value

    @builtins.property
    def throttle(self):
        """Message field 'throttle'."""
        return self._throttle

    @throttle.setter
    def throttle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'throttle' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'throttle' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._throttle = value

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
    def disable_position_gains(self):
        """Message field 'disable_position_gains'."""
        return self._disable_position_gains

    @disable_position_gains.setter
    def disable_position_gains(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'disable_position_gains' field must be of type 'bool'"
        self._disable_position_gains = value

    @builtins.property
    def disable_antiwindups(self):
        """Message field 'disable_antiwindups'."""
        return self._disable_antiwindups

    @disable_antiwindups.setter
    def disable_antiwindups(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'disable_antiwindups' field must be of type 'bool'"
        self._disable_antiwindups = value

    @builtins.property
    def use_position_horizontal(self):
        """Message field 'use_position_horizontal'."""
        return self._use_position_horizontal

    @use_position_horizontal.setter
    def use_position_horizontal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_position_horizontal' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_position_horizontal' field must be an unsigned integer in [0, 255]"
        self._use_position_horizontal = value

    @builtins.property
    def use_position_vertical(self):
        """Message field 'use_position_vertical'."""
        return self._use_position_vertical

    @use_position_vertical.setter
    def use_position_vertical(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_position_vertical' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_position_vertical' field must be an unsigned integer in [0, 255]"
        self._use_position_vertical = value

    @builtins.property
    def use_velocity_horizontal(self):
        """Message field 'use_velocity_horizontal'."""
        return self._use_velocity_horizontal

    @use_velocity_horizontal.setter
    def use_velocity_horizontal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_velocity_horizontal' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_velocity_horizontal' field must be an unsigned integer in [0, 255]"
        self._use_velocity_horizontal = value

    @builtins.property
    def use_velocity_vertical(self):
        """Message field 'use_velocity_vertical'."""
        return self._use_velocity_vertical

    @use_velocity_vertical.setter
    def use_velocity_vertical(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_velocity_vertical' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_velocity_vertical' field must be an unsigned integer in [0, 255]"
        self._use_velocity_vertical = value

    @builtins.property
    def use_acceleration(self):
        """Message field 'use_acceleration'."""
        return self._use_acceleration

    @use_acceleration.setter
    def use_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_acceleration' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_acceleration' field must be an unsigned integer in [0, 255]"
        self._use_acceleration = value

    @builtins.property
    def use_jerk(self):
        """Message field 'use_jerk'."""
        return self._use_jerk

    @use_jerk.setter
    def use_jerk(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_jerk' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_jerk' field must be an unsigned integer in [0, 255]"
        self._use_jerk = value

    @builtins.property
    def use_snap(self):
        """Message field 'use_snap'."""
        return self._use_snap

    @use_snap.setter
    def use_snap(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_snap' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_snap' field must be an unsigned integer in [0, 255]"
        self._use_snap = value

    @builtins.property
    def use_attitude_rate(self):
        """Message field 'use_attitude_rate'."""
        return self._use_attitude_rate

    @use_attitude_rate.setter
    def use_attitude_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_attitude_rate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_attitude_rate' field must be an unsigned integer in [0, 255]"
        self._use_attitude_rate = value

    @builtins.property
    def use_heading(self):
        """Message field 'use_heading'."""
        return self._use_heading

    @use_heading.setter
    def use_heading(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_heading' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_heading' field must be an unsigned integer in [0, 255]"
        self._use_heading = value

    @builtins.property
    def use_heading_rate(self):
        """Message field 'use_heading_rate'."""
        return self._use_heading_rate

    @use_heading_rate.setter
    def use_heading_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_heading_rate' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_heading_rate' field must be an unsigned integer in [0, 255]"
        self._use_heading_rate = value

    @builtins.property
    def use_heading_acceleration(self):
        """Message field 'use_heading_acceleration'."""
        return self._use_heading_acceleration

    @use_heading_acceleration.setter
    def use_heading_acceleration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_heading_acceleration' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_heading_acceleration' field must be an unsigned integer in [0, 255]"
        self._use_heading_acceleration = value

    @builtins.property
    def use_heading_jerk(self):
        """Message field 'use_heading_jerk'."""
        return self._use_heading_jerk

    @use_heading_jerk.setter
    def use_heading_jerk(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_heading_jerk' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_heading_jerk' field must be an unsigned integer in [0, 255]"
        self._use_heading_jerk = value

    @builtins.property
    def use_orientation(self):
        """Message field 'use_orientation'."""
        return self._use_orientation

    @use_orientation.setter
    def use_orientation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_orientation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_orientation' field must be an unsigned integer in [0, 255]"
        self._use_orientation = value

    @builtins.property
    def use_throttle(self):
        """Message field 'use_throttle'."""
        return self._use_throttle

    @use_throttle.setter
    def use_throttle(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_throttle' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_throttle' field must be an unsigned integer in [0, 255]"
        self._use_throttle = value

    @builtins.property
    def use_full_state_prediction(self):
        """Message field 'use_full_state_prediction'."""
        return self._use_full_state_prediction

    @use_full_state_prediction.setter
    def use_full_state_prediction(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'use_full_state_prediction' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'use_full_state_prediction' field must be an unsigned integer in [0, 255]"
        self._use_full_state_prediction = value
