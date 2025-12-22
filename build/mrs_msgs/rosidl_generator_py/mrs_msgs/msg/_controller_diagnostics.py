# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/ControllerDiagnostics.idl
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


class Metaclass_ControllerDiagnostics(type):
    """Metaclass of message 'ControllerDiagnostics'."""

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
                'mrs_msgs.msg.ControllerDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__controller_diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__controller_diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__controller_diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__controller_diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__controller_diagnostics

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


class ControllerDiagnostics(metaclass=Metaclass_ControllerDiagnostics):
    """Message class 'ControllerDiagnostics'."""

    __slots__ = [
        '_stamp',
        '_controller',
        '_ramping_up',
        '_mass_estimator',
        '_mass_difference',
        '_total_mass',
        '_disturbance_estimator',
        '_disturbance_wx_w',
        '_disturbance_wy_w',
        '_disturbance_bx_w',
        '_disturbance_by_w',
        '_disturbance_bx_b',
        '_disturbance_by_b',
        '_controller_enforcing_constraints',
        '_horizontal_speed_constraint',
        '_horizontal_acc_constraint',
        '_vertical_asc_speed_constraint',
        '_vertical_asc_acc_constraint',
        '_vertical_desc_speed_constraint',
        '_vertical_desc_acc_constraint',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'controller': 'string',
        'ramping_up': 'boolean',
        'mass_estimator': 'boolean',
        'mass_difference': 'double',
        'total_mass': 'double',
        'disturbance_estimator': 'boolean',
        'disturbance_wx_w': 'double',
        'disturbance_wy_w': 'double',
        'disturbance_bx_w': 'double',
        'disturbance_by_w': 'double',
        'disturbance_bx_b': 'double',
        'disturbance_by_b': 'double',
        'controller_enforcing_constraints': 'boolean',
        'horizontal_speed_constraint': 'double',
        'horizontal_acc_constraint': 'double',
        'vertical_asc_speed_constraint': 'double',
        'vertical_asc_acc_constraint': 'double',
        'vertical_desc_speed_constraint': 'double',
        'vertical_desc_acc_constraint': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.controller = kwargs.get('controller', str())
        self.ramping_up = kwargs.get('ramping_up', bool())
        self.mass_estimator = kwargs.get('mass_estimator', bool())
        self.mass_difference = kwargs.get('mass_difference', float())
        self.total_mass = kwargs.get('total_mass', float())
        self.disturbance_estimator = kwargs.get('disturbance_estimator', bool())
        self.disturbance_wx_w = kwargs.get('disturbance_wx_w', float())
        self.disturbance_wy_w = kwargs.get('disturbance_wy_w', float())
        self.disturbance_bx_w = kwargs.get('disturbance_bx_w', float())
        self.disturbance_by_w = kwargs.get('disturbance_by_w', float())
        self.disturbance_bx_b = kwargs.get('disturbance_bx_b', float())
        self.disturbance_by_b = kwargs.get('disturbance_by_b', float())
        self.controller_enforcing_constraints = kwargs.get('controller_enforcing_constraints', bool())
        self.horizontal_speed_constraint = kwargs.get('horizontal_speed_constraint', float())
        self.horizontal_acc_constraint = kwargs.get('horizontal_acc_constraint', float())
        self.vertical_asc_speed_constraint = kwargs.get('vertical_asc_speed_constraint', float())
        self.vertical_asc_acc_constraint = kwargs.get('vertical_asc_acc_constraint', float())
        self.vertical_desc_speed_constraint = kwargs.get('vertical_desc_speed_constraint', float())
        self.vertical_desc_acc_constraint = kwargs.get('vertical_desc_acc_constraint', float())

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
        if self.controller != other.controller:
            return False
        if self.ramping_up != other.ramping_up:
            return False
        if self.mass_estimator != other.mass_estimator:
            return False
        if self.mass_difference != other.mass_difference:
            return False
        if self.total_mass != other.total_mass:
            return False
        if self.disturbance_estimator != other.disturbance_estimator:
            return False
        if self.disturbance_wx_w != other.disturbance_wx_w:
            return False
        if self.disturbance_wy_w != other.disturbance_wy_w:
            return False
        if self.disturbance_bx_w != other.disturbance_bx_w:
            return False
        if self.disturbance_by_w != other.disturbance_by_w:
            return False
        if self.disturbance_bx_b != other.disturbance_bx_b:
            return False
        if self.disturbance_by_b != other.disturbance_by_b:
            return False
        if self.controller_enforcing_constraints != other.controller_enforcing_constraints:
            return False
        if self.horizontal_speed_constraint != other.horizontal_speed_constraint:
            return False
        if self.horizontal_acc_constraint != other.horizontal_acc_constraint:
            return False
        if self.vertical_asc_speed_constraint != other.vertical_asc_speed_constraint:
            return False
        if self.vertical_asc_acc_constraint != other.vertical_asc_acc_constraint:
            return False
        if self.vertical_desc_speed_constraint != other.vertical_desc_speed_constraint:
            return False
        if self.vertical_desc_acc_constraint != other.vertical_desc_acc_constraint:
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
    def controller(self):
        """Message field 'controller'."""
        return self._controller

    @controller.setter
    def controller(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'controller' field must be of type 'str'"
        self._controller = value

    @builtins.property
    def ramping_up(self):
        """Message field 'ramping_up'."""
        return self._ramping_up

    @ramping_up.setter
    def ramping_up(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'ramping_up' field must be of type 'bool'"
        self._ramping_up = value

    @builtins.property
    def mass_estimator(self):
        """Message field 'mass_estimator'."""
        return self._mass_estimator

    @mass_estimator.setter
    def mass_estimator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'mass_estimator' field must be of type 'bool'"
        self._mass_estimator = value

    @builtins.property
    def mass_difference(self):
        """Message field 'mass_difference'."""
        return self._mass_difference

    @mass_difference.setter
    def mass_difference(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mass_difference' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'mass_difference' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._mass_difference = value

    @builtins.property
    def total_mass(self):
        """Message field 'total_mass'."""
        return self._total_mass

    @total_mass.setter
    def total_mass(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_mass' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'total_mass' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._total_mass = value

    @builtins.property
    def disturbance_estimator(self):
        """Message field 'disturbance_estimator'."""
        return self._disturbance_estimator

    @disturbance_estimator.setter
    def disturbance_estimator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'disturbance_estimator' field must be of type 'bool'"
        self._disturbance_estimator = value

    @builtins.property
    def disturbance_wx_w(self):
        """Message field 'disturbance_wx_w'."""
        return self._disturbance_wx_w

    @disturbance_wx_w.setter
    def disturbance_wx_w(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'disturbance_wx_w' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'disturbance_wx_w' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._disturbance_wx_w = value

    @builtins.property
    def disturbance_wy_w(self):
        """Message field 'disturbance_wy_w'."""
        return self._disturbance_wy_w

    @disturbance_wy_w.setter
    def disturbance_wy_w(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'disturbance_wy_w' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'disturbance_wy_w' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._disturbance_wy_w = value

    @builtins.property
    def disturbance_bx_w(self):
        """Message field 'disturbance_bx_w'."""
        return self._disturbance_bx_w

    @disturbance_bx_w.setter
    def disturbance_bx_w(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'disturbance_bx_w' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'disturbance_bx_w' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._disturbance_bx_w = value

    @builtins.property
    def disturbance_by_w(self):
        """Message field 'disturbance_by_w'."""
        return self._disturbance_by_w

    @disturbance_by_w.setter
    def disturbance_by_w(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'disturbance_by_w' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'disturbance_by_w' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._disturbance_by_w = value

    @builtins.property
    def disturbance_bx_b(self):
        """Message field 'disturbance_bx_b'."""
        return self._disturbance_bx_b

    @disturbance_bx_b.setter
    def disturbance_bx_b(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'disturbance_bx_b' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'disturbance_bx_b' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._disturbance_bx_b = value

    @builtins.property
    def disturbance_by_b(self):
        """Message field 'disturbance_by_b'."""
        return self._disturbance_by_b

    @disturbance_by_b.setter
    def disturbance_by_b(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'disturbance_by_b' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'disturbance_by_b' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._disturbance_by_b = value

    @builtins.property
    def controller_enforcing_constraints(self):
        """Message field 'controller_enforcing_constraints'."""
        return self._controller_enforcing_constraints

    @controller_enforcing_constraints.setter
    def controller_enforcing_constraints(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'controller_enforcing_constraints' field must be of type 'bool'"
        self._controller_enforcing_constraints = value

    @builtins.property
    def horizontal_speed_constraint(self):
        """Message field 'horizontal_speed_constraint'."""
        return self._horizontal_speed_constraint

    @horizontal_speed_constraint.setter
    def horizontal_speed_constraint(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'horizontal_speed_constraint' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'horizontal_speed_constraint' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._horizontal_speed_constraint = value

    @builtins.property
    def horizontal_acc_constraint(self):
        """Message field 'horizontal_acc_constraint'."""
        return self._horizontal_acc_constraint

    @horizontal_acc_constraint.setter
    def horizontal_acc_constraint(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'horizontal_acc_constraint' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'horizontal_acc_constraint' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._horizontal_acc_constraint = value

    @builtins.property
    def vertical_asc_speed_constraint(self):
        """Message field 'vertical_asc_speed_constraint'."""
        return self._vertical_asc_speed_constraint

    @vertical_asc_speed_constraint.setter
    def vertical_asc_speed_constraint(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_asc_speed_constraint' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_asc_speed_constraint' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_asc_speed_constraint = value

    @builtins.property
    def vertical_asc_acc_constraint(self):
        """Message field 'vertical_asc_acc_constraint'."""
        return self._vertical_asc_acc_constraint

    @vertical_asc_acc_constraint.setter
    def vertical_asc_acc_constraint(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_asc_acc_constraint' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_asc_acc_constraint' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_asc_acc_constraint = value

    @builtins.property
    def vertical_desc_speed_constraint(self):
        """Message field 'vertical_desc_speed_constraint'."""
        return self._vertical_desc_speed_constraint

    @vertical_desc_speed_constraint.setter
    def vertical_desc_speed_constraint(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_desc_speed_constraint' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_desc_speed_constraint' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_desc_speed_constraint = value

    @builtins.property
    def vertical_desc_acc_constraint(self):
        """Message field 'vertical_desc_acc_constraint'."""
        return self._vertical_desc_acc_constraint

    @vertical_desc_acc_constraint.setter
    def vertical_desc_acc_constraint(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'vertical_desc_acc_constraint' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'vertical_desc_acc_constraint' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._vertical_desc_acc_constraint = value
