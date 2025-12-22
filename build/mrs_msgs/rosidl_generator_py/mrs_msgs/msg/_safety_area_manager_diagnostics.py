# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/SafetyAreaManagerDiagnostics.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SafetyAreaManagerDiagnostics(type):
    """Metaclass of message 'SafetyAreaManagerDiagnostics'."""

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
                'mrs_msgs.msg.SafetyAreaManagerDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__safety_area_manager_diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__safety_area_manager_diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__safety_area_manager_diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__safety_area_manager_diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__safety_area_manager_diagnostics

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from mrs_msgs.msg import Prism
            if Prism.__class__._TYPE_SUPPORT is None:
                Prism.__class__.__import_type_support__()

            from mrs_msgs.msg import WorldOrigin
            if WorldOrigin.__class__._TYPE_SUPPORT is None:
                WorldOrigin.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SafetyAreaManagerDiagnostics(metaclass=Metaclass_SafetyAreaManagerDiagnostics):
    """Message class 'SafetyAreaManagerDiagnostics'."""

    __slots__ = [
        '_stamp',
        '_uav_name',
        '_world_origin',
        '_safety_area_enabled',
        '_position_valid_2d',
        '_position_valid_3d',
        '_border',
        '_obstacles_present',
        '_obstacles',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'uav_name': 'string',
        'world_origin': 'mrs_msgs/WorldOrigin',
        'safety_area_enabled': 'boolean',
        'position_valid_2d': 'boolean',
        'position_valid_3d': 'boolean',
        'border': 'mrs_msgs/Prism',
        'obstacles_present': 'boolean',
        'obstacles': 'sequence<mrs_msgs/Prism>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'WorldOrigin'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'Prism'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'Prism')),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.uav_name = kwargs.get('uav_name', str())
        from mrs_msgs.msg import WorldOrigin
        self.world_origin = kwargs.get('world_origin', WorldOrigin())
        self.safety_area_enabled = kwargs.get('safety_area_enabled', bool())
        self.position_valid_2d = kwargs.get('position_valid_2d', bool())
        self.position_valid_3d = kwargs.get('position_valid_3d', bool())
        from mrs_msgs.msg import Prism
        self.border = kwargs.get('border', Prism())
        self.obstacles_present = kwargs.get('obstacles_present', bool())
        self.obstacles = kwargs.get('obstacles', [])

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
        if self.stamp != other.stamp:
            return False
        if self.uav_name != other.uav_name:
            return False
        if self.world_origin != other.world_origin:
            return False
        if self.safety_area_enabled != other.safety_area_enabled:
            return False
        if self.position_valid_2d != other.position_valid_2d:
            return False
        if self.position_valid_3d != other.position_valid_3d:
            return False
        if self.border != other.border:
            return False
        if self.obstacles_present != other.obstacles_present:
            return False
        if self.obstacles != other.obstacles:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

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
    def world_origin(self):
        """Message field 'world_origin'."""
        return self._world_origin

    @world_origin.setter
    def world_origin(self, value):
        if self._check_fields:
            from mrs_msgs.msg import WorldOrigin
            assert \
                isinstance(value, WorldOrigin), \
                "The 'world_origin' field must be a sub message of type 'WorldOrigin'"
        self._world_origin = value

    @builtins.property
    def safety_area_enabled(self):
        """Message field 'safety_area_enabled'."""
        return self._safety_area_enabled

    @safety_area_enabled.setter
    def safety_area_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'safety_area_enabled' field must be of type 'bool'"
        self._safety_area_enabled = value

    @builtins.property
    def position_valid_2d(self):
        """Message field 'position_valid_2d'."""
        return self._position_valid_2d

    @position_valid_2d.setter
    def position_valid_2d(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'position_valid_2d' field must be of type 'bool'"
        self._position_valid_2d = value

    @builtins.property
    def position_valid_3d(self):
        """Message field 'position_valid_3d'."""
        return self._position_valid_3d

    @position_valid_3d.setter
    def position_valid_3d(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'position_valid_3d' field must be of type 'bool'"
        self._position_valid_3d = value

    @builtins.property
    def border(self):
        """Message field 'border'."""
        return self._border

    @border.setter
    def border(self, value):
        if self._check_fields:
            from mrs_msgs.msg import Prism
            assert \
                isinstance(value, Prism), \
                "The 'border' field must be a sub message of type 'Prism'"
        self._border = value

    @builtins.property
    def obstacles_present(self):
        """Message field 'obstacles_present'."""
        return self._obstacles_present

    @obstacles_present.setter
    def obstacles_present(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'obstacles_present' field must be of type 'bool'"
        self._obstacles_present = value

    @builtins.property
    def obstacles(self):
        """Message field 'obstacles'."""
        return self._obstacles

    @obstacles.setter
    def obstacles(self, value):
        if self._check_fields:
            from mrs_msgs.msg import Prism
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
                 all(isinstance(v, Prism) for v in value) and
                 True), \
                "The 'obstacles' field must be a set or sequence and each value of type 'Prism'"
        self._obstacles = value
