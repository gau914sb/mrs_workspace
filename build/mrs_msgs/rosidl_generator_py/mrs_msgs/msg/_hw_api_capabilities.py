# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/HwApiCapabilities.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HwApiCapabilities(type):
    """Metaclass of message 'HwApiCapabilities'."""

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
                'mrs_msgs.msg.HwApiCapabilities')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hw_api_capabilities
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hw_api_capabilities
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hw_api_capabilities
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hw_api_capabilities
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hw_api_capabilities

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


class HwApiCapabilities(metaclass=Metaclass_HwApiCapabilities):
    """Message class 'HwApiCapabilities'."""

    __slots__ = [
        '_stamp',
        '_api_name',
        '_accepts_actuator_cmd',
        '_accepts_attitude_cmd',
        '_accepts_attitude_rate_cmd',
        '_accepts_control_group_cmd',
        '_accepts_acceleration_hdg_rate_cmd',
        '_accepts_acceleration_hdg_cmd',
        '_accepts_velocity_hdg_rate_cmd',
        '_accepts_velocity_hdg_cmd',
        '_accepts_position_cmd',
        '_produces_ground_truth',
        '_produces_gnss',
        '_produces_gnss_status',
        '_produces_rtk',
        '_produces_imu',
        '_produces_distance_sensor',
        '_produces_altitude',
        '_produces_magnetometer_heading',
        '_produces_rc_channels',
        '_produces_battery_state',
        '_produces_position',
        '_produces_orientation',
        '_produces_velocity',
        '_produces_angular_velocity',
        '_produces_odometry',
        '_produces_magnetic_field',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'api_name': 'string',
        'accepts_actuator_cmd': 'boolean',
        'accepts_attitude_cmd': 'boolean',
        'accepts_attitude_rate_cmd': 'boolean',
        'accepts_control_group_cmd': 'boolean',
        'accepts_acceleration_hdg_rate_cmd': 'boolean',
        'accepts_acceleration_hdg_cmd': 'boolean',
        'accepts_velocity_hdg_rate_cmd': 'boolean',
        'accepts_velocity_hdg_cmd': 'boolean',
        'accepts_position_cmd': 'boolean',
        'produces_ground_truth': 'boolean',
        'produces_gnss': 'boolean',
        'produces_gnss_status': 'boolean',
        'produces_rtk': 'boolean',
        'produces_imu': 'boolean',
        'produces_distance_sensor': 'boolean',
        'produces_altitude': 'boolean',
        'produces_magnetometer_heading': 'boolean',
        'produces_rc_channels': 'boolean',
        'produces_battery_state': 'boolean',
        'produces_position': 'boolean',
        'produces_orientation': 'boolean',
        'produces_velocity': 'boolean',
        'produces_angular_velocity': 'boolean',
        'produces_odometry': 'boolean',
        'produces_magnetic_field': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.api_name = kwargs.get('api_name', str())
        self.accepts_actuator_cmd = kwargs.get('accepts_actuator_cmd', bool())
        self.accepts_attitude_cmd = kwargs.get('accepts_attitude_cmd', bool())
        self.accepts_attitude_rate_cmd = kwargs.get('accepts_attitude_rate_cmd', bool())
        self.accepts_control_group_cmd = kwargs.get('accepts_control_group_cmd', bool())
        self.accepts_acceleration_hdg_rate_cmd = kwargs.get('accepts_acceleration_hdg_rate_cmd', bool())
        self.accepts_acceleration_hdg_cmd = kwargs.get('accepts_acceleration_hdg_cmd', bool())
        self.accepts_velocity_hdg_rate_cmd = kwargs.get('accepts_velocity_hdg_rate_cmd', bool())
        self.accepts_velocity_hdg_cmd = kwargs.get('accepts_velocity_hdg_cmd', bool())
        self.accepts_position_cmd = kwargs.get('accepts_position_cmd', bool())
        self.produces_ground_truth = kwargs.get('produces_ground_truth', bool())
        self.produces_gnss = kwargs.get('produces_gnss', bool())
        self.produces_gnss_status = kwargs.get('produces_gnss_status', bool())
        self.produces_rtk = kwargs.get('produces_rtk', bool())
        self.produces_imu = kwargs.get('produces_imu', bool())
        self.produces_distance_sensor = kwargs.get('produces_distance_sensor', bool())
        self.produces_altitude = kwargs.get('produces_altitude', bool())
        self.produces_magnetometer_heading = kwargs.get('produces_magnetometer_heading', bool())
        self.produces_rc_channels = kwargs.get('produces_rc_channels', bool())
        self.produces_battery_state = kwargs.get('produces_battery_state', bool())
        self.produces_position = kwargs.get('produces_position', bool())
        self.produces_orientation = kwargs.get('produces_orientation', bool())
        self.produces_velocity = kwargs.get('produces_velocity', bool())
        self.produces_angular_velocity = kwargs.get('produces_angular_velocity', bool())
        self.produces_odometry = kwargs.get('produces_odometry', bool())
        self.produces_magnetic_field = kwargs.get('produces_magnetic_field', bool())

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
        if self.api_name != other.api_name:
            return False
        if self.accepts_actuator_cmd != other.accepts_actuator_cmd:
            return False
        if self.accepts_attitude_cmd != other.accepts_attitude_cmd:
            return False
        if self.accepts_attitude_rate_cmd != other.accepts_attitude_rate_cmd:
            return False
        if self.accepts_control_group_cmd != other.accepts_control_group_cmd:
            return False
        if self.accepts_acceleration_hdg_rate_cmd != other.accepts_acceleration_hdg_rate_cmd:
            return False
        if self.accepts_acceleration_hdg_cmd != other.accepts_acceleration_hdg_cmd:
            return False
        if self.accepts_velocity_hdg_rate_cmd != other.accepts_velocity_hdg_rate_cmd:
            return False
        if self.accepts_velocity_hdg_cmd != other.accepts_velocity_hdg_cmd:
            return False
        if self.accepts_position_cmd != other.accepts_position_cmd:
            return False
        if self.produces_ground_truth != other.produces_ground_truth:
            return False
        if self.produces_gnss != other.produces_gnss:
            return False
        if self.produces_gnss_status != other.produces_gnss_status:
            return False
        if self.produces_rtk != other.produces_rtk:
            return False
        if self.produces_imu != other.produces_imu:
            return False
        if self.produces_distance_sensor != other.produces_distance_sensor:
            return False
        if self.produces_altitude != other.produces_altitude:
            return False
        if self.produces_magnetometer_heading != other.produces_magnetometer_heading:
            return False
        if self.produces_rc_channels != other.produces_rc_channels:
            return False
        if self.produces_battery_state != other.produces_battery_state:
            return False
        if self.produces_position != other.produces_position:
            return False
        if self.produces_orientation != other.produces_orientation:
            return False
        if self.produces_velocity != other.produces_velocity:
            return False
        if self.produces_angular_velocity != other.produces_angular_velocity:
            return False
        if self.produces_odometry != other.produces_odometry:
            return False
        if self.produces_magnetic_field != other.produces_magnetic_field:
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
    def api_name(self):
        """Message field 'api_name'."""
        return self._api_name

    @api_name.setter
    def api_name(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'api_name' field must be of type 'str'"
        self._api_name = value

    @builtins.property
    def accepts_actuator_cmd(self):
        """Message field 'accepts_actuator_cmd'."""
        return self._accepts_actuator_cmd

    @accepts_actuator_cmd.setter
    def accepts_actuator_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepts_actuator_cmd' field must be of type 'bool'"
        self._accepts_actuator_cmd = value

    @builtins.property
    def accepts_attitude_cmd(self):
        """Message field 'accepts_attitude_cmd'."""
        return self._accepts_attitude_cmd

    @accepts_attitude_cmd.setter
    def accepts_attitude_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepts_attitude_cmd' field must be of type 'bool'"
        self._accepts_attitude_cmd = value

    @builtins.property
    def accepts_attitude_rate_cmd(self):
        """Message field 'accepts_attitude_rate_cmd'."""
        return self._accepts_attitude_rate_cmd

    @accepts_attitude_rate_cmd.setter
    def accepts_attitude_rate_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepts_attitude_rate_cmd' field must be of type 'bool'"
        self._accepts_attitude_rate_cmd = value

    @builtins.property
    def accepts_control_group_cmd(self):
        """Message field 'accepts_control_group_cmd'."""
        return self._accepts_control_group_cmd

    @accepts_control_group_cmd.setter
    def accepts_control_group_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepts_control_group_cmd' field must be of type 'bool'"
        self._accepts_control_group_cmd = value

    @builtins.property
    def accepts_acceleration_hdg_rate_cmd(self):
        """Message field 'accepts_acceleration_hdg_rate_cmd'."""
        return self._accepts_acceleration_hdg_rate_cmd

    @accepts_acceleration_hdg_rate_cmd.setter
    def accepts_acceleration_hdg_rate_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepts_acceleration_hdg_rate_cmd' field must be of type 'bool'"
        self._accepts_acceleration_hdg_rate_cmd = value

    @builtins.property
    def accepts_acceleration_hdg_cmd(self):
        """Message field 'accepts_acceleration_hdg_cmd'."""
        return self._accepts_acceleration_hdg_cmd

    @accepts_acceleration_hdg_cmd.setter
    def accepts_acceleration_hdg_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepts_acceleration_hdg_cmd' field must be of type 'bool'"
        self._accepts_acceleration_hdg_cmd = value

    @builtins.property
    def accepts_velocity_hdg_rate_cmd(self):
        """Message field 'accepts_velocity_hdg_rate_cmd'."""
        return self._accepts_velocity_hdg_rate_cmd

    @accepts_velocity_hdg_rate_cmd.setter
    def accepts_velocity_hdg_rate_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepts_velocity_hdg_rate_cmd' field must be of type 'bool'"
        self._accepts_velocity_hdg_rate_cmd = value

    @builtins.property
    def accepts_velocity_hdg_cmd(self):
        """Message field 'accepts_velocity_hdg_cmd'."""
        return self._accepts_velocity_hdg_cmd

    @accepts_velocity_hdg_cmd.setter
    def accepts_velocity_hdg_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepts_velocity_hdg_cmd' field must be of type 'bool'"
        self._accepts_velocity_hdg_cmd = value

    @builtins.property
    def accepts_position_cmd(self):
        """Message field 'accepts_position_cmd'."""
        return self._accepts_position_cmd

    @accepts_position_cmd.setter
    def accepts_position_cmd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'accepts_position_cmd' field must be of type 'bool'"
        self._accepts_position_cmd = value

    @builtins.property
    def produces_ground_truth(self):
        """Message field 'produces_ground_truth'."""
        return self._produces_ground_truth

    @produces_ground_truth.setter
    def produces_ground_truth(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_ground_truth' field must be of type 'bool'"
        self._produces_ground_truth = value

    @builtins.property
    def produces_gnss(self):
        """Message field 'produces_gnss'."""
        return self._produces_gnss

    @produces_gnss.setter
    def produces_gnss(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_gnss' field must be of type 'bool'"
        self._produces_gnss = value

    @builtins.property
    def produces_gnss_status(self):
        """Message field 'produces_gnss_status'."""
        return self._produces_gnss_status

    @produces_gnss_status.setter
    def produces_gnss_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_gnss_status' field must be of type 'bool'"
        self._produces_gnss_status = value

    @builtins.property
    def produces_rtk(self):
        """Message field 'produces_rtk'."""
        return self._produces_rtk

    @produces_rtk.setter
    def produces_rtk(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_rtk' field must be of type 'bool'"
        self._produces_rtk = value

    @builtins.property
    def produces_imu(self):
        """Message field 'produces_imu'."""
        return self._produces_imu

    @produces_imu.setter
    def produces_imu(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_imu' field must be of type 'bool'"
        self._produces_imu = value

    @builtins.property
    def produces_distance_sensor(self):
        """Message field 'produces_distance_sensor'."""
        return self._produces_distance_sensor

    @produces_distance_sensor.setter
    def produces_distance_sensor(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_distance_sensor' field must be of type 'bool'"
        self._produces_distance_sensor = value

    @builtins.property
    def produces_altitude(self):
        """Message field 'produces_altitude'."""
        return self._produces_altitude

    @produces_altitude.setter
    def produces_altitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_altitude' field must be of type 'bool'"
        self._produces_altitude = value

    @builtins.property
    def produces_magnetometer_heading(self):
        """Message field 'produces_magnetometer_heading'."""
        return self._produces_magnetometer_heading

    @produces_magnetometer_heading.setter
    def produces_magnetometer_heading(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_magnetometer_heading' field must be of type 'bool'"
        self._produces_magnetometer_heading = value

    @builtins.property
    def produces_rc_channels(self):
        """Message field 'produces_rc_channels'."""
        return self._produces_rc_channels

    @produces_rc_channels.setter
    def produces_rc_channels(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_rc_channels' field must be of type 'bool'"
        self._produces_rc_channels = value

    @builtins.property
    def produces_battery_state(self):
        """Message field 'produces_battery_state'."""
        return self._produces_battery_state

    @produces_battery_state.setter
    def produces_battery_state(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_battery_state' field must be of type 'bool'"
        self._produces_battery_state = value

    @builtins.property
    def produces_position(self):
        """Message field 'produces_position'."""
        return self._produces_position

    @produces_position.setter
    def produces_position(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_position' field must be of type 'bool'"
        self._produces_position = value

    @builtins.property
    def produces_orientation(self):
        """Message field 'produces_orientation'."""
        return self._produces_orientation

    @produces_orientation.setter
    def produces_orientation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_orientation' field must be of type 'bool'"
        self._produces_orientation = value

    @builtins.property
    def produces_velocity(self):
        """Message field 'produces_velocity'."""
        return self._produces_velocity

    @produces_velocity.setter
    def produces_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_velocity' field must be of type 'bool'"
        self._produces_velocity = value

    @builtins.property
    def produces_angular_velocity(self):
        """Message field 'produces_angular_velocity'."""
        return self._produces_angular_velocity

    @produces_angular_velocity.setter
    def produces_angular_velocity(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_angular_velocity' field must be of type 'bool'"
        self._produces_angular_velocity = value

    @builtins.property
    def produces_odometry(self):
        """Message field 'produces_odometry'."""
        return self._produces_odometry

    @produces_odometry.setter
    def produces_odometry(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_odometry' field must be of type 'bool'"
        self._produces_odometry = value

    @builtins.property
    def produces_magnetic_field(self):
        """Message field 'produces_magnetic_field'."""
        return self._produces_magnetic_field

    @produces_magnetic_field.setter
    def produces_magnetic_field(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'produces_magnetic_field' field must be of type 'bool'"
        self._produces_magnetic_field = value
