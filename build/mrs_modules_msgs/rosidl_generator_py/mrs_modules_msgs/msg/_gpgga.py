# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/Gpgga.idl
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


class Metaclass_Gpgga(type):
    """Metaclass of message 'Gpgga'."""

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
                'mrs_modules_msgs.msg.Gpgga')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpgga
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpgga
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpgga
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpgga
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpgga

            from mrs_modules_msgs.msg import GpsStatus
            if GpsStatus.__class__._TYPE_SUPPORT is None:
                GpsStatus.__class__.__import_type_support__()

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


class Gpgga(metaclass=Metaclass_Gpgga):
    """Message class 'Gpgga'."""

    __slots__ = [
        '_header',
        '_message_id',
        '_utc_seconds',
        '_latitude',
        '_longitude',
        '_latitude_dir',
        '_longitude_dir',
        '_gps_quality',
        '_num_sats',
        '_hdop',
        '_altitude',
        '_altitude_units',
        '_undulation',
        '_undulation_units',
        '_diff_age',
        '_station_id',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'message_id': 'string',
        'utc_seconds': 'double',
        'latitude': 'double',
        'longitude': 'double',
        'latitude_dir': 'string',
        'longitude_dir': 'string',
        'gps_quality': 'mrs_modules_msgs/GpsStatus',
        'num_sats': 'uint32',
        'hdop': 'float',
        'altitude': 'float',
        'altitude_units': 'string',
        'undulation': 'float',
        'undulation_units': 'string',
        'diff_age': 'uint32',
        'station_id': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_modules_msgs', 'msg'], 'GpsStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.utc_seconds = kwargs.get('utc_seconds', float())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.latitude_dir = kwargs.get('latitude_dir', str())
        self.longitude_dir = kwargs.get('longitude_dir', str())
        from mrs_modules_msgs.msg import GpsStatus
        self.gps_quality = kwargs.get('gps_quality', GpsStatus())
        self.num_sats = kwargs.get('num_sats', int())
        self.hdop = kwargs.get('hdop', float())
        self.altitude = kwargs.get('altitude', float())
        self.altitude_units = kwargs.get('altitude_units', str())
        self.undulation = kwargs.get('undulation', float())
        self.undulation_units = kwargs.get('undulation_units', str())
        self.diff_age = kwargs.get('diff_age', int())
        self.station_id = kwargs.get('station_id', str())

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
        if self.utc_seconds != other.utc_seconds:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.latitude_dir != other.latitude_dir:
            return False
        if self.longitude_dir != other.longitude_dir:
            return False
        if self.gps_quality != other.gps_quality:
            return False
        if self.num_sats != other.num_sats:
            return False
        if self.hdop != other.hdop:
            return False
        if self.altitude != other.altitude:
            return False
        if self.altitude_units != other.altitude_units:
            return False
        if self.undulation != other.undulation:
            return False
        if self.undulation_units != other.undulation_units:
            return False
        if self.diff_age != other.diff_age:
            return False
        if self.station_id != other.station_id:
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
    def utc_seconds(self):
        """Message field 'utc_seconds'."""
        return self._utc_seconds

    @utc_seconds.setter
    def utc_seconds(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'utc_seconds' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'utc_seconds' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._utc_seconds = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude = value

    @builtins.property
    def latitude_dir(self):
        """Message field 'latitude_dir'."""
        return self._latitude_dir

    @latitude_dir.setter
    def latitude_dir(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'latitude_dir' field must be of type 'str'"
        self._latitude_dir = value

    @builtins.property
    def longitude_dir(self):
        """Message field 'longitude_dir'."""
        return self._longitude_dir

    @longitude_dir.setter
    def longitude_dir(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'longitude_dir' field must be of type 'str'"
        self._longitude_dir = value

    @builtins.property
    def gps_quality(self):
        """Message field 'gps_quality'."""
        return self._gps_quality

    @gps_quality.setter
    def gps_quality(self, value):
        if self._check_fields:
            from mrs_modules_msgs.msg import GpsStatus
            assert \
                isinstance(value, GpsStatus), \
                "The 'gps_quality' field must be a sub message of type 'GpsStatus'"
        self._gps_quality = value

    @builtins.property
    def num_sats(self):
        """Message field 'num_sats'."""
        return self._num_sats

    @num_sats.setter
    def num_sats(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_sats' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'num_sats' field must be an unsigned integer in [0, 4294967295]"
        self._num_sats = value

    @builtins.property
    def hdop(self):
        """Message field 'hdop'."""
        return self._hdop

    @hdop.setter
    def hdop(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'hdop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hdop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hdop = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude = value

    @builtins.property
    def altitude_units(self):
        """Message field 'altitude_units'."""
        return self._altitude_units

    @altitude_units.setter
    def altitude_units(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'altitude_units' field must be of type 'str'"
        self._altitude_units = value

    @builtins.property
    def undulation(self):
        """Message field 'undulation'."""
        return self._undulation

    @undulation.setter
    def undulation(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'undulation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'undulation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._undulation = value

    @builtins.property
    def undulation_units(self):
        """Message field 'undulation_units'."""
        return self._undulation_units

    @undulation_units.setter
    def undulation_units(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'undulation_units' field must be of type 'str'"
        self._undulation_units = value

    @builtins.property
    def diff_age(self):
        """Message field 'diff_age'."""
        return self._diff_age

    @diff_age.setter
    def diff_age(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'diff_age' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'diff_age' field must be an unsigned integer in [0, 4294967295]"
        self._diff_age = value

    @builtins.property
    def station_id(self):
        """Message field 'station_id'."""
        return self._station_id

    @station_id.setter
    def station_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'station_id' field must be of type 'str'"
        self._station_id = value
