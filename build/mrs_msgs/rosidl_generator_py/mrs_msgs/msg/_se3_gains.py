# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/Se3Gains.idl
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


class Metaclass_Se3Gains(type):
    """Metaclass of message 'Se3Gains'."""

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
                'mrs_msgs.msg.Se3Gains')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__se3_gains
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__se3_gains
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__se3_gains
            cls._TYPE_SUPPORT = module.type_support_msg__msg__se3_gains
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__se3_gains

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Se3Gains(metaclass=Metaclass_Se3Gains):
    """Message class 'Se3Gains'."""

    __slots__ = [
        '_kpxy',
        '_kvxy',
        '_kaxy',
        '_kpz',
        '_kvz',
        '_kaz',
        '_kibxy',
        '_kibxy_lim',
        '_kiwxy',
        '_kiwxy_lim',
        '_kqrp',
        '_kqy',
        '_km',
        '_km_lim',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'kpxy': 'double',
        'kvxy': 'double',
        'kaxy': 'double',
        'kpz': 'double',
        'kvz': 'double',
        'kaz': 'double',
        'kibxy': 'double',
        'kibxy_lim': 'double',
        'kiwxy': 'double',
        'kiwxy_lim': 'double',
        'kqrp': 'double',
        'kqy': 'double',
        'km': 'double',
        'km_lim': 'double',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
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
        self.kpxy = kwargs.get('kpxy', float())
        self.kvxy = kwargs.get('kvxy', float())
        self.kaxy = kwargs.get('kaxy', float())
        self.kpz = kwargs.get('kpz', float())
        self.kvz = kwargs.get('kvz', float())
        self.kaz = kwargs.get('kaz', float())
        self.kibxy = kwargs.get('kibxy', float())
        self.kibxy_lim = kwargs.get('kibxy_lim', float())
        self.kiwxy = kwargs.get('kiwxy', float())
        self.kiwxy_lim = kwargs.get('kiwxy_lim', float())
        self.kqrp = kwargs.get('kqrp', float())
        self.kqy = kwargs.get('kqy', float())
        self.km = kwargs.get('km', float())
        self.km_lim = kwargs.get('km_lim', float())

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
        if self.kpxy != other.kpxy:
            return False
        if self.kvxy != other.kvxy:
            return False
        if self.kaxy != other.kaxy:
            return False
        if self.kpz != other.kpz:
            return False
        if self.kvz != other.kvz:
            return False
        if self.kaz != other.kaz:
            return False
        if self.kibxy != other.kibxy:
            return False
        if self.kibxy_lim != other.kibxy_lim:
            return False
        if self.kiwxy != other.kiwxy:
            return False
        if self.kiwxy_lim != other.kiwxy_lim:
            return False
        if self.kqrp != other.kqrp:
            return False
        if self.kqy != other.kqy:
            return False
        if self.km != other.km:
            return False
        if self.km_lim != other.km_lim:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def kpxy(self):
        """Message field 'kpxy'."""
        return self._kpxy

    @kpxy.setter
    def kpxy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kpxy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kpxy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kpxy = value

    @builtins.property
    def kvxy(self):
        """Message field 'kvxy'."""
        return self._kvxy

    @kvxy.setter
    def kvxy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kvxy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kvxy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kvxy = value

    @builtins.property
    def kaxy(self):
        """Message field 'kaxy'."""
        return self._kaxy

    @kaxy.setter
    def kaxy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kaxy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kaxy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kaxy = value

    @builtins.property
    def kpz(self):
        """Message field 'kpz'."""
        return self._kpz

    @kpz.setter
    def kpz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kpz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kpz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kpz = value

    @builtins.property
    def kvz(self):
        """Message field 'kvz'."""
        return self._kvz

    @kvz.setter
    def kvz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kvz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kvz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kvz = value

    @builtins.property
    def kaz(self):
        """Message field 'kaz'."""
        return self._kaz

    @kaz.setter
    def kaz(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kaz' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kaz' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kaz = value

    @builtins.property
    def kibxy(self):
        """Message field 'kibxy'."""
        return self._kibxy

    @kibxy.setter
    def kibxy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kibxy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kibxy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kibxy = value

    @builtins.property
    def kibxy_lim(self):
        """Message field 'kibxy_lim'."""
        return self._kibxy_lim

    @kibxy_lim.setter
    def kibxy_lim(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kibxy_lim' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kibxy_lim' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kibxy_lim = value

    @builtins.property
    def kiwxy(self):
        """Message field 'kiwxy'."""
        return self._kiwxy

    @kiwxy.setter
    def kiwxy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kiwxy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kiwxy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kiwxy = value

    @builtins.property
    def kiwxy_lim(self):
        """Message field 'kiwxy_lim'."""
        return self._kiwxy_lim

    @kiwxy_lim.setter
    def kiwxy_lim(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kiwxy_lim' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kiwxy_lim' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kiwxy_lim = value

    @builtins.property
    def kqrp(self):
        """Message field 'kqrp'."""
        return self._kqrp

    @kqrp.setter
    def kqrp(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kqrp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kqrp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kqrp = value

    @builtins.property
    def kqy(self):
        """Message field 'kqy'."""
        return self._kqy

    @kqy.setter
    def kqy(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'kqy' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'kqy' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._kqy = value

    @builtins.property
    def km(self):
        """Message field 'km'."""
        return self._km

    @km.setter
    def km(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'km' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'km' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._km = value

    @builtins.property
    def km_lim(self):
        """Message field 'km_lim'."""
        return self._km_lim

    @km_lim.setter
    def km_lim(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'km_lim' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'km_lim' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._km_lim = value
