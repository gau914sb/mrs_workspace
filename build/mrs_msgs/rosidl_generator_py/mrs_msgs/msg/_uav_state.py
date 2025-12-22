# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/UavState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UavState(type):
    """Metaclass of message 'UavState'."""

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
                'mrs_msgs.msg.UavState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uav_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uav_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uav_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uav_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uav_state

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


class UavState(metaclass=Metaclass_UavState):
    """Message class 'UavState'."""

    __slots__ = [
        '_header',
        '_child_frame_id',
        '_estimator_horizontal',
        '_estimator_vertical',
        '_estimator_heading',
        '_estimator_iteration',
        '_pose',
        '_velocity',
        '_acceleration',
        '_acceleration_disturbance',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'child_frame_id': 'string',
        'estimator_horizontal': 'string',
        'estimator_vertical': 'string',
        'estimator_heading': 'string',
        'estimator_iteration': 'uint32',
        'pose': 'geometry_msgs/Pose',
        'velocity': 'geometry_msgs/Twist',
        'acceleration': 'geometry_msgs/Accel',
        'acceleration_disturbance': 'geometry_msgs/Accel',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Twist'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Accel'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Accel'),  # noqa: E501
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
        self.estimator_horizontal = kwargs.get('estimator_horizontal', str())
        self.estimator_vertical = kwargs.get('estimator_vertical', str())
        self.estimator_heading = kwargs.get('estimator_heading', str())
        self.estimator_iteration = kwargs.get('estimator_iteration', int())
        from geometry_msgs.msg import Pose
        self.pose = kwargs.get('pose', Pose())
        from geometry_msgs.msg import Twist
        self.velocity = kwargs.get('velocity', Twist())
        from geometry_msgs.msg import Accel
        self.acceleration = kwargs.get('acceleration', Accel())
        from geometry_msgs.msg import Accel
        self.acceleration_disturbance = kwargs.get('acceleration_disturbance', Accel())

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
        if self.estimator_horizontal != other.estimator_horizontal:
            return False
        if self.estimator_vertical != other.estimator_vertical:
            return False
        if self.estimator_heading != other.estimator_heading:
            return False
        if self.estimator_iteration != other.estimator_iteration:
            return False
        if self.pose != other.pose:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.acceleration_disturbance != other.acceleration_disturbance:
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
    def acceleration_disturbance(self):
        """Message field 'acceleration_disturbance'."""
        return self._acceleration_disturbance

    @acceleration_disturbance.setter
    def acceleration_disturbance(self, value):
        if self._check_fields:
            from geometry_msgs.msg import Accel
            assert \
                isinstance(value, Accel), \
                "The 'acceleration_disturbance' field must be a sub message of type 'Accel'"
        self._acceleration_disturbance = value
