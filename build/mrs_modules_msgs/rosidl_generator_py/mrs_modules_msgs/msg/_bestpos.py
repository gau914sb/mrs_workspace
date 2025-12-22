# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/Bestpos.idl
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


class Metaclass_Bestpos(type):
    """Metaclass of message 'Bestpos'."""

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
                'mrs_modules_msgs.msg.Bestpos')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__bestpos
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__bestpos
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__bestpos
            cls._TYPE_SUPPORT = module.type_support_msg__msg__bestpos
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__bestpos

            from mrs_modules_msgs.msg import TersusMessageHeader
            if TersusMessageHeader.__class__._TYPE_SUPPORT is None:
                TersusMessageHeader.__class__.__import_type_support__()

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


class Bestpos(metaclass=Metaclass_Bestpos):
    """Message class 'Bestpos'."""

    __slots__ = [
        '_header',
        '_tersus_msg_header',
        '_solution_status',
        '_position_type',
        '_latitude',
        '_longitude',
        '_height',
        '_undulation',
        '_datum_id',
        '_latitude_std',
        '_longitude_std',
        '_height_std',
        '_base_station_id',
        '_diff_age',
        '_solution_age',
        '_num_satellites_tracked',
        '_num_satellites_used_in_solution',
        '_num_gps_and_glonass_l1_used_in_solution',
        '_num_gps_and_glonass_l1_and_l2_used_in_solution',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'tersus_msg_header': 'mrs_modules_msgs/TersusMessageHeader',
        'solution_status': 'string',
        'position_type': 'string',
        'latitude': 'double',
        'longitude': 'double',
        'height': 'double',
        'undulation': 'float',
        'datum_id': 'string',
        'latitude_std': 'float',
        'longitude_std': 'float',
        'height_std': 'float',
        'base_station_id': 'string',
        'diff_age': 'float',
        'solution_age': 'float',
        'num_satellites_tracked': 'uint8',
        'num_satellites_used_in_solution': 'uint8',
        'num_gps_and_glonass_l1_used_in_solution': 'uint8',
        'num_gps_and_glonass_l1_and_l2_used_in_solution': 'uint8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_modules_msgs', 'msg'], 'TersusMessageHeader'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        from mrs_modules_msgs.msg import TersusMessageHeader
        self.tersus_msg_header = kwargs.get('tersus_msg_header', TersusMessageHeader())
        self.solution_status = kwargs.get('solution_status', str())
        self.position_type = kwargs.get('position_type', str())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.height = kwargs.get('height', float())
        self.undulation = kwargs.get('undulation', float())
        self.datum_id = kwargs.get('datum_id', str())
        self.latitude_std = kwargs.get('latitude_std', float())
        self.longitude_std = kwargs.get('longitude_std', float())
        self.height_std = kwargs.get('height_std', float())
        self.base_station_id = kwargs.get('base_station_id', str())
        self.diff_age = kwargs.get('diff_age', float())
        self.solution_age = kwargs.get('solution_age', float())
        self.num_satellites_tracked = kwargs.get('num_satellites_tracked', int())
        self.num_satellites_used_in_solution = kwargs.get('num_satellites_used_in_solution', int())
        self.num_gps_and_glonass_l1_used_in_solution = kwargs.get('num_gps_and_glonass_l1_used_in_solution', int())
        self.num_gps_and_glonass_l1_and_l2_used_in_solution = kwargs.get('num_gps_and_glonass_l1_and_l2_used_in_solution', int())

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
        if self.tersus_msg_header != other.tersus_msg_header:
            return False
        if self.solution_status != other.solution_status:
            return False
        if self.position_type != other.position_type:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.height != other.height:
            return False
        if self.undulation != other.undulation:
            return False
        if self.datum_id != other.datum_id:
            return False
        if self.latitude_std != other.latitude_std:
            return False
        if self.longitude_std != other.longitude_std:
            return False
        if self.height_std != other.height_std:
            return False
        if self.base_station_id != other.base_station_id:
            return False
        if self.diff_age != other.diff_age:
            return False
        if self.solution_age != other.solution_age:
            return False
        if self.num_satellites_tracked != other.num_satellites_tracked:
            return False
        if self.num_satellites_used_in_solution != other.num_satellites_used_in_solution:
            return False
        if self.num_gps_and_glonass_l1_used_in_solution != other.num_gps_and_glonass_l1_used_in_solution:
            return False
        if self.num_gps_and_glonass_l1_and_l2_used_in_solution != other.num_gps_and_glonass_l1_and_l2_used_in_solution:
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
    def tersus_msg_header(self):
        """Message field 'tersus_msg_header'."""
        return self._tersus_msg_header

    @tersus_msg_header.setter
    def tersus_msg_header(self, value):
        if self._check_fields:
            from mrs_modules_msgs.msg import TersusMessageHeader
            assert \
                isinstance(value, TersusMessageHeader), \
                "The 'tersus_msg_header' field must be a sub message of type 'TersusMessageHeader'"
        self._tersus_msg_header = value

    @builtins.property
    def solution_status(self):
        """Message field 'solution_status'."""
        return self._solution_status

    @solution_status.setter
    def solution_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'solution_status' field must be of type 'str'"
        self._solution_status = value

    @builtins.property
    def position_type(self):
        """Message field 'position_type'."""
        return self._position_type

    @position_type.setter
    def position_type(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'position_type' field must be of type 'str'"
        self._position_type = value

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
    def height(self):
        """Message field 'height'."""
        return self._height

    @height.setter
    def height(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'height' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'height' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._height = value

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
    def datum_id(self):
        """Message field 'datum_id'."""
        return self._datum_id

    @datum_id.setter
    def datum_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'datum_id' field must be of type 'str'"
        self._datum_id = value

    @builtins.property
    def latitude_std(self):
        """Message field 'latitude_std'."""
        return self._latitude_std

    @latitude_std.setter
    def latitude_std(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'latitude_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latitude_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latitude_std = value

    @builtins.property
    def longitude_std(self):
        """Message field 'longitude_std'."""
        return self._longitude_std

    @longitude_std.setter
    def longitude_std(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'longitude_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longitude_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longitude_std = value

    @builtins.property
    def height_std(self):
        """Message field 'height_std'."""
        return self._height_std

    @height_std.setter
    def height_std(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'height_std' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'height_std' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._height_std = value

    @builtins.property
    def base_station_id(self):
        """Message field 'base_station_id'."""
        return self._base_station_id

    @base_station_id.setter
    def base_station_id(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'base_station_id' field must be of type 'str'"
        self._base_station_id = value

    @builtins.property
    def diff_age(self):
        """Message field 'diff_age'."""
        return self._diff_age

    @diff_age.setter
    def diff_age(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'diff_age' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'diff_age' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._diff_age = value

    @builtins.property
    def solution_age(self):
        """Message field 'solution_age'."""
        return self._solution_age

    @solution_age.setter
    def solution_age(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'solution_age' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'solution_age' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._solution_age = value

    @builtins.property
    def num_satellites_tracked(self):
        """Message field 'num_satellites_tracked'."""
        return self._num_satellites_tracked

    @num_satellites_tracked.setter
    def num_satellites_tracked(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_satellites_tracked' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_satellites_tracked' field must be an unsigned integer in [0, 255]"
        self._num_satellites_tracked = value

    @builtins.property
    def num_satellites_used_in_solution(self):
        """Message field 'num_satellites_used_in_solution'."""
        return self._num_satellites_used_in_solution

    @num_satellites_used_in_solution.setter
    def num_satellites_used_in_solution(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_satellites_used_in_solution' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_satellites_used_in_solution' field must be an unsigned integer in [0, 255]"
        self._num_satellites_used_in_solution = value

    @builtins.property
    def num_gps_and_glonass_l1_used_in_solution(self):
        """Message field 'num_gps_and_glonass_l1_used_in_solution'."""
        return self._num_gps_and_glonass_l1_used_in_solution

    @num_gps_and_glonass_l1_used_in_solution.setter
    def num_gps_and_glonass_l1_used_in_solution(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_gps_and_glonass_l1_used_in_solution' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_gps_and_glonass_l1_used_in_solution' field must be an unsigned integer in [0, 255]"
        self._num_gps_and_glonass_l1_used_in_solution = value

    @builtins.property
    def num_gps_and_glonass_l1_and_l2_used_in_solution(self):
        """Message field 'num_gps_and_glonass_l1_and_l2_used_in_solution'."""
        return self._num_gps_and_glonass_l1_and_l2_used_in_solution

    @num_gps_and_glonass_l1_and_l2_used_in_solution.setter
    def num_gps_and_glonass_l1_and_l2_used_in_solution(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'num_gps_and_glonass_l1_and_l2_used_in_solution' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_gps_and_glonass_l1_and_l2_used_in_solution' field must be an unsigned integer in [0, 255]"
        self._num_gps_and_glonass_l1_and_l2_used_in_solution = value
