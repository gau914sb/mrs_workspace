# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/GripperDiagnostics.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GripperDiagnostics(type):
    """Metaclass of message 'GripperDiagnostics'."""

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
                'mrs_modules_msgs.msg.GripperDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gripper_diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gripper_diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gripper_diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gripper_diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gripper_diagnostics

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperDiagnostics(metaclass=Metaclass_GripperDiagnostics):
    """Message class 'GripperDiagnostics'."""

    __slots__ = [
        '_stamp',
        '_gripper_on',
        '_gripping_object',
        '_has_hall',
        '_hall1_debug',
        '_hall2_debug',
        '_has_ultrasonic',
        '_ultrasonic1_debug',
        '_ultrasonic2_debug',
        '_has_proximity',
        '_proximity1_debug',
        '_proximity2_debug',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'gripper_on': 'boolean',
        'gripping_object': 'boolean',
        'has_hall': 'boolean',
        'hall1_debug': 'int32',
        'hall2_debug': 'int32',
        'has_ultrasonic': 'boolean',
        'ultrasonic1_debug': 'int32',
        'ultrasonic2_debug': 'int32',
        'has_proximity': 'boolean',
        'proximity1_debug': 'int32',
        'proximity2_debug': 'int32',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
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
        self.gripper_on = kwargs.get('gripper_on', bool())
        self.gripping_object = kwargs.get('gripping_object', bool())
        self.has_hall = kwargs.get('has_hall', bool())
        self.hall1_debug = kwargs.get('hall1_debug', int())
        self.hall2_debug = kwargs.get('hall2_debug', int())
        self.has_ultrasonic = kwargs.get('has_ultrasonic', bool())
        self.ultrasonic1_debug = kwargs.get('ultrasonic1_debug', int())
        self.ultrasonic2_debug = kwargs.get('ultrasonic2_debug', int())
        self.has_proximity = kwargs.get('has_proximity', bool())
        self.proximity1_debug = kwargs.get('proximity1_debug', int())
        self.proximity2_debug = kwargs.get('proximity2_debug', int())

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
        if self.gripper_on != other.gripper_on:
            return False
        if self.gripping_object != other.gripping_object:
            return False
        if self.has_hall != other.has_hall:
            return False
        if self.hall1_debug != other.hall1_debug:
            return False
        if self.hall2_debug != other.hall2_debug:
            return False
        if self.has_ultrasonic != other.has_ultrasonic:
            return False
        if self.ultrasonic1_debug != other.ultrasonic1_debug:
            return False
        if self.ultrasonic2_debug != other.ultrasonic2_debug:
            return False
        if self.has_proximity != other.has_proximity:
            return False
        if self.proximity1_debug != other.proximity1_debug:
            return False
        if self.proximity2_debug != other.proximity2_debug:
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
    def gripper_on(self):
        """Message field 'gripper_on'."""
        return self._gripper_on

    @gripper_on.setter
    def gripper_on(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'gripper_on' field must be of type 'bool'"
        self._gripper_on = value

    @builtins.property
    def gripping_object(self):
        """Message field 'gripping_object'."""
        return self._gripping_object

    @gripping_object.setter
    def gripping_object(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'gripping_object' field must be of type 'bool'"
        self._gripping_object = value

    @builtins.property
    def has_hall(self):
        """Message field 'has_hall'."""
        return self._has_hall

    @has_hall.setter
    def has_hall(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_hall' field must be of type 'bool'"
        self._has_hall = value

    @builtins.property
    def hall1_debug(self):
        """Message field 'hall1_debug'."""
        return self._hall1_debug

    @hall1_debug.setter
    def hall1_debug(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'hall1_debug' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hall1_debug' field must be an integer in [-2147483648, 2147483647]"
        self._hall1_debug = value

    @builtins.property
    def hall2_debug(self):
        """Message field 'hall2_debug'."""
        return self._hall2_debug

    @hall2_debug.setter
    def hall2_debug(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'hall2_debug' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'hall2_debug' field must be an integer in [-2147483648, 2147483647]"
        self._hall2_debug = value

    @builtins.property
    def has_ultrasonic(self):
        """Message field 'has_ultrasonic'."""
        return self._has_ultrasonic

    @has_ultrasonic.setter
    def has_ultrasonic(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_ultrasonic' field must be of type 'bool'"
        self._has_ultrasonic = value

    @builtins.property
    def ultrasonic1_debug(self):
        """Message field 'ultrasonic1_debug'."""
        return self._ultrasonic1_debug

    @ultrasonic1_debug.setter
    def ultrasonic1_debug(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ultrasonic1_debug' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ultrasonic1_debug' field must be an integer in [-2147483648, 2147483647]"
        self._ultrasonic1_debug = value

    @builtins.property
    def ultrasonic2_debug(self):
        """Message field 'ultrasonic2_debug'."""
        return self._ultrasonic2_debug

    @ultrasonic2_debug.setter
    def ultrasonic2_debug(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ultrasonic2_debug' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'ultrasonic2_debug' field must be an integer in [-2147483648, 2147483647]"
        self._ultrasonic2_debug = value

    @builtins.property
    def has_proximity(self):
        """Message field 'has_proximity'."""
        return self._has_proximity

    @has_proximity.setter
    def has_proximity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'has_proximity' field must be of type 'bool'"
        self._has_proximity = value

    @builtins.property
    def proximity1_debug(self):
        """Message field 'proximity1_debug'."""
        return self._proximity1_debug

    @proximity1_debug.setter
    def proximity1_debug(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'proximity1_debug' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'proximity1_debug' field must be an integer in [-2147483648, 2147483647]"
        self._proximity1_debug = value

    @builtins.property
    def proximity2_debug(self):
        """Message field 'proximity2_debug'."""
        return self._proximity2_debug

    @proximity2_debug.setter
    def proximity2_debug(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'proximity2_debug' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'proximity2_debug' field must be an integer in [-2147483648, 2147483647]"
        self._proximity2_debug = value
