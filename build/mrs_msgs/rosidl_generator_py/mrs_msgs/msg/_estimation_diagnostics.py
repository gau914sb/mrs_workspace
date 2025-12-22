# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/EstimationDiagnostics.idl
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


class Metaclass_EstimationDiagnostics(type):
    """Metaclass of message 'EstimationDiagnostics'."""

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
                'mrs_msgs.msg.EstimationDiagnostics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimation_diagnostics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimation_diagnostics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimation_diagnostics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimation_diagnostics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimation_diagnostics

            from geometry_msgs.msg import Accel
            if Accel.__class__._TYPE_SUPPORT is None:
                Accel.__class__.__import_type_support__()

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Twist
            if Twist.__class__._TYPE_SUPPORT is None:
                Twist.__class__.__import_type_support__()

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


class EstimationDiagnostics(metaclass=Metaclass_EstimationDiagnostics):
    """Message class 'EstimationDiagnostics'."""

    __slots__ = [
        '_header',
        '_child_frame_id',
        '_pose',
        '_velocity',
        '_acceleration',
        '_agl_height',
        '_max_flight_z',
        '_sm_state',
        '_current_state_estimator',
        '_estimator_horizontal',
        '_estimator_vertical',
        '_estimator_heading',
        '_estimator_agl_height',
        '_estimation_rate',
        '_estimator_iteration',
        '_running_state_estimators',
        '_switchable_state_estimators',
        '_platform_config',
        '_custom_config',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'child_frame_id': 'string',
        'pose': 'geometry_msgs/Pose',
        'velocity': 'geometry_msgs/Twist',
        'acceleration': 'geometry_msgs/Accel',
        'agl_height': 'double',
        'max_flight_z': 'double',
        'sm_state': 'string',
        'current_state_estimator': 'string',
        'estimator_horizontal': 'string',
        'estimator_vertical': 'string',
        'estimator_heading': 'string',
        'estimator_agl_height': 'string',
        'estimation_rate': 'uint32',
        'estimator_iteration': 'uint32',
        'running_state_estimators': 'sequence<string>',
        'switchable_state_estimators': 'sequence<string>',
        'platform_config': 'string',
        'custom_config': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Accel'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.child_frame_id = kwargs.get('child_frame_id', str())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Twist
        self.velocity = kwargs.get('velocity', Twist())
        from geometry_msgs.msg import Accel
        self.acceleration = kwargs.get('acceleration', Accel())
        self.agl_height = kwargs.get('agl_height', float())
        self.max_flight_z = kwargs.get('max_flight_z', float())
        self.sm_state = kwargs.get('sm_state', str())
        self.current_state_estimator = kwargs.get('current_state_estimator', str())
        self.estimator_horizontal = kwargs.get('estimator_horizontal', str())
        self.estimator_vertical = kwargs.get('estimator_vertical', str())
        self.estimator_heading = kwargs.get('estimator_heading', str())
        self.estimator_agl_height = kwargs.get('estimator_agl_height', str())
        self.estimation_rate = kwargs.get('estimation_rate', int())
        self.estimator_iteration = kwargs.get('estimator_iteration', int())
        self.running_state_estimators = kwargs.get('running_state_estimators', [])
        self.switchable_state_estimators = kwargs.get('switchable_state_estimators', [])
        self.platform_config = kwargs.get('platform_config', str())
        self.custom_config = kwargs.get('custom_config', str())

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
        if self.child_frame_id != other.child_frame_id:
            return False
        if self.pose != other.pose:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.agl_height != other.agl_height:
            return False
        if self.max_flight_z != other.max_flight_z:
            return False
        if self.sm_state != other.sm_state:
            return False
        if self.current_state_estimator != other.current_state_estimator:
            return False
        if self.estimator_horizontal != other.estimator_horizontal:
            return False
        if self.estimator_vertical != other.estimator_vertical:
            return False
        if self.estimator_heading != other.estimator_heading:
            return False
        if self.estimator_agl_height != other.estimator_agl_height:
            return False
        if self.estimation_rate != other.estimation_rate:
            return False
        if self.estimator_iteration != other.estimator_iteration:
            return False
        if self.running_state_estimators != other.running_state_estimators:
            return False
        if self.switchable_state_estimators != other.switchable_state_estimators:
            return False
        if self.platform_config != other.platform_config:
            return False
        if self.custom_config != other.custom_config:
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
    def child_frame_id(self):
        """Message field 'child_frame_id'."""
        return self._child_frame_id

    @child_frame_id.setter
    def child_frame_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'child_frame_id' field must be of type 'str'"
        self._child_frame_id = value

    @builtins.property
    def pose(self):
        """Message field 'pose'."""
        return self._pose

    @pose.setter
    def pose(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'pose' field must be a sub message of type 'Pose'"
        self._pose = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Twist
            assert \
                isinstance(value, Twist), \
                "The 'velocity' field must be a sub message of type 'Twist'"
        self._velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Accel
            assert \
                isinstance(value, Accel), \
                "The 'acceleration' field must be a sub message of type 'Accel'"
        self._acceleration = value

    @builtins.property
    def agl_height(self):
        """Message field 'agl_height'."""
        return self._agl_height

    @agl_height.setter
    def agl_height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'agl_height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'agl_height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._agl_height = value

    @builtins.property
    def max_flight_z(self):
        """Message field 'max_flight_z'."""
        return self._max_flight_z

    @max_flight_z.setter
    def max_flight_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'max_flight_z' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_flight_z' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_flight_z = value

    @builtins.property
    def sm_state(self):
        """Message field 'sm_state'."""
        return self._sm_state

    @sm_state.setter
    def sm_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'sm_state' field must be of type 'str'"
        self._sm_state = value

    @builtins.property
    def current_state_estimator(self):
        """Message field 'current_state_estimator'."""
        return self._current_state_estimator

    @current_state_estimator.setter
    def current_state_estimator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'current_state_estimator' field must be of type 'str'"
        self._current_state_estimator = value

    @builtins.property
    def estimator_horizontal(self):
        """Message field 'estimator_horizontal'."""
        return self._estimator_horizontal

    @estimator_horizontal.setter
    def estimator_horizontal(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'estimator_horizontal' field must be of type 'str'"
        self._estimator_horizontal = value

    @builtins.property
    def estimator_vertical(self):
        """Message field 'estimator_vertical'."""
        return self._estimator_vertical

    @estimator_vertical.setter
    def estimator_vertical(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'estimator_vertical' field must be of type 'str'"
        self._estimator_vertical = value

    @builtins.property
    def estimator_heading(self):
        """Message field 'estimator_heading'."""
        return self._estimator_heading

    @estimator_heading.setter
    def estimator_heading(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'estimator_heading' field must be of type 'str'"
        self._estimator_heading = value

    @builtins.property
    def estimator_agl_height(self):
        """Message field 'estimator_agl_height'."""
        return self._estimator_agl_height

    @estimator_agl_height.setter
    def estimator_agl_height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'estimator_agl_height' field must be of type 'str'"
        self._estimator_agl_height = value

    @builtins.property
    def estimation_rate(self):
        """Message field 'estimation_rate'."""
        return self._estimation_rate

    @estimation_rate.setter
    def estimation_rate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'estimation_rate' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'estimation_rate' field must be an unsigned integer in [0, 4294967295]"
        self._estimation_rate = value

    @builtins.property
    def estimator_iteration(self):
        """Message field 'estimator_iteration'."""
        return self._estimator_iteration

    @estimator_iteration.setter
    def estimator_iteration(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'estimator_iteration' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'estimator_iteration' field must be an unsigned integer in [0, 4294967295]"
        self._estimator_iteration = value

    @builtins.property
    def running_state_estimators(self):
        """Message field 'running_state_estimators'."""
        return self._running_state_estimators

    @running_state_estimators.setter
    def running_state_estimators(self, value):
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
                "The 'running_state_estimators' field must be a set or sequence and each value of type 'str'"
        self._running_state_estimators = value

    @builtins.property
    def switchable_state_estimators(self):
        """Message field 'switchable_state_estimators'."""
        return self._switchable_state_estimators

    @switchable_state_estimators.setter
    def switchable_state_estimators(self, value):
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
                "The 'switchable_state_estimators' field must be a set or sequence and each value of type 'str'"
        self._switchable_state_estimators = value

    @builtins.property
    def platform_config(self):
        """Message field 'platform_config'."""
        return self._platform_config

    @platform_config.setter
    def platform_config(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'platform_config' field must be of type 'str'"
        self._platform_config = value

    @builtins.property
    def custom_config(self):
        """Message field 'custom_config'."""
        return self._custom_config

    @custom_config.setter
    def custom_config(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'custom_config' field must be of type 'str'"
        self._custom_config = value
