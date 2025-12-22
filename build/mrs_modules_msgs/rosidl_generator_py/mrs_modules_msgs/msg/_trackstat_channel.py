# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_modules_msgs:msg/TrackstatChannel.idl
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


class Metaclass_TrackstatChannel(type):
    """Metaclass of message 'TrackstatChannel'."""

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
                'mrs_modules_msgs.msg.TrackstatChannel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__trackstat_channel
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__trackstat_channel
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__trackstat_channel
            cls._TYPE_SUPPORT = module.type_support_msg__msg__trackstat_channel
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__trackstat_channel

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class TrackstatChannel(metaclass=Metaclass_TrackstatChannel):
    """Message class 'TrackstatChannel'."""

    __slots__ = [
        '_prn',
        '_glofreq',
        '_ch_tr_status',
        '_psr',
        '_doppler',
        '_c_no',
        '_locktime',
        '_psr_res',
        '_reject',
        '_psr_weight',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'prn': 'int16',
        'glofreq': 'int16',
        'ch_tr_status': 'uint32',
        'psr': 'double',
        'doppler': 'float',
        'c_no': 'float',
        'locktime': 'float',
        'psr_res': 'float',
        'reject': 'string',
        'psr_weight': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.prn = kwargs.get('prn', int())
        self.glofreq = kwargs.get('glofreq', int())
        self.ch_tr_status = kwargs.get('ch_tr_status', int())
        self.psr = kwargs.get('psr', float())
        self.doppler = kwargs.get('doppler', float())
        self.c_no = kwargs.get('c_no', float())
        self.locktime = kwargs.get('locktime', float())
        self.psr_res = kwargs.get('psr_res', float())
        self.reject = kwargs.get('reject', str())
        self.psr_weight = kwargs.get('psr_weight', float())

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
        if self.prn != other.prn:
            return False
        if self.glofreq != other.glofreq:
            return False
        if self.ch_tr_status != other.ch_tr_status:
            return False
        if self.psr != other.psr:
            return False
        if self.doppler != other.doppler:
            return False
        if self.c_no != other.c_no:
            return False
        if self.locktime != other.locktime:
            return False
        if self.psr_res != other.psr_res:
            return False
        if self.reject != other.reject:
            return False
        if self.psr_weight != other.psr_weight:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def prn(self):
        """Message field 'prn'."""
        return self._prn

    @prn.setter
    def prn(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'prn' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'prn' field must be an integer in [-32768, 32767]"
        self._prn = value

    @builtins.property
    def glofreq(self):
        """Message field 'glofreq'."""
        return self._glofreq

    @glofreq.setter
    def glofreq(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'glofreq' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'glofreq' field must be an integer in [-32768, 32767]"
        self._glofreq = value

    @builtins.property
    def ch_tr_status(self):
        """Message field 'ch_tr_status'."""
        return self._ch_tr_status

    @ch_tr_status.setter
    def ch_tr_status(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'ch_tr_status' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ch_tr_status' field must be an unsigned integer in [0, 4294967295]"
        self._ch_tr_status = value

    @builtins.property
    def psr(self):
        """Message field 'psr'."""
        return self._psr

    @psr.setter
    def psr(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'psr' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'psr' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._psr = value

    @builtins.property
    def doppler(self):
        """Message field 'doppler'."""
        return self._doppler

    @doppler.setter
    def doppler(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'doppler' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'doppler' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._doppler = value

    @builtins.property
    def c_no(self):
        """Message field 'c_no'."""
        return self._c_no

    @c_no.setter
    def c_no(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'c_no' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'c_no' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._c_no = value

    @builtins.property
    def locktime(self):
        """Message field 'locktime'."""
        return self._locktime

    @locktime.setter
    def locktime(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'locktime' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'locktime' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._locktime = value

    @builtins.property
    def psr_res(self):
        """Message field 'psr_res'."""
        return self._psr_res

    @psr_res.setter
    def psr_res(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'psr_res' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'psr_res' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._psr_res = value

    @builtins.property
    def reject(self):
        """Message field 'reject'."""
        return self._reject

    @reject.setter
    def reject(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'reject' field must be of type 'str'"
        self._reject = value

    @builtins.property
    def psr_weight(self):
        """Message field 'psr_weight'."""
        return self._psr_weight

    @psr_weight.setter
    def psr_weight(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'psr_weight' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'psr_weight' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._psr_weight = value
