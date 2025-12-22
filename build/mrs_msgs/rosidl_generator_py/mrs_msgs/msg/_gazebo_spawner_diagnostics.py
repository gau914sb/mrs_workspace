# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/GazeboSpawnerDiagnostics.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GazeboSpawnerDiagnostics(type):
    """Metaclass of message 'GazeboSpawnerDiagnostics'."""

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
                'mrs_msgs.msg.GazeboSpawnerDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gazebo_spawner_diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gazebo_spawner_diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gazebo_spawner_diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gazebo_spawner_diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gazebo_spawner_diagnostics

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GazeboSpawnerDiagnostics(metaclass=Metaclass_GazeboSpawnerDiagnostics):
    """Message class 'GazeboSpawnerDiagnostics'."""

    __slots__ = [
        '_spawn_called',
        '_processing',
        '_active_vehicles',
        '_queued_vehicles',
        '_queued_processes',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'spawn_called': 'boolean',
        'processing': 'boolean',
        'active_vehicles': 'sequence<string>',
        'queued_vehicles': 'sequence<string>',
        'queued_processes': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
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
        self.spawn_called = kwargs.get('spawn_called', bool())
        self.processing = kwargs.get('processing', bool())
        self.active_vehicles = kwargs.get('active_vehicles', [])
        self.queued_vehicles = kwargs.get('queued_vehicles', [])
        self.queued_processes = kwargs.get('queued_processes', int())

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
        if self.spawn_called != other.spawn_called:
            return False
        if self.processing != other.processing:
            return False
        if self.active_vehicles != other.active_vehicles:
            return False
        if self.queued_vehicles != other.queued_vehicles:
            return False
        if self.queued_processes != other.queued_processes:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def spawn_called(self):
        """Message field 'spawn_called'."""
        return self._spawn_called

    @spawn_called.setter
    def spawn_called(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'spawn_called' field must be of type 'bool'"
        self._spawn_called = value

    @builtins.property
    def processing(self):
        """Message field 'processing'."""
        return self._processing

    @processing.setter
    def processing(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'processing' field must be of type 'bool'"
        self._processing = value

    @builtins.property
    def active_vehicles(self):
        """Message field 'active_vehicles'."""
        return self._active_vehicles

    @active_vehicles.setter
    def active_vehicles(self, value):
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
                "The 'active_vehicles' field must be a set or sequence and each value of type 'str'"
        self._active_vehicles = value

    @builtins.property
    def queued_vehicles(self):
        """Message field 'queued_vehicles'."""
        return self._queued_vehicles

    @queued_vehicles.setter
    def queued_vehicles(self, value):
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
                "The 'queued_vehicles' field must be a set or sequence and each value of type 'str'"
        self._queued_vehicles = value

    @builtins.property
    def queued_processes(self):
        """Message field 'queued_processes'."""
        return self._queued_processes

    @queued_processes.setter
    def queued_processes(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'queued_processes' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'queued_processes' field must be an unsigned integer in [0, 255]"
        self._queued_processes = value
