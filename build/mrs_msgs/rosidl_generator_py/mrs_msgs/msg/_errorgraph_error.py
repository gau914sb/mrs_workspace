# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:msg/ErrorgraphError.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ErrorgraphError(type):
    """Metaclass of message 'ErrorgraphError'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TYPE_WAITING_FOR_TOPIC': 'waiting_for_topic',
        'TYPE_WAITING_FOR_NODE': 'waiting_for_node',
        'TYPE_NOT_REPORTING': 'not_reporting',
        'TYPE_NO_ERROR': 'no_error',
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
                'mrs_msgs.msg.ErrorgraphError')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__errorgraph_error
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__errorgraph_error
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__errorgraph_error
            cls._TYPE_SUPPORT = module.type_support_msg__msg__errorgraph_error
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__errorgraph_error

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from mrs_msgs.msg import ErrorgraphNodeID
            if ErrorgraphNodeID.__class__._TYPE_SUPPORT is None:
                ErrorgraphNodeID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TYPE_WAITING_FOR_TOPIC': cls.__constants['TYPE_WAITING_FOR_TOPIC'],
            'TYPE_WAITING_FOR_NODE': cls.__constants['TYPE_WAITING_FOR_NODE'],
            'TYPE_NOT_REPORTING': cls.__constants['TYPE_NOT_REPORTING'],
            'TYPE_NO_ERROR': cls.__constants['TYPE_NO_ERROR'],
        }

    @property
    def TYPE_WAITING_FOR_TOPIC(self):
        """Message constant 'TYPE_WAITING_FOR_TOPIC'."""
        return Metaclass_ErrorgraphError.__constants['TYPE_WAITING_FOR_TOPIC']

    @property
    def TYPE_WAITING_FOR_NODE(self):
        """Message constant 'TYPE_WAITING_FOR_NODE'."""
        return Metaclass_ErrorgraphError.__constants['TYPE_WAITING_FOR_NODE']

    @property
    def TYPE_NOT_REPORTING(self):
        """Message constant 'TYPE_NOT_REPORTING'."""
        return Metaclass_ErrorgraphError.__constants['TYPE_NOT_REPORTING']

    @property
    def TYPE_NO_ERROR(self):
        """Message constant 'TYPE_NO_ERROR'."""
        return Metaclass_ErrorgraphError.__constants['TYPE_NO_ERROR']


class ErrorgraphError(metaclass=Metaclass_ErrorgraphError):
    """
    Message class 'ErrorgraphError'.

    Constants:
      TYPE_WAITING_FOR_TOPIC
      TYPE_WAITING_FOR_NODE
      TYPE_NOT_REPORTING
      TYPE_NO_ERROR
    """

    __slots__ = [
        '_stamp',
        '_type',
        '_waited_for_topic',
        '_waited_for_node',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'type': 'string',
        'waited_for_topic': 'string',
        'waited_for_node': 'mrs_msgs/ErrorgraphNodeID',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'ErrorgraphNodeID'),  # noqa: E501
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
        self.type = kwargs.get('type', str())
        self.waited_for_topic = kwargs.get('waited_for_topic', str())
        from mrs_msgs.msg import ErrorgraphNodeID
        self.waited_for_node = kwargs.get('waited_for_node', ErrorgraphNodeID())

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
        if self.type != other.type:
            return False
        if self.waited_for_topic != other.waited_for_topic:
            return False
        if self.waited_for_node != other.waited_for_node:
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

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'type' field must be of type 'str'"
        self._type = value

    @builtins.property
    def waited_for_topic(self):
        """Message field 'waited_for_topic'."""
        return self._waited_for_topic

    @waited_for_topic.setter
    def waited_for_topic(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'waited_for_topic' field must be of type 'str'"
        self._waited_for_topic = value

    @builtins.property
    def waited_for_node(self):
        """Message field 'waited_for_node'."""
        return self._waited_for_node

    @waited_for_node.setter
    def waited_for_node(self, value):
        if self._check_fields:
            from mrs_msgs.msg import ErrorgraphNodeID
            assert \
                isinstance(value, ErrorgraphNodeID), \
                "The 'waited_for_node' field must be a sub message of type 'ErrorgraphNodeID'"
        self._waited_for_node = value
