# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/Gpvtg.idl
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


class Metaclass_Gpvtg(type):
    """Metaclass of message 'Gpvtg'."""

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
                'mrs_modules_msgs.msg.Gpvtg')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpvtg
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpvtg
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpvtg
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpvtg
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpvtg

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


class Gpvtg(metaclass=Metaclass_Gpvtg):
    """Message class 'Gpvtg'."""

    __slots__ = [
        '_header',
        '_message_id',
        '_track_true',
        '_track_true_indicator',
        '_track_mag',
        '_track_mag_indicator',
        '_speed_knots',
        '_speed_knots_indicator',
        '_speed_kmh',
        '_speed_kmh_indicator',
        '_mode_indicator',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_id': 'string',
        'track_true': 'double',
        'track_true_indicator': 'string',
        'track_mag': 'double',
        'track_mag_indicator': 'string',
        'speed_knots': 'double',
        'speed_knots_indicator': 'string',
        'speed_kmh': 'double',
        'speed_kmh_indicator': 'string',
        'mode_indicator': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.message_id = kwargs.get('message_id', str())
        self.track_true = kwargs.get('track_true', float())
        self.track_true_indicator = kwargs.get('track_true_indicator', str())
        self.track_mag = kwargs.get('track_mag', float())
        self.track_mag_indicator = kwargs.get('track_mag_indicator', str())
        self.speed_knots = kwargs.get('speed_knots', float())
        self.speed_knots_indicator = kwargs.get('speed_knots_indicator', str())
        self.speed_kmh = kwargs.get('speed_kmh', float())
        self.speed_kmh_indicator = kwargs.get('speed_kmh_indicator', str())
        self.mode_indicator = kwargs.get('mode_indicator', str())

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
        if self.message_id != other.message_id:
            return False
        if self.track_true != other.track_true:
            return False
        if self.track_true_indicator != other.track_true_indicator:
            return False
        if self.track_mag != other.track_mag:
            return False
        if self.track_mag_indicator != other.track_mag_indicator:
            return False
        if self.speed_knots != other.speed_knots:
            return False
        if self.speed_knots_indicator != other.speed_knots_indicator:
            return False
        if self.speed_kmh != other.speed_kmh:
            return False
        if self.speed_kmh_indicator != other.speed_kmh_indicator:
            return False
        if self.mode_indicator != other.mode_indicator:
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
    def message_id(self):
        """Message field 'message_id'."""
        return self._message_id

    @message_id.setter
    def message_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message_id' field must be of type 'str'"
        self._message_id = value

    @builtins.property
    def track_true(self):
        """Message field 'track_true'."""
        return self._track_true

    @track_true.setter
    def track_true(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'track_true' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'track_true' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._track_true = value

    @builtins.property
    def track_true_indicator(self):
        """Message field 'track_true_indicator'."""
        return self._track_true_indicator

    @track_true_indicator.setter
    def track_true_indicator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'track_true_indicator' field must be of type 'str'"
        self._track_true_indicator = value

    @builtins.property
    def track_mag(self):
        """Message field 'track_mag'."""
        return self._track_mag

    @track_mag.setter
    def track_mag(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'track_mag' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'track_mag' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._track_mag = value

    @builtins.property
    def track_mag_indicator(self):
        """Message field 'track_mag_indicator'."""
        return self._track_mag_indicator

    @track_mag_indicator.setter
    def track_mag_indicator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'track_mag_indicator' field must be of type 'str'"
        self._track_mag_indicator = value

    @builtins.property
    def speed_knots(self):
        """Message field 'speed_knots'."""
        return self._speed_knots

    @speed_knots.setter
    def speed_knots(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_knots' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_knots' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_knots = value

    @builtins.property
    def speed_knots_indicator(self):
        """Message field 'speed_knots_indicator'."""
        return self._speed_knots_indicator

    @speed_knots_indicator.setter
    def speed_knots_indicator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'speed_knots_indicator' field must be of type 'str'"
        self._speed_knots_indicator = value

    @builtins.property
    def speed_kmh(self):
        """Message field 'speed_kmh'."""
        return self._speed_kmh

    @speed_kmh.setter
    def speed_kmh(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'speed_kmh' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'speed_kmh' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._speed_kmh = value

    @builtins.property
    def speed_kmh_indicator(self):
        """Message field 'speed_kmh_indicator'."""
        return self._speed_kmh_indicator

    @speed_kmh_indicator.setter
    def speed_kmh_indicator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'speed_kmh_indicator' field must be of type 'str'"
        self._speed_kmh_indicator = value

    @builtins.property
    def mode_indicator(self):
        """Message field 'mode_indicator'."""
        return self._mode_indicator

    @mode_indicator.setter
    def mode_indicator(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mode_indicator' field must be of type 'str'"
        self._mode_indicator = value
