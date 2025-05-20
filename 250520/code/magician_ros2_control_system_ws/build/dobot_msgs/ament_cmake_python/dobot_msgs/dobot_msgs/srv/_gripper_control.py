# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dobot_msgs:srv/GripperControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GripperControl_Request(type):
    """Metaclass of message 'GripperControl_Request'."""

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
            module = import_type_support('dobot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dobot_msgs.srv.GripperControl_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper_control__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper_control__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper_control__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper_control__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper_control__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperControl_Request(metaclass=Metaclass_GripperControl_Request):
    """Message class 'GripperControl_Request'."""

    __slots__ = [
        '_gripper_state',
        '_keep_compressor_running',
    ]

    _fields_and_field_types = {
        'gripper_state': 'string',
        'keep_compressor_running': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.gripper_state = kwargs.get('gripper_state', str())
        self.keep_compressor_running = kwargs.get('keep_compressor_running', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.gripper_state != other.gripper_state:
            return False
        if self.keep_compressor_running != other.keep_compressor_running:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def gripper_state(self):
        """Message field 'gripper_state'."""
        return self._gripper_state

    @gripper_state.setter
    def gripper_state(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'gripper_state' field must be of type 'str'"
        self._gripper_state = value

    @builtins.property
    def keep_compressor_running(self):
        """Message field 'keep_compressor_running'."""
        return self._keep_compressor_running

    @keep_compressor_running.setter
    def keep_compressor_running(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'keep_compressor_running' field must be of type 'bool'"
        self._keep_compressor_running = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GripperControl_Response(type):
    """Metaclass of message 'GripperControl_Response'."""

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
            module = import_type_support('dobot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dobot_msgs.srv.GripperControl_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__gripper_control__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__gripper_control__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__gripper_control__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__gripper_control__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__gripper_control__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GripperControl_Response(metaclass=Metaclass_GripperControl_Response):
    """Message class 'GripperControl_Response'."""

    __slots__ = [
        '_success',
        '_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
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
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
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
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
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
        if __debug__:
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
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'message' field must be of type 'str'"
        self._message = value


class Metaclass_GripperControl(type):
    """Metaclass of service 'GripperControl'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('dobot_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'dobot_msgs.srv.GripperControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__gripper_control

            from dobot_msgs.srv import _gripper_control
            if _gripper_control.Metaclass_GripperControl_Request._TYPE_SUPPORT is None:
                _gripper_control.Metaclass_GripperControl_Request.__import_type_support__()
            if _gripper_control.Metaclass_GripperControl_Response._TYPE_SUPPORT is None:
                _gripper_control.Metaclass_GripperControl_Response.__import_type_support__()


class GripperControl(metaclass=Metaclass_GripperControl):
    from dobot_msgs.srv._gripper_control import GripperControl_Request as Request
    from dobot_msgs.srv._gripper_control import GripperControl_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
