# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/MpcTrackerDiagnostics.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MpcTrackerDiagnostics(type):
    """Metaclass of message 'MpcTrackerDiagnostics'."""

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
                'mrs_msgs.msg.MpcTrackerDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mpc_tracker_diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mpc_tracker_diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mpc_tracker_diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mpc_tracker_diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mpc_tracker_diagnostics

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

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


class MpcTrackerDiagnostics(metaclass=Metaclass_MpcTrackerDiagnostics):
    """Message class 'MpcTrackerDiagnostics'."""

    __slots__ = [
        '_header',
        '_uav_name',
        '_active',
        '_collision_avoidance_active',
        '_avoiding_collision',
        '_avoidance_active_uavs',
        '_setpoint',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'uav_name': 'string',
        'active': 'boolean',
        'collision_avoidance_active': 'boolean',
        'avoiding_collision': 'boolean',
        'avoidance_active_uavs': 'sequence<string>',
        'setpoint': 'geometry_msgs/Pose',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
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
        self.uav_name = kwargs.get('uav_name', str())
        self.active = kwargs.get('active', bool())
        self.collision_avoidance_active = kwargs.get('collision_avoidance_active', bool())
        self.avoiding_collision = kwargs.get('avoiding_collision', bool())
        self.avoidance_active_uavs = kwargs.get('avoidance_active_uavs', [])
        from geometry_msgs.msg import Pose
        self.setpoint = kwargs.get('setpoint', Pose())

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
        if self.uav_name != other.uav_name:
            return False
        if self.active != other.active:
            return False
        if self.collision_avoidance_active != other.collision_avoidance_active:
            return False
        if self.avoiding_collision != other.avoiding_collision:
            return False
        if self.avoidance_active_uavs != other.avoidance_active_uavs:
            return False
        if self.setpoint != other.setpoint:
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
    def uav_name(self):
        """Message field 'uav_name'."""
        return self._uav_name

    @uav_name.setter
    def uav_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'uav_name' field must be of type 'str'"
        self._uav_name = value

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
    def collision_avoidance_active(self):
        """Message field 'collision_avoidance_active'."""
        return self._collision_avoidance_active

    @collision_avoidance_active.setter
    def collision_avoidance_active(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'collision_avoidance_active' field must be of type 'bool'"
        self._collision_avoidance_active = value

    @builtins.property
    def avoiding_collision(self):
        """Message field 'avoiding_collision'."""
        return self._avoiding_collision

    @avoiding_collision.setter
    def avoiding_collision(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'avoiding_collision' field must be of type 'bool'"
        self._avoiding_collision = value

    @builtins.property
    def avoidance_active_uavs(self):
        """Message field 'avoidance_active_uavs'."""
        return self._avoidance_active_uavs

    @avoidance_active_uavs.setter
    def avoidance_active_uavs(self, value):
        if self._check_fields:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'avoidance_active_uavs' field must be a set or sequence and each value of type 'str'"
        self._avoidance_active_uavs = value

    @builtins.property
    def setpoint(self):
        """Message field 'setpoint'."""
        return self._setpoint

    @setpoint.setter
    def setpoint(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'setpoint' field must be a sub message of type 'Pose'"
        self._setpoint = value
