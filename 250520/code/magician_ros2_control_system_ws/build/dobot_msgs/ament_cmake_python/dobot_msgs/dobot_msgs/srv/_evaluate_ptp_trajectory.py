# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dobot_msgs:srv/EvaluatePTPTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'target'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EvaluatePTPTrajectory_Request(type):
    """Metaclass of message 'EvaluatePTPTrajectory_Request'."""

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
                'dobot_msgs.srv.EvaluatePTPTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__evaluate_ptp_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__evaluate_ptp_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__evaluate_ptp_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__evaluate_ptp_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__evaluate_ptp_trajectory__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EvaluatePTPTrajectory_Request(metaclass=Metaclass_EvaluatePTPTrajectory_Request):
    """Message class 'EvaluatePTPTrajectory_Request'."""

    __slots__ = [
        '_target',
        '_motion_type',
    ]

    _fields_and_field_types = {
        'target': 'double[4]',
        'motion_type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'target' not in kwargs:
            self.target = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.target = numpy.array(kwargs.get('target'), dtype=numpy.float64)
            assert self.target.shape == (4, )
        self.motion_type = kwargs.get('motion_type', int())

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
        if all(self.target != other.target):
            return False
        if self.motion_type != other.motion_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def target(self):
        """Message field 'target'."""
        return self._target

    @target.setter
    def target(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'target' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'target' numpy.ndarray() must have a size of 4"
            self._target = value
            return
        if __debug__:
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'target' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._target = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def motion_type(self):
        """Message field 'motion_type'."""
        return self._motion_type

    @motion_type.setter
    def motion_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motion_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motion_type' field must be an unsigned integer in [0, 255]"
        self._motion_type = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_EvaluatePTPTrajectory_Response(type):
    """Metaclass of message 'EvaluatePTPTrajectory_Response'."""

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
                'dobot_msgs.srv.EvaluatePTPTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__evaluate_ptp_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__evaluate_ptp_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__evaluate_ptp_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__evaluate_ptp_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__evaluate_ptp_trajectory__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EvaluatePTPTrajectory_Response(metaclass=Metaclass_EvaluatePTPTrajectory_Response):
    """Message class 'EvaluatePTPTrajectory_Response'."""

    __slots__ = [
        '_is_valid',
        '_message',
    ]

    _fields_and_field_types = {
        'is_valid': 'boolean',
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
        self.is_valid = kwargs.get('is_valid', bool())
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
        if self.is_valid != other.is_valid:
            return False
        if self.message != other.message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def is_valid(self):
        """Message field 'is_valid'."""
        return self._is_valid

    @is_valid.setter
    def is_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_valid' field must be of type 'bool'"
        self._is_valid = value

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


class Metaclass_EvaluatePTPTrajectory(type):
    """Metaclass of service 'EvaluatePTPTrajectory'."""

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
                'dobot_msgs.srv.EvaluatePTPTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__evaluate_ptp_trajectory

            from dobot_msgs.srv import _evaluate_ptp_trajectory
            if _evaluate_ptp_trajectory.Metaclass_EvaluatePTPTrajectory_Request._TYPE_SUPPORT is None:
                _evaluate_ptp_trajectory.Metaclass_EvaluatePTPTrajectory_Request.__import_type_support__()
            if _evaluate_ptp_trajectory.Metaclass_EvaluatePTPTrajectory_Response._TYPE_SUPPORT is None:
                _evaluate_ptp_trajectory.Metaclass_EvaluatePTPTrajectory_Response.__import_type_support__()


class EvaluatePTPTrajectory(metaclass=Metaclass_EvaluatePTPTrajectory):
    from dobot_msgs.srv._evaluate_ptp_trajectory import EvaluatePTPTrajectory_Request as Request
    from dobot_msgs.srv._evaluate_ptp_trajectory import EvaluatePTPTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
