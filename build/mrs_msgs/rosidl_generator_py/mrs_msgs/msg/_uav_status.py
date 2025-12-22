# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/UavStatus.idl
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


class Metaclass_UavStatus(type):
    """Metaclass of message 'UavStatus'."""

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
                'mrs_msgs.msg.UavStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uav_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uav_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uav_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uav_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uav_status

            from mrs_msgs.msg import CustomTopic
            if CustomTopic.__class__._TYPE_SUPPORT is None:
                CustomTopic.__class__.__import_type_support__()

            from mrs_msgs.msg import NodeCpuLoad
            if NodeCpuLoad.__class__._TYPE_SUPPORT is None:
                NodeCpuLoad.__class__.__import_type_support__()

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


class UavStatus(metaclass=Metaclass_UavStatus):
    """Message class 'UavStatus'."""

    __slots__ = [
        '_header',
        '_uav_name',
        '_uav_type',
        '_uav_mass',
        '_control_manager_diag_hz',
        '_control_manager_diag_color',
        '_controllers',
        '_gains',
        '_trackers',
        '_constraints',
        '_null_tracker',
        '_secs_flown',
        '_odom_hz',
        '_odom_color',
        '_odom_x',
        '_odom_y',
        '_odom_z',
        '_odom_hdg',
        '_odom_frame',
        '_odom_estimators',
        '_horizontal_estimator',
        '_vertical_estimator',
        '_heading_estimator',
        '_agl_estimator',
        '_max_flight_z',
        '_cmd_x',
        '_cmd_y',
        '_cmd_z',
        '_cmd_hdg',
        '_cpu_load',
        '_cpu_load_total',
        '_cpu_ghz',
        '_cpu_temperature',
        '_free_ram',
        '_total_ram',
        '_free_hdd',
        '_hw_api_hz',
        '_hw_api_color',
        '_hw_api_battery_hz',
        '_hw_api_state_hz',
        '_hw_api_cmd_hz',
        '_hw_api_mode',
        '_hw_api_armed',
        '_hw_api_gnss_ok',
        '_hw_api_gnss_qual',
        '_mag_norm_hz',
        '_hw_api_gnss_fix_type',
        '_hw_api_gnss_num_sats',
        '_hw_api_gnss_pos_acc',
        '_hw_api_gnss_status_hz',
        '_mag_norm',
        '_battery_volt',
        '_battery_curr',
        '_battery_wh_drained',
        '_thrust',
        '_mass_estimate',
        '_mass_set',
        '_custom_topics',
        '_custom_string_outputs',
        '_node_cpu_loads',
        '_flying_normally',
        '_rc_mode',
        '_have_goal',
        '_tracking_trajectory',
        '_callbacks_enabled',
        '_collision_avoidance_enabled',
        '_avoiding_collision',
        '_automatic_start_can_takeoff',
        '_num_other_uavs',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'uav_name': 'string',
        'uav_type': 'string',
        'uav_mass': 'string',
        'control_manager_diag_hz': 'float',
        'control_manager_diag_color': 'int16',
        'controllers': 'sequence<string>',
        'gains': 'sequence<string>',
        'trackers': 'sequence<string>',
        'constraints': 'sequence<string>',
        'null_tracker': 'boolean',
        'secs_flown': 'uint32',
        'odom_hz': 'float',
        'odom_color': 'int16',
        'odom_x': 'float',
        'odom_y': 'float',
        'odom_z': 'float',
        'odom_hdg': 'float',
        'odom_frame': 'string',
        'odom_estimators': 'sequence<string>',
        'horizontal_estimator': 'string',
        'vertical_estimator': 'string',
        'heading_estimator': 'string',
        'agl_estimator': 'string',
        'max_flight_z': 'float',
        'cmd_x': 'float',
        'cmd_y': 'float',
        'cmd_z': 'float',
        'cmd_hdg': 'float',
        'cpu_load': 'float',
        'cpu_load_total': 'float',
        'cpu_ghz': 'float',
        'cpu_temperature': 'float',
        'free_ram': 'float',
        'total_ram': 'float',
        'free_hdd': 'int32',
        'hw_api_hz': 'float',
        'hw_api_color': 'int16',
        'hw_api_battery_hz': 'float',
        'hw_api_state_hz': 'float',
        'hw_api_cmd_hz': 'float',
        'hw_api_mode': 'string',
        'hw_api_armed': 'boolean',
        'hw_api_gnss_ok': 'boolean',
        'hw_api_gnss_qual': 'float',
        'mag_norm_hz': 'float',
        'hw_api_gnss_fix_type': 'uint8',
        'hw_api_gnss_num_sats': 'uint8',
        'hw_api_gnss_pos_acc': 'float',
        'hw_api_gnss_status_hz': 'float',
        'mag_norm': 'float',
        'battery_volt': 'float',
        'battery_curr': 'float',
        'battery_wh_drained': 'float',
        'thrust': 'float',
        'mass_estimate': 'float',
        'mass_set': 'float',
        'custom_topics': 'sequence<mrs_msgs/CustomTopic>',
        'custom_string_outputs': 'sequence<string>',
        'node_cpu_loads': 'mrs_msgs/NodeCpuLoad',
        'flying_normally': 'boolean',
        'rc_mode': 'boolean',
        'have_goal': 'boolean',
        'tracking_trajectory': 'boolean',
        'callbacks_enabled': 'boolean',
        'collision_avoidance_enabled': 'boolean',
        'avoiding_collision': 'boolean',
        'automatic_start_can_takeoff': 'boolean',
        'num_other_uavs': 'uint16',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'CustomTopic')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'NodeCpuLoad'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.uav_type = kwargs.get('uav_type', str())
        self.uav_mass = kwargs.get('uav_mass', str())
        self.control_manager_diag_hz = kwargs.get('control_manager_diag_hz', float())
        self.control_manager_diag_color = kwargs.get('control_manager_diag_color', int())
        self.controllers = kwargs.get('controllers', [])
        self.gains = kwargs.get('gains', [])
        self.trackers = kwargs.get('trackers', [])
        self.constraints = kwargs.get('constraints', [])
        self.null_tracker = kwargs.get('null_tracker', bool())
        self.secs_flown = kwargs.get('secs_flown', int())
        self.odom_hz = kwargs.get('odom_hz', float())
        self.odom_color = kwargs.get('odom_color', int())
        self.odom_x = kwargs.get('odom_x', float())
        self.odom_y = kwargs.get('odom_y', float())
        self.odom_z = kwargs.get('odom_z', float())
        self.odom_hdg = kwargs.get('odom_hdg', float())
        self.odom_frame = kwargs.get('odom_frame', str())
        self.odom_estimators = kwargs.get('odom_estimators', [])
        self.horizontal_estimator = kwargs.get('horizontal_estimator', str())
        self.vertical_estimator = kwargs.get('vertical_estimator', str())
        self.heading_estimator = kwargs.get('heading_estimator', str())
        self.agl_estimator = kwargs.get('agl_estimator', str())
        self.max_flight_z = kwargs.get('max_flight_z', float())
        self.cmd_x = kwargs.get('cmd_x', float())
        self.cmd_y = kwargs.get('cmd_y', float())
        self.cmd_z = kwargs.get('cmd_z', float())
        self.cmd_hdg = kwargs.get('cmd_hdg', float())
        self.cpu_load = kwargs.get('cpu_load', float())
        self.cpu_load_total = kwargs.get('cpu_load_total', float())
        self.cpu_ghz = kwargs.get('cpu_ghz', float())
        self.cpu_temperature = kwargs.get('cpu_temperature', float())
        self.free_ram = kwargs.get('free_ram', float())
        self.total_ram = kwargs.get('total_ram', float())
        self.free_hdd = kwargs.get('free_hdd', int())
        self.hw_api_hz = kwargs.get('hw_api_hz', float())
        self.hw_api_color = kwargs.get('hw_api_color', int())
        self.hw_api_battery_hz = kwargs.get('hw_api_battery_hz', float())
        self.hw_api_state_hz = kwargs.get('hw_api_state_hz', float())
        self.hw_api_cmd_hz = kwargs.get('hw_api_cmd_hz', float())
        self.hw_api_mode = kwargs.get('hw_api_mode', str())
        self.hw_api_armed = kwargs.get('hw_api_armed', bool())
        self.hw_api_gnss_ok = kwargs.get('hw_api_gnss_ok', bool())
        self.hw_api_gnss_qual = kwargs.get('hw_api_gnss_qual', float())
        self.mag_norm_hz = kwargs.get('mag_norm_hz', float())
        self.hw_api_gnss_fix_type = kwargs.get('hw_api_gnss_fix_type', int())
        self.hw_api_gnss_num_sats = kwargs.get('hw_api_gnss_num_sats', int())
        self.hw_api_gnss_pos_acc = kwargs.get('hw_api_gnss_pos_acc', float())
        self.hw_api_gnss_status_hz = kwargs.get('hw_api_gnss_status_hz', float())
        self.mag_norm = kwargs.get('mag_norm', float())
        self.battery_volt = kwargs.get('battery_volt', float())
        self.battery_curr = kwargs.get('battery_curr', float())
        self.battery_wh_drained = kwargs.get('battery_wh_drained', float())
        self.thrust = kwargs.get('thrust', float())
        self.mass_estimate = kwargs.get('mass_estimate', float())
        self.mass_set = kwargs.get('mass_set', float())
        self.custom_topics = kwargs.get('custom_topics', [])
        self.custom_string_outputs = kwargs.get('custom_string_outputs', [])
        from mrs_msgs.msg import NodeCpuLoad
        self.node_cpu_loads = kwargs.get('node_cpu_loads', NodeCpuLoad())
        self.flying_normally = kwargs.get('flying_normally', bool())
        self.rc_mode = kwargs.get('rc_mode', bool())
        self.have_goal = kwargs.get('have_goal', bool())
        self.tracking_trajectory = kwargs.get('tracking_trajectory', bool())
        self.callbacks_enabled = kwargs.get('callbacks_enabled', bool())
        self.collision_avoidance_enabled = kwargs.get('collision_avoidance_enabled', bool())
        self.avoiding_collision = kwargs.get('avoiding_collision', bool())
        self.automatic_start_can_takeoff = kwargs.get('automatic_start_can_takeoff', bool())
        self.num_other_uavs = kwargs.get('num_other_uavs', int())

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
        if self.uav_type != other.uav_type:
            return False
        if self.uav_mass != other.uav_mass:
            return False
        if self.control_manager_diag_hz != other.control_manager_diag_hz:
            return False
        if self.control_manager_diag_color != other.control_manager_diag_color:
            return False
        if self.controllers != other.controllers:
            return False
        if self.gains != other.gains:
            return False
        if self.trackers != other.trackers:
            return False
        if self.constraints != other.constraints:
            return False
        if self.null_tracker != other.null_tracker:
            return False
        if self.secs_flown != other.secs_flown:
            return False
        if self.odom_hz != other.odom_hz:
            return False
        if self.odom_color != other.odom_color:
            return False
        if self.odom_x != other.odom_x:
            return False
        if self.odom_y != other.odom_y:
            return False
        if self.odom_z != other.odom_z:
            return False
        if self.odom_hdg != other.odom_hdg:
            return False
        if self.odom_frame != other.odom_frame:
            return False
        if self.odom_estimators != other.odom_estimators:
            return False
        if self.horizontal_estimator != other.horizontal_estimator:
            return False
        if self.vertical_estimator != other.vertical_estimator:
            return False
        if self.heading_estimator != other.heading_estimator:
            return False
        if self.agl_estimator != other.agl_estimator:
            return False
        if self.max_flight_z != other.max_flight_z:
            return False
        if self.cmd_x != other.cmd_x:
            return False
        if self.cmd_y != other.cmd_y:
            return False
        if self.cmd_z != other.cmd_z:
            return False
        if self.cmd_hdg != other.cmd_hdg:
            return False
        if self.cpu_load != other.cpu_load:
            return False
        if self.cpu_load_total != other.cpu_load_total:
            return False
        if self.cpu_ghz != other.cpu_ghz:
            return False
        if self.cpu_temperature != other.cpu_temperature:
            return False
        if self.free_ram != other.free_ram:
            return False
        if self.total_ram != other.total_ram:
            return False
        if self.free_hdd != other.free_hdd:
            return False
        if self.hw_api_hz != other.hw_api_hz:
            return False
        if self.hw_api_color != other.hw_api_color:
            return False
        if self.hw_api_battery_hz != other.hw_api_battery_hz:
            return False
        if self.hw_api_state_hz != other.hw_api_state_hz:
            return False
        if self.hw_api_cmd_hz != other.hw_api_cmd_hz:
            return False
        if self.hw_api_mode != other.hw_api_mode:
            return False
        if self.hw_api_armed != other.hw_api_armed:
            return False
        if self.hw_api_gnss_ok != other.hw_api_gnss_ok:
            return False
        if self.hw_api_gnss_qual != other.hw_api_gnss_qual:
            return False
        if self.mag_norm_hz != other.mag_norm_hz:
            return False
        if self.hw_api_gnss_fix_type != other.hw_api_gnss_fix_type:
            return False
        if self.hw_api_gnss_num_sats != other.hw_api_gnss_num_sats:
            return False
        if self.hw_api_gnss_pos_acc != other.hw_api_gnss_pos_acc:
            return False
        if self.hw_api_gnss_status_hz != other.hw_api_gnss_status_hz:
            return False
        if self.mag_norm != other.mag_norm:
            return False
        if self.battery_volt != other.battery_volt:
            return False
        if self.battery_curr != other.battery_curr:
            return False
        if self.battery_wh_drained != other.battery_wh_drained:
            return False
        if self.thrust != other.thrust:
            return False
        if self.mass_estimate != other.mass_estimate:
            return False
        if self.mass_set != other.mass_set:
            return False
        if self.custom_topics != other.custom_topics:
            return False
        if self.custom_string_outputs != other.custom_string_outputs:
            return False
        if self.node_cpu_loads != other.node_cpu_loads:
            return False
        if self.flying_normally != other.flying_normally:
            return False
        if self.rc_mode != other.rc_mode:
            return False
        if self.have_goal != other.have_goal:
            return False
        if self.tracking_trajectory != other.tracking_trajectory:
            return False
        if self.callbacks_enabled != other.callbacks_enabled:
            return False
        if self.collision_avoidance_enabled != other.collision_avoidance_enabled:
            return False
        if self.avoiding_collision != other.avoiding_collision:
            return False
        if self.automatic_start_can_takeoff != other.automatic_start_can_takeoff:
            return False
        if self.num_other_uavs != other.num_other_uavs:
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
    def uav_type(self):
        """Message field 'uav_type'."""
        return self._uav_type

    @uav_type.setter
    def uav_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'uav_type' field must be of type 'str'"
        self._uav_type = value

    @builtins.property
    def uav_mass(self):
        """Message field 'uav_mass'."""
        return self._uav_mass

    @uav_mass.setter
    def uav_mass(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'uav_mass' field must be of type 'str'"
        self._uav_mass = value

    @builtins.property
    def control_manager_diag_hz(self):
        """Message field 'control_manager_diag_hz'."""
        return self._control_manager_diag_hz

    @control_manager_diag_hz.setter
    def control_manager_diag_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'control_manager_diag_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'control_manager_diag_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._control_manager_diag_hz = value

    @builtins.property
    def control_manager_diag_color(self):
        """Message field 'control_manager_diag_color'."""
        return self._control_manager_diag_color

    @control_manager_diag_color.setter
    def control_manager_diag_color(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'control_manager_diag_color' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'control_manager_diag_color' field must be an integer in [-32768, 32767]"
        self._control_manager_diag_color = value

    @builtins.property
    def controllers(self):
        """Message field 'controllers'."""
        return self._controllers

    @controllers.setter
    def controllers(self, value):
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
                "The 'controllers' field must be a set or sequence and each value of type 'str'"
        self._controllers = value

    @builtins.property
    def gains(self):
        """Message field 'gains'."""
        return self._gains

    @gains.setter
    def gains(self, value):
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
                "The 'gains' field must be a set or sequence and each value of type 'str'"
        self._gains = value

    @builtins.property
    def trackers(self):
        """Message field 'trackers'."""
        return self._trackers

    @trackers.setter
    def trackers(self, value):
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
                "The 'trackers' field must be a set or sequence and each value of type 'str'"
        self._trackers = value

    @builtins.property
    def constraints(self):
        """Message field 'constraints'."""
        return self._constraints

    @constraints.setter
    def constraints(self, value):
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
                "The 'constraints' field must be a set or sequence and each value of type 'str'"
        self._constraints = value

    @builtins.property
    def null_tracker(self):
        """Message field 'null_tracker'."""
        return self._null_tracker

    @null_tracker.setter
    def null_tracker(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'null_tracker' field must be of type 'bool'"
        self._null_tracker = value

    @builtins.property
    def secs_flown(self):
        """Message field 'secs_flown'."""
        return self._secs_flown

    @secs_flown.setter
    def secs_flown(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'secs_flown' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'secs_flown' field must be an unsigned integer in [0, 4294967295]"
        self._secs_flown = value

    @builtins.property
    def odom_hz(self):
        """Message field 'odom_hz'."""
        return self._odom_hz

    @odom_hz.setter
    def odom_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_hz = value

    @builtins.property
    def odom_color(self):
        """Message field 'odom_color'."""
        return self._odom_color

    @odom_color.setter
    def odom_color(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'odom_color' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'odom_color' field must be an integer in [-32768, 32767]"
        self._odom_color = value

    @builtins.property
    def odom_x(self):
        """Message field 'odom_x'."""
        return self._odom_x

    @odom_x.setter
    def odom_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_x = value

    @builtins.property
    def odom_y(self):
        """Message field 'odom_y'."""
        return self._odom_y

    @odom_y.setter
    def odom_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_y = value

    @builtins.property
    def odom_z(self):
        """Message field 'odom_z'."""
        return self._odom_z

    @odom_z.setter
    def odom_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_z = value

    @builtins.property
    def odom_hdg(self):
        """Message field 'odom_hdg'."""
        return self._odom_hdg

    @odom_hdg.setter
    def odom_hdg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'odom_hdg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'odom_hdg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._odom_hdg = value

    @builtins.property
    def odom_frame(self):
        """Message field 'odom_frame'."""
        return self._odom_frame

    @odom_frame.setter
    def odom_frame(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'odom_frame' field must be of type 'str'"
        self._odom_frame = value

    @builtins.property
    def odom_estimators(self):
        """Message field 'odom_estimators'."""
        return self._odom_estimators

    @odom_estimators.setter
    def odom_estimators(self, value):
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
                "The 'odom_estimators' field must be a set or sequence and each value of type 'str'"
        self._odom_estimators = value

    @builtins.property
    def horizontal_estimator(self):
        """Message field 'horizontal_estimator'."""
        return self._horizontal_estimator

    @horizontal_estimator.setter
    def horizontal_estimator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'horizontal_estimator' field must be of type 'str'"
        self._horizontal_estimator = value

    @builtins.property
    def vertical_estimator(self):
        """Message field 'vertical_estimator'."""
        return self._vertical_estimator

    @vertical_estimator.setter
    def vertical_estimator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'vertical_estimator' field must be of type 'str'"
        self._vertical_estimator = value

    @builtins.property
    def heading_estimator(self):
        """Message field 'heading_estimator'."""
        return self._heading_estimator

    @heading_estimator.setter
    def heading_estimator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'heading_estimator' field must be of type 'str'"
        self._heading_estimator = value

    @builtins.property
    def agl_estimator(self):
        """Message field 'agl_estimator'."""
        return self._agl_estimator

    @agl_estimator.setter
    def agl_estimator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'agl_estimator' field must be of type 'str'"
        self._agl_estimator = value

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
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_flight_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_flight_z = value

    @builtins.property
    def cmd_x(self):
        """Message field 'cmd_x'."""
        return self._cmd_x

    @cmd_x.setter
    def cmd_x(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cmd_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cmd_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cmd_x = value

    @builtins.property
    def cmd_y(self):
        """Message field 'cmd_y'."""
        return self._cmd_y

    @cmd_y.setter
    def cmd_y(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cmd_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cmd_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cmd_y = value

    @builtins.property
    def cmd_z(self):
        """Message field 'cmd_z'."""
        return self._cmd_z

    @cmd_z.setter
    def cmd_z(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cmd_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cmd_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cmd_z = value

    @builtins.property
    def cmd_hdg(self):
        """Message field 'cmd_hdg'."""
        return self._cmd_hdg

    @cmd_hdg.setter
    def cmd_hdg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cmd_hdg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cmd_hdg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cmd_hdg = value

    @builtins.property
    def cpu_load(self):
        """Message field 'cpu_load'."""
        return self._cpu_load

    @cpu_load.setter
    def cpu_load(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cpu_load' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_load' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_load = value

    @builtins.property
    def cpu_load_total(self):
        """Message field 'cpu_load_total'."""
        return self._cpu_load_total

    @cpu_load_total.setter
    def cpu_load_total(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cpu_load_total' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_load_total' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_load_total = value

    @builtins.property
    def cpu_ghz(self):
        """Message field 'cpu_ghz'."""
        return self._cpu_ghz

    @cpu_ghz.setter
    def cpu_ghz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cpu_ghz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_ghz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_ghz = value

    @builtins.property
    def cpu_temperature(self):
        """Message field 'cpu_temperature'."""
        return self._cpu_temperature

    @cpu_temperature.setter
    def cpu_temperature(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'cpu_temperature' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu_temperature' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu_temperature = value

    @builtins.property
    def free_ram(self):
        """Message field 'free_ram'."""
        return self._free_ram

    @free_ram.setter
    def free_ram(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'free_ram' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'free_ram' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._free_ram = value

    @builtins.property
    def total_ram(self):
        """Message field 'total_ram'."""
        return self._total_ram

    @total_ram.setter
    def total_ram(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'total_ram' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_ram' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_ram = value

    @builtins.property
    def free_hdd(self):
        """Message field 'free_hdd'."""
        return self._free_hdd

    @free_hdd.setter
    def free_hdd(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'free_hdd' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'free_hdd' field must be an integer in [-2147483648, 2147483647]"
        self._free_hdd = value

    @builtins.property
    def hw_api_hz(self):
        """Message field 'hw_api_hz'."""
        return self._hw_api_hz

    @hw_api_hz.setter
    def hw_api_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hw_api_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hw_api_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hw_api_hz = value

    @builtins.property
    def hw_api_color(self):
        """Message field 'hw_api_color'."""
        return self._hw_api_color

    @hw_api_color.setter
    def hw_api_color(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'hw_api_color' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'hw_api_color' field must be an integer in [-32768, 32767]"
        self._hw_api_color = value

    @builtins.property
    def hw_api_battery_hz(self):
        """Message field 'hw_api_battery_hz'."""
        return self._hw_api_battery_hz

    @hw_api_battery_hz.setter
    def hw_api_battery_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hw_api_battery_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hw_api_battery_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hw_api_battery_hz = value

    @builtins.property
    def hw_api_state_hz(self):
        """Message field 'hw_api_state_hz'."""
        return self._hw_api_state_hz

    @hw_api_state_hz.setter
    def hw_api_state_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hw_api_state_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hw_api_state_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hw_api_state_hz = value

    @builtins.property
    def hw_api_cmd_hz(self):
        """Message field 'hw_api_cmd_hz'."""
        return self._hw_api_cmd_hz

    @hw_api_cmd_hz.setter
    def hw_api_cmd_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hw_api_cmd_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hw_api_cmd_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hw_api_cmd_hz = value

    @builtins.property
    def hw_api_mode(self):
        """Message field 'hw_api_mode'."""
        return self._hw_api_mode

    @hw_api_mode.setter
    def hw_api_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'hw_api_mode' field must be of type 'str'"
        self._hw_api_mode = value

    @builtins.property
    def hw_api_armed(self):
        """Message field 'hw_api_armed'."""
        return self._hw_api_armed

    @hw_api_armed.setter
    def hw_api_armed(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'hw_api_armed' field must be of type 'bool'"
        self._hw_api_armed = value

    @builtins.property
    def hw_api_gnss_ok(self):
        """Message field 'hw_api_gnss_ok'."""
        return self._hw_api_gnss_ok

    @hw_api_gnss_ok.setter
    def hw_api_gnss_ok(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'hw_api_gnss_ok' field must be of type 'bool'"
        self._hw_api_gnss_ok = value

    @builtins.property
    def hw_api_gnss_qual(self):
        """Message field 'hw_api_gnss_qual'."""
        return self._hw_api_gnss_qual

    @hw_api_gnss_qual.setter
    def hw_api_gnss_qual(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hw_api_gnss_qual' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hw_api_gnss_qual' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hw_api_gnss_qual = value

    @builtins.property
    def mag_norm_hz(self):
        """Message field 'mag_norm_hz'."""
        return self._mag_norm_hz

    @mag_norm_hz.setter
    def mag_norm_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mag_norm_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_norm_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_norm_hz = value

    @builtins.property
    def hw_api_gnss_fix_type(self):
        """Message field 'hw_api_gnss_fix_type'."""
        return self._hw_api_gnss_fix_type

    @hw_api_gnss_fix_type.setter
    def hw_api_gnss_fix_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'hw_api_gnss_fix_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hw_api_gnss_fix_type' field must be an unsigned integer in [0, 255]"
        self._hw_api_gnss_fix_type = value

    @builtins.property
    def hw_api_gnss_num_sats(self):
        """Message field 'hw_api_gnss_num_sats'."""
        return self._hw_api_gnss_num_sats

    @hw_api_gnss_num_sats.setter
    def hw_api_gnss_num_sats(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'hw_api_gnss_num_sats' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hw_api_gnss_num_sats' field must be an unsigned integer in [0, 255]"
        self._hw_api_gnss_num_sats = value

    @builtins.property
    def hw_api_gnss_pos_acc(self):
        """Message field 'hw_api_gnss_pos_acc'."""
        return self._hw_api_gnss_pos_acc

    @hw_api_gnss_pos_acc.setter
    def hw_api_gnss_pos_acc(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hw_api_gnss_pos_acc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hw_api_gnss_pos_acc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hw_api_gnss_pos_acc = value

    @builtins.property
    def hw_api_gnss_status_hz(self):
        """Message field 'hw_api_gnss_status_hz'."""
        return self._hw_api_gnss_status_hz

    @hw_api_gnss_status_hz.setter
    def hw_api_gnss_status_hz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hw_api_gnss_status_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hw_api_gnss_status_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hw_api_gnss_status_hz = value

    @builtins.property
    def mag_norm(self):
        """Message field 'mag_norm'."""
        return self._mag_norm

    @mag_norm.setter
    def mag_norm(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mag_norm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_norm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_norm = value

    @builtins.property
    def battery_volt(self):
        """Message field 'battery_volt'."""
        return self._battery_volt

    @battery_volt.setter
    def battery_volt(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_volt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_volt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_volt = value

    @builtins.property
    def battery_curr(self):
        """Message field 'battery_curr'."""
        return self._battery_curr

    @battery_curr.setter
    def battery_curr(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_curr' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_curr' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_curr = value

    @builtins.property
    def battery_wh_drained(self):
        """Message field 'battery_wh_drained'."""
        return self._battery_wh_drained

    @battery_wh_drained.setter
    def battery_wh_drained(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'battery_wh_drained' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'battery_wh_drained' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._battery_wh_drained = value

    @builtins.property
    def thrust(self):
        """Message field 'thrust'."""
        return self._thrust

    @thrust.setter
    def thrust(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'thrust' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'thrust' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._thrust = value

    @builtins.property
    def mass_estimate(self):
        """Message field 'mass_estimate'."""
        return self._mass_estimate

    @mass_estimate.setter
    def mass_estimate(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mass_estimate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mass_estimate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mass_estimate = value

    @builtins.property
    def mass_set(self):
        """Message field 'mass_set'."""
        return self._mass_set

    @mass_set.setter
    def mass_set(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'mass_set' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mass_set' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mass_set = value

    @builtins.property
    def custom_topics(self):
        """Message field 'custom_topics'."""
        return self._custom_topics

    @custom_topics.setter
    def custom_topics(self, value):
        if self._check_fields:
            from mrs_msgs.msg import CustomTopic
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
                 all(isinstance(v, CustomTopic) for v in value) and
                 True), \
                "The 'custom_topics' field must be a set or sequence and each value of type 'CustomTopic'"
        self._custom_topics = value

    @builtins.property
    def custom_string_outputs(self):
        """Message field 'custom_string_outputs'."""
        return self._custom_string_outputs

    @custom_string_outputs.setter
    def custom_string_outputs(self, value):
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
                "The 'custom_string_outputs' field must be a set or sequence and each value of type 'str'"
        self._custom_string_outputs = value

    @builtins.property
    def node_cpu_loads(self):
        """Message field 'node_cpu_loads'."""
        return self._node_cpu_loads

    @node_cpu_loads.setter
    def node_cpu_loads(self, value):
        if self._check_fields:
            from mrs_msgs.msg import NodeCpuLoad
            assert \
                isinstance(value, NodeCpuLoad), \
                "The 'node_cpu_loads' field must be a sub message of type 'NodeCpuLoad'"
        self._node_cpu_loads = value

    @builtins.property
    def flying_normally(self):
        """Message field 'flying_normally'."""
        return self._flying_normally

    @flying_normally.setter
    def flying_normally(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'flying_normally' field must be of type 'bool'"
        self._flying_normally = value

    @builtins.property
    def rc_mode(self):
        """Message field 'rc_mode'."""
        return self._rc_mode

    @rc_mode.setter
    def rc_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'rc_mode' field must be of type 'bool'"
        self._rc_mode = value

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
    def collision_avoidance_enabled(self):
        """Message field 'collision_avoidance_enabled'."""
        return self._collision_avoidance_enabled

    @collision_avoidance_enabled.setter
    def collision_avoidance_enabled(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'collision_avoidance_enabled' field must be of type 'bool'"
        self._collision_avoidance_enabled = value

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
    def automatic_start_can_takeoff(self):
        """Message field 'automatic_start_can_takeoff'."""
        return self._automatic_start_can_takeoff

    @automatic_start_can_takeoff.setter
    def automatic_start_can_takeoff(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'automatic_start_can_takeoff' field must be of type 'bool'"
        self._automatic_start_can_takeoff = value

    @builtins.property
    def num_other_uavs(self):
        """Message field 'num_other_uavs'."""
        return self._num_other_uavs

    @num_other_uavs.setter
    def num_other_uavs(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_other_uavs' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'num_other_uavs' field must be an unsigned integer in [0, 65535]"
        self._num_other_uavs = value
