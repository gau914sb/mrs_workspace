# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/TrackerStatus.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TrackerStatus(type):
    """Metaclass of message 'TrackerStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_INVALID': 0,
        'STATE_IDLE': 1,
        'STATE_TAKEOFF': 2,
        'STATE_HOVER': 3,
        'STATE_REFERENCE': 4,
        'STATE_TRAJECTORY': 5,
        'STATE_LAND': 6,
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
                'mrs_msgs.msg.TrackerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__tracker_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__tracker_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__tracker_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__tracker_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__tracker_status

            from mrs_msgs.msg import ReferenceStamped
            if ReferenceStamped.__class__._TYPE_SUPPORT is None:
                ReferenceStamped.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_INVALID': cls.__constants['STATE_INVALID'],
            'STATE_IDLE': cls.__constants['STATE_IDLE'],
            'STATE_TAKEOFF': cls.__constants['STATE_TAKEOFF'],
            'STATE_HOVER': cls.__constants['STATE_HOVER'],
            'STATE_REFERENCE': cls.__constants['STATE_REFERENCE'],
            'STATE_TRAJECTORY': cls.__constants['STATE_TRAJECTORY'],
            'STATE_LAND': cls.__constants['STATE_LAND'],
        }

    @property
    def STATE_INVALID(self):
        """Message constant 'STATE_INVALID'."""
        return Metaclass_TrackerStatus.__constants['STATE_INVALID']

    @property
    def STATE_IDLE(self):
        """Message constant 'STATE_IDLE'."""
        return Metaclass_TrackerStatus.__constants['STATE_IDLE']

    @property
    def STATE_TAKEOFF(self):
        """Message constant 'STATE_TAKEOFF'."""
        return Metaclass_TrackerStatus.__constants['STATE_TAKEOFF']

    @property
    def STATE_HOVER(self):
        """Message constant 'STATE_HOVER'."""
        return Metaclass_TrackerStatus.__constants['STATE_HOVER']

    @property
    def STATE_REFERENCE(self):
        """Message constant 'STATE_REFERENCE'."""
        return Metaclass_TrackerStatus.__constants['STATE_REFERENCE']

    @property
    def STATE_TRAJECTORY(self):
        """Message constant 'STATE_TRAJECTORY'."""
        return Metaclass_TrackerStatus.__constants['STATE_TRAJECTORY']

    @property
    def STATE_LAND(self):
        """Message constant 'STATE_LAND'."""
        return Metaclass_TrackerStatus.__constants['STATE_LAND']


class TrackerStatus(metaclass=Metaclass_TrackerStatus):
    """
    Message class 'TrackerStatus'.

    Constants:
      STATE_INVALID
      STATE_IDLE
      STATE_TAKEOFF
      STATE_HOVER
      STATE_REFERENCE
      STATE_TRAJECTORY
      STATE_LAND
    """

    __slots__ = [
        '_active',
        '_callbacks_enabled',
        '_state',
        '_have_goal',
        '_tracking_trajectory',
        '_trajectory_length',
        '_trajectory_idx',
        '_trajectory_reference',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'active': 'boolean',
        'callbacks_enabled': 'boolean',
        'state': 'uint8',
        'have_goal': 'boolean',
        'tracking_trajectory': 'boolean',
        'trajectory_length': 'int32',
        'trajectory_idx': 'int32',
        'trajectory_reference': 'mrs_msgs/ReferenceStamped',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'ReferenceStamped'),  # noqa: E501
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
        self.active = kwargs.get('active', bool())
        self.callbacks_enabled = kwargs.get('callbacks_enabled', bool())
        self.state = kwargs.get('state', int())
        self.have_goal = kwargs.get('have_goal', bool())
        self.tracking_trajectory = kwargs.get('tracking_trajectory', bool())
        self.trajectory_length = kwargs.get('trajectory_length', int())
        self.trajectory_idx = kwargs.get('trajectory_idx', int())
        from mrs_msgs.msg import ReferenceStamped
        self.trajectory_reference = kwargs.get('trajectory_reference', ReferenceStamped())

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
        if self.active != other.active:
            return False
        if self.callbacks_enabled != other.callbacks_enabled:
            return False
        if self.state != other.state:
            return False
        if self.have_goal != other.have_goal:
            return False
        if self.tracking_trajectory != other.tracking_trajectory:
            return False
        if self.trajectory_length != other.trajectory_length:
            return False
        if self.trajectory_idx != other.trajectory_idx:
            return False
        if self.trajectory_reference != other.trajectory_reference:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def active(self):
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'active' field must be of type 'bool'"
        self._active = value

    @builtins.property
    def callbacks_enabled(self):
        """Message field 'callbacks_enabled'."""
        return self._callbacks_enabled

    @callbacks_enabled.setter
    def callbacks_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'callbacks_enabled' field must be of type 'bool'"
        self._callbacks_enabled = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property
    def have_goal(self):
        """Message field 'have_goal'."""
        return self._have_goal

    @have_goal.setter
    def have_goal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'have_goal' field must be of type 'bool'"
        self._have_goal = value

    @builtins.property
    def tracking_trajectory(self):
        """Message field 'tracking_trajectory'."""
        return self._tracking_trajectory

    @tracking_trajectory.setter
    def tracking_trajectory(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'tracking_trajectory' field must be of type 'bool'"
        self._tracking_trajectory = value

    @builtins.property
    def trajectory_length(self):
        """Message field 'trajectory_length'."""
        return self._trajectory_length

    @trajectory_length.setter
    def trajectory_length(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'trajectory_length' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'trajectory_length' field must be an integer in [-2147483648, 2147483647]"
        self._trajectory_length = value

    @builtins.property
    def trajectory_idx(self):
        """Message field 'trajectory_idx'."""
        return self._trajectory_idx

    @trajectory_idx.setter
    def trajectory_idx(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'trajectory_idx' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'trajectory_idx' field must be an integer in [-2147483648, 2147483647]"
        self._trajectory_idx = value

    @builtins.property
    def trajectory_reference(self):
        """Message field 'trajectory_reference'."""
        return self._trajectory_reference

    @trajectory_reference.setter
    def trajectory_reference(self, value):
        if self._check_fields:
            from mrs_msgs.msg import ReferenceStamped
            assert \
                isinstance(value, ReferenceStamped), \
                "The 'trajectory_reference' field must be a sub message of type 'ReferenceStamped'"
        self._trajectory_reference = value
