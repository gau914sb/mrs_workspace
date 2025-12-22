# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/MpcPredictionFullState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

# Member 'heading'
# Member 'heading_rate'
# Member 'heading_acceleration'
# Member 'heading_jerk'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MpcPredictionFullState(type):
    """Metaclass of message 'MpcPredictionFullState'."""

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
                'mrs_msgs.msg.MpcPredictionFullState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mpc_prediction_full_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mpc_prediction_full_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mpc_prediction_full_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mpc_prediction_full_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mpc_prediction_full_state

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Quaternion
            if Quaternion.__class__._TYPE_SUPPORT is None:
                Quaternion.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class MpcPredictionFullState(metaclass=Metaclass_MpcPredictionFullState):
    """Message class 'MpcPredictionFullState'."""

    __slots__ = [
        '_header',
        '_input_id',
        '_stamps',
        '_position',
        '_orientation',
        '_attitude_rate',
        '_velocity',
        '_acceleration',
        '_jerk',
        '_heading',
        '_heading_rate',
        '_heading_acceleration',
        '_heading_jerk',
        '_use_orientation',
        '_use_attitude_rate',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'input_id': 'int64',
        'stamps': 'sequence<builtin_interfaces/Time>',
        'position': 'sequence<geometry_msgs/Point>',
        'orientation': 'sequence<geometry_msgs/Quaternion>',
        'attitude_rate': 'sequence<geometry_msgs/Vector3>',
        'velocity': 'sequence<geometry_msgs/Vector3>',
        'acceleration': 'sequence<geometry_msgs/Vector3>',
        'jerk': 'sequence<geometry_msgs/Vector3>',
        'heading': 'sequence<double>',
        'heading_rate': 'sequence<double>',
        'heading_acceleration': 'sequence<double>',
        'heading_jerk': 'sequence<double>',
        'use_orientation': 'uint8',
        'use_attitude_rate': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Quaternion')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
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
        self.input_id = kwargs.get('input_id', int())
        self.stamps = kwargs.get('stamps', [])
        self.position = kwargs.get('position', [])
        self.orientation = kwargs.get('orientation', [])
        self.attitude_rate = kwargs.get('attitude_rate', [])
        self.velocity = kwargs.get('velocity', [])
        self.acceleration = kwargs.get('acceleration', [])
        self.jerk = kwargs.get('jerk', [])
        self.heading = array.array('d', kwargs.get('heading', []))
        self.heading_rate = array.array('d', kwargs.get('heading_rate', []))
        self.heading_acceleration = array.array('d', kwargs.get('heading_acceleration', []))
        self.heading_jerk = array.array('d', kwargs.get('heading_jerk', []))
        self.use_orientation = kwargs.get('use_orientation', int())
        self.use_attitude_rate = kwargs.get('use_attitude_rate', int())

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
        if self.input_id != other.input_id:
            return False
        if self.stamps != other.stamps:
            return False
        if self.position != other.position:
            return False
        if self.orientation != other.orientation:
            return False
        if self.attitude_rate != other.attitude_rate:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.jerk != other.jerk:
            return False
        if self.heading != other.heading:
            return False
        if self.heading_rate != other.heading_rate:
            return False
        if self.heading_acceleration != other.heading_acceleration:
            return False
        if self.heading_jerk != other.heading_jerk:
            return False
        if self.use_orientation != other.use_orientation:
            return False
        if self.use_attitude_rate != other.use_attitude_rate:
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
    def input_id(self):
        """Message field 'input_id'."""
        return self._input_id

    @input_id.setter
    def input_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'input_id' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'input_id' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._input_id = value

    @builtins.property
    def stamps(self):
        """Message field 'stamps'."""
        return self._stamps

    @stamps.setter
    def stamps(self, value):
        if self._check_fields:
            from builtin_interfaces.msg import Time
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
                 all(isinstance(v, Time) for v in value) and
                 True), \
                "The 'stamps' field must be a set or sequence and each value of type 'Time'"
        self._stamps = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Point
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
                 all(isinstance(v, Point) for v in value) and
                 True), \
                "The 'position' field must be a set or sequence and each value of type 'Point'"
        self._position = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Quaternion
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
                 all(isinstance(v, Quaternion) for v in value) and
                 True), \
                "The 'orientation' field must be a set or sequence and each value of type 'Quaternion'"
        self._orientation = value

    @builtins.property
    def attitude_rate(self):
        """Message field 'attitude_rate'."""
        return self._attitude_rate

    @attitude_rate.setter
    def attitude_rate(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'attitude_rate' field must be a set or sequence and each value of type 'Vector3'"
        self._attitude_rate = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'velocity' field must be a set or sequence and each value of type 'Vector3'"
        self._velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'acceleration' field must be a set or sequence and each value of type 'Vector3'"
        self._acceleration = value

    @builtins.property
    def jerk(self):
        """Message field 'jerk'."""
        return self._jerk

    @jerk.setter
    def jerk(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'jerk' field must be a set or sequence and each value of type 'Vector3'"
        self._jerk = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'heading' array.array() must have the type code of 'd'"
                self._heading = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'heading' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._heading = array.array('d', value)

    @builtins.property
    def heading_rate(self):
        """Message field 'heading_rate'."""
        return self._heading_rate

    @heading_rate.setter
    def heading_rate(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'heading_rate' array.array() must have the type code of 'd'"
                self._heading_rate = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'heading_rate' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._heading_rate = array.array('d', value)

    @builtins.property
    def heading_acceleration(self):
        """Message field 'heading_acceleration'."""
        return self._heading_acceleration

    @heading_acceleration.setter
    def heading_acceleration(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'heading_acceleration' array.array() must have the type code of 'd'"
                self._heading_acceleration = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'heading_acceleration' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._heading_acceleration = array.array('d', value)

    @builtins.property
    def heading_jerk(self):
        """Message field 'heading_jerk'."""
        return self._heading_jerk

    @heading_jerk.setter
    def heading_jerk(self, value):
        if self._check_fields:
            if isinstance(value, array.array):
                assert value.typecode == 'd', \
                    "The 'heading_jerk' array.array() must have the type code of 'd'"
                self._heading_jerk = value
                return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'heading_jerk' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._heading_jerk = array.array('d', value)

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
