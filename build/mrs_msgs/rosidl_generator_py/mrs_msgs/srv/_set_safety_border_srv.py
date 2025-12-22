# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mrs_msgs:srv/SetSafetyBorderSrv.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetSafetyBorderSrv_Request(type):
    """Metaclass of message 'SetSafetyBorderSrv_Request'."""

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
                'mrs_msgs.srv.SetSafetyBorderSrv_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_safety_border_srv__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_safety_border_srv__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_safety_border_srv__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_safety_border_srv__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_safety_border_srv__request

            from mrs_msgs.msg import Prism
            if Prism.__class__._TYPE_SUPPORT is None:
                Prism.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSafetyBorderSrv_Request(metaclass=Metaclass_SetSafetyBorderSrv_Request):
    """Message class 'SetSafetyBorderSrv_Request'."""

    __slots__ = [
        '_prism',
        '_keep_obstacles',
        '_update_world_origin',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'prism': 'mrs_msgs/Prism',
        'keep_obstacles': 'boolean',
        'update_world_origin': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['mrs_msgs', 'msg'], 'Prism'),  # noqa: E501
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
        from mrs_msgs.msg import Prism
        self.prism = kwargs.get('prism', Prism())
        self.keep_obstacles = kwargs.get('keep_obstacles', bool())
        self.update_world_origin = kwargs.get('update_world_origin', bool())

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
        if self.prism != other.prism:
            return False
        if self.keep_obstacles != other.keep_obstacles:
            return False
        if self.update_world_origin != other.update_world_origin:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def prism(self):
        """Message field 'prism'."""
        return self._prism

    @prism.setter
    def prism(self, value):
        if self._check_fields:
            from mrs_msgs.msg import Prism
            assert \
                isinstance(value, Prism), \
                "The 'prism' field must be a sub message of type 'Prism'"
        self._prism = value

    @builtins.property
    def keep_obstacles(self):
        """Message field 'keep_obstacles'."""
        return self._keep_obstacles

    @keep_obstacles.setter
    def keep_obstacles(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'keep_obstacles' field must be of type 'bool'"
        self._keep_obstacles = value

    @builtins.property
    def update_world_origin(self):
        """Message field 'update_world_origin'."""
        return self._update_world_origin

    @update_world_origin.setter
    def update_world_origin(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'update_world_origin' field must be of type 'bool'"
        self._update_world_origin = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetSafetyBorderSrv_Response(type):
    """Metaclass of message 'SetSafetyBorderSrv_Response'."""

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
                'mrs_msgs.srv.SetSafetyBorderSrv_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_safety_border_srv__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_safety_border_srv__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_safety_border_srv__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_safety_border_srv__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_safety_border_srv__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSafetyBorderSrv_Response(metaclass=Metaclass_SetSafetyBorderSrv_Response):
    """Message class 'SetSafetyBorderSrv_Response'."""

    __slots__ = [
        '_success',
        '_message',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.success = kwargs.get('success', bool())
        self.message = kwargs.get('message', str())

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
        if self.success != other.success:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message(self):
        """Message field 'message'."""
        return self._message

    @message.setter
    def message(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetSafetyBorderSrv_Event(type):
    """Metaclass of message 'SetSafetyBorderSrv_Event'."""

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
                'mrs_msgs.srv.SetSafetyBorderSrv_Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_safety_border_srv__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_safety_border_srv__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_safety_border_srv__event
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_safety_border_srv__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_safety_border_srv__event

            from service_msgs.msg import ServiceEventInfo
            if ServiceEventInfo.__class__._TYPE_SUPPORT is None:
                ServiceEventInfo.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetSafetyBorderSrv_Event(metaclass=Metaclass_SetSafetyBorderSrv_Event):
    """Message class 'SetSafetyBorderSrv_Event'."""

    __slots__ = [
        '_info',
        '_request',
        '_response',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'info': 'service_msgs/ServiceEventInfo',
        'request': 'sequence<mrs_msgs/SetSafetyBorderSrv_Request, 1>',
        'response': 'sequence<mrs_msgs/SetSafetyBorderSrv_Response, 1>',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['service_msgs', 'msg'], 'ServiceEventInfo'),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mrs_msgs', 'srv'], 'SetSafetyBorderSrv_Request'), 1),  # noqa: E501
        rosidl_parser.definition.BoundedSequence(rosidl_parser.definition.NamespacedType(['mrs_msgs', 'srv'], 'SetSafetyBorderSrv_Response'), 1),  # noqa: E501
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
        from service_msgs.msg import ServiceEventInfo
        self.info = kwargs.get('info', ServiceEventInfo())
        self.request = kwargs.get('request', [])
        self.response = kwargs.get('response', [])

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
        if self.info != other.info:
            return False
        if self.request != other.request:
            return False
        if self.response != other.response:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if self._check_fields:
            from service_msgs.msg import ServiceEventInfo
            assert \
                isinstance(value, ServiceEventInfo), \
                "The 'info' field must be a sub message of type 'ServiceEventInfo'"
        self._info = value

    @builtins.property
    def request(self):
        """Message field 'request'."""
        return self._request

    @request.setter
    def request(self, value):
        if self._check_fields:
            from mrs_msgs.srv import SetSafetyBorderSrv_Request
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
                 len(value) <= 1 and
                 all(isinstance(v, SetSafetyBorderSrv_Request) for v in value) and
                 True), \
                "The 'request' field must be a set or sequence with length <= 1 and each value of type 'SetSafetyBorderSrv_Request'"
        self._request = value

    @builtins.property
    def response(self):
        """Message field 'response'."""
        return self._response

    @response.setter
    def response(self, value):
        if self._check_fields:
            from mrs_msgs.srv import SetSafetyBorderSrv_Response
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
                 len(value) <= 1 and
                 all(isinstance(v, SetSafetyBorderSrv_Response) for v in value) and
                 True), \
                "The 'response' field must be a set or sequence with length <= 1 and each value of type 'SetSafetyBorderSrv_Response'"
        self._response = value


class Metaclass_SetSafetyBorderSrv(type):
    """Metaclass of service 'SetSafetyBorderSrv'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mrs_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mrs_msgs.srv.SetSafetyBorderSrv')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_safety_border_srv

            from mrs_msgs.srv import _set_safety_border_srv
            if _set_safety_border_srv.Metaclass_SetSafetyBorderSrv_Request._TYPE_SUPPORT is None:
                _set_safety_border_srv.Metaclass_SetSafetyBorderSrv_Request.__import_type_support__()
            if _set_safety_border_srv.Metaclass_SetSafetyBorderSrv_Response._TYPE_SUPPORT is None:
                _set_safety_border_srv.Metaclass_SetSafetyBorderSrv_Response.__import_type_support__()
            if _set_safety_border_srv.Metaclass_SetSafetyBorderSrv_Event._TYPE_SUPPORT is None:
                _set_safety_border_srv.Metaclass_SetSafetyBorderSrv_Event.__import_type_support__()


class SetSafetyBorderSrv(metaclass=Metaclass_SetSafetyBorderSrv):
    from mrs_msgs.srv._set_safety_border_srv import SetSafetyBorderSrv_Request as Request
    from mrs_msgs.srv._set_safety_border_srv import SetSafetyBorderSrv_Response as Response
    from mrs_msgs.srv._set_safety_border_srv import SetSafetyBorderSrv_Event as Event

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
