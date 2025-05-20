# generated from rosidl_generator_py/resource/_idl.py.em
# with input from dobot_msgs:action/PointToPoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'target_pose'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PointToPoint_Goal(type):
    """Metaclass of message 'PointToPoint_Goal'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MOTION_TYPE_MOVJ_XYZ': 1,
        'MOTION_TYPE_MOVL_XYZ': 2,
        'MOTION_TYPE_MOVJ_ANGLE': 4,
        'MOTION_TYPE_MOVL_ANGLE': 5,
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
                'dobot_msgs.action.PointToPoint_Goal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__point_to_point__goal
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__point_to_point__goal
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__point_to_point__goal
            cls._TYPE_SUPPORT = module.type_support_msg__action__point_to_point__goal
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__point_to_point__goal

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MOTION_TYPE_MOVJ_XYZ': cls.__constants['MOTION_TYPE_MOVJ_XYZ'],
            'MOTION_TYPE_MOVL_XYZ': cls.__constants['MOTION_TYPE_MOVL_XYZ'],
            'MOTION_TYPE_MOVJ_ANGLE': cls.__constants['MOTION_TYPE_MOVJ_ANGLE'],
            'MOTION_TYPE_MOVL_ANGLE': cls.__constants['MOTION_TYPE_MOVL_ANGLE'],
            'VELOCITY_RATIO__DEFAULT': 1.0,
            'ACCELERATION_RATIO__DEFAULT': 1.0,
        }

    @property
    def MOTION_TYPE_MOVJ_XYZ(self):
        """Message constant 'MOTION_TYPE_MOVJ_XYZ'."""
        return Metaclass_PointToPoint_Goal.__constants['MOTION_TYPE_MOVJ_XYZ']

    @property
    def MOTION_TYPE_MOVL_XYZ(self):
        """Message constant 'MOTION_TYPE_MOVL_XYZ'."""
        return Metaclass_PointToPoint_Goal.__constants['MOTION_TYPE_MOVL_XYZ']

    @property
    def MOTION_TYPE_MOVJ_ANGLE(self):
        """Message constant 'MOTION_TYPE_MOVJ_ANGLE'."""
        return Metaclass_PointToPoint_Goal.__constants['MOTION_TYPE_MOVJ_ANGLE']

    @property
    def MOTION_TYPE_MOVL_ANGLE(self):
        """Message constant 'MOTION_TYPE_MOVL_ANGLE'."""
        return Metaclass_PointToPoint_Goal.__constants['MOTION_TYPE_MOVL_ANGLE']

    @property
    def VELOCITY_RATIO__DEFAULT(cls):
        """Return default value for message field 'velocity_ratio'."""
        return 1.0

    @property
    def ACCELERATION_RATIO__DEFAULT(cls):
        """Return default value for message field 'acceleration_ratio'."""
        return 1.0


class PointToPoint_Goal(metaclass=Metaclass_PointToPoint_Goal):
    """
    Message class 'PointToPoint_Goal'.

    Constants:
      MOTION_TYPE_MOVJ_XYZ
      MOTION_TYPE_MOVL_XYZ
      MOTION_TYPE_MOVJ_ANGLE
      MOTION_TYPE_MOVL_ANGLE
    """

    __slots__ = [
        '_motion_type',
        '_target_pose',
        '_velocity_ratio',
        '_acceleration_ratio',
    ]

    _fields_and_field_types = {
        'motion_type': 'uint8',
        'target_pose': 'double[4]',
        'velocity_ratio': 'double',
        'acceleration_ratio': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motion_type = kwargs.get('motion_type', int())
        if 'target_pose' not in kwargs:
            self.target_pose = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.target_pose = numpy.array(kwargs.get('target_pose'), dtype=numpy.float64)
            assert self.target_pose.shape == (4, )
        self.velocity_ratio = kwargs.get(
            'velocity_ratio', PointToPoint_Goal.VELOCITY_RATIO__DEFAULT)
        self.acceleration_ratio = kwargs.get(
            'acceleration_ratio', PointToPoint_Goal.ACCELERATION_RATIO__DEFAULT)

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
        if self.motion_type != other.motion_type:
            return False
        if all(self.target_pose != other.target_pose):
            return False
        if self.velocity_ratio != other.velocity_ratio:
            return False
        if self.acceleration_ratio != other.acceleration_ratio:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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

    @builtins.property
    def target_pose(self):
        """Message field 'target_pose'."""
        return self._target_pose

    @target_pose.setter
    def target_pose(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'target_pose' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'target_pose' numpy.ndarray() must have a size of 4"
            self._target_pose = value
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
                "The 'target_pose' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._target_pose = numpy.array(value, dtype=numpy.float64)

    @builtins.property
    def velocity_ratio(self):
        """Message field 'velocity_ratio'."""
        return self._velocity_ratio

    @velocity_ratio.setter
    def velocity_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velocity_ratio' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'velocity_ratio' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._velocity_ratio = value

    @builtins.property
    def acceleration_ratio(self):
        """Message field 'acceleration_ratio'."""
        return self._acceleration_ratio

    @acceleration_ratio.setter
    def acceleration_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceleration_ratio' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'acceleration_ratio' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._acceleration_ratio = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# Member 'achieved_pose'
# already imported above
# import numpy

# already imported above
# import rosidl_parser.definition


class Metaclass_PointToPoint_Result(type):
    """Metaclass of message 'PointToPoint_Result'."""

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
                'dobot_msgs.action.PointToPoint_Result')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__point_to_point__result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__point_to_point__result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__point_to_point__result
            cls._TYPE_SUPPORT = module.type_support_msg__action__point_to_point__result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__point_to_point__result

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PointToPoint_Result(metaclass=Metaclass_PointToPoint_Result):
    """Message class 'PointToPoint_Result'."""

    __slots__ = [
        '_achieved_pose',
    ]

    _fields_and_field_types = {
        'achieved_pose': 'double[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'achieved_pose' not in kwargs:
            self.achieved_pose = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.achieved_pose = numpy.array(kwargs.get('achieved_pose'), dtype=numpy.float64)
            assert self.achieved_pose.shape == (4, )

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
        if all(self.achieved_pose != other.achieved_pose):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def achieved_pose(self):
        """Message field 'achieved_pose'."""
        return self._achieved_pose

    @achieved_pose.setter
    def achieved_pose(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'achieved_pose' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'achieved_pose' numpy.ndarray() must have a size of 4"
            self._achieved_pose = value
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
                "The 'achieved_pose' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._achieved_pose = numpy.array(value, dtype=numpy.float64)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import math

# Member 'current_pose'
# already imported above
# import numpy

# already imported above
# import rosidl_parser.definition


class Metaclass_PointToPoint_Feedback(type):
    """Metaclass of message 'PointToPoint_Feedback'."""

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
                'dobot_msgs.action.PointToPoint_Feedback')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__point_to_point__feedback
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__point_to_point__feedback
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__point_to_point__feedback
            cls._TYPE_SUPPORT = module.type_support_msg__action__point_to_point__feedback
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__point_to_point__feedback

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PointToPoint_Feedback(metaclass=Metaclass_PointToPoint_Feedback):
    """Message class 'PointToPoint_Feedback'."""

    __slots__ = [
        '_current_pose',
    ]

    _fields_and_field_types = {
        'current_pose': 'double[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('double'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        if 'current_pose' not in kwargs:
            self.current_pose = numpy.zeros(4, dtype=numpy.float64)
        else:
            self.current_pose = numpy.array(kwargs.get('current_pose'), dtype=numpy.float64)
            assert self.current_pose.shape == (4, )

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
        if all(self.current_pose != other.current_pose):
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def current_pose(self):
        """Message field 'current_pose'."""
        return self._current_pose

    @current_pose.setter
    def current_pose(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float64, \
                "The 'current_pose' numpy.ndarray() must have the dtype of 'numpy.float64'"
            assert value.size == 4, \
                "The 'current_pose' numpy.ndarray() must have a size of 4"
            self._current_pose = value
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
                "The 'current_pose' field must be a set or sequence with length 4 and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._current_pose = numpy.array(value, dtype=numpy.float64)


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PointToPoint_SendGoal_Request(type):
    """Metaclass of message 'PointToPoint_SendGoal_Request'."""

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
                'dobot_msgs.action.PointToPoint_SendGoal_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__point_to_point__send_goal__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__point_to_point__send_goal__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__point_to_point__send_goal__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__point_to_point__send_goal__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__point_to_point__send_goal__request

            from dobot_msgs.action import PointToPoint
            if PointToPoint.Goal.__class__._TYPE_SUPPORT is None:
                PointToPoint.Goal.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PointToPoint_SendGoal_Request(metaclass=Metaclass_PointToPoint_SendGoal_Request):
    """Message class 'PointToPoint_SendGoal_Request'."""

    __slots__ = [
        '_goal_id',
        '_goal',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'goal': 'dobot_msgs/PointToPoint_Goal',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dobot_msgs', 'action'], 'PointToPoint_Goal'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from dobot_msgs.action._point_to_point import PointToPoint_Goal
        self.goal = kwargs.get('goal', PointToPoint_Goal())

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
        if self.goal_id != other.goal_id:
            return False
        if self.goal != other.goal:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def goal(self):
        """Message field 'goal'."""
        return self._goal

    @goal.setter
    def goal(self, value):
        if __debug__:
            from dobot_msgs.action._point_to_point import PointToPoint_Goal
            assert \
                isinstance(value, PointToPoint_Goal), \
                "The 'goal' field must be a sub message of type 'PointToPoint_Goal'"
        self._goal = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PointToPoint_SendGoal_Response(type):
    """Metaclass of message 'PointToPoint_SendGoal_Response'."""

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
                'dobot_msgs.action.PointToPoint_SendGoal_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__point_to_point__send_goal__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__point_to_point__send_goal__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__point_to_point__send_goal__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__point_to_point__send_goal__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__point_to_point__send_goal__response

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PointToPoint_SendGoal_Response(metaclass=Metaclass_PointToPoint_SendGoal_Response):
    """Message class 'PointToPoint_SendGoal_Response'."""

    __slots__ = [
        '_accepted',
        '_stamp',
    ]

    _fields_and_field_types = {
        'accepted': 'boolean',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.accepted = kwargs.get('accepted', bool())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

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
        if self.accepted != other.accepted:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def accepted(self):
        """Message field 'accepted'."""
        return self._accepted

    @accepted.setter
    def accepted(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accepted' field must be of type 'bool'"
        self._accepted = value

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value


class Metaclass_PointToPoint_SendGoal(type):
    """Metaclass of service 'PointToPoint_SendGoal'."""

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
                'dobot_msgs.action.PointToPoint_SendGoal')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__point_to_point__send_goal

            from dobot_msgs.action import _point_to_point
            if _point_to_point.Metaclass_PointToPoint_SendGoal_Request._TYPE_SUPPORT is None:
                _point_to_point.Metaclass_PointToPoint_SendGoal_Request.__import_type_support__()
            if _point_to_point.Metaclass_PointToPoint_SendGoal_Response._TYPE_SUPPORT is None:
                _point_to_point.Metaclass_PointToPoint_SendGoal_Response.__import_type_support__()


class PointToPoint_SendGoal(metaclass=Metaclass_PointToPoint_SendGoal):
    from dobot_msgs.action._point_to_point import PointToPoint_SendGoal_Request as Request
    from dobot_msgs.action._point_to_point import PointToPoint_SendGoal_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PointToPoint_GetResult_Request(type):
    """Metaclass of message 'PointToPoint_GetResult_Request'."""

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
                'dobot_msgs.action.PointToPoint_GetResult_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__point_to_point__get_result__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__point_to_point__get_result__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__point_to_point__get_result__request
            cls._TYPE_SUPPORT = module.type_support_msg__action__point_to_point__get_result__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__point_to_point__get_result__request

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PointToPoint_GetResult_Request(metaclass=Metaclass_PointToPoint_GetResult_Request):
    """Message class 'PointToPoint_GetResult_Request'."""

    __slots__ = [
        '_goal_id',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())

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
        if self.goal_id != other.goal_id:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PointToPoint_GetResult_Response(type):
    """Metaclass of message 'PointToPoint_GetResult_Response'."""

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
                'dobot_msgs.action.PointToPoint_GetResult_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__point_to_point__get_result__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__point_to_point__get_result__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__point_to_point__get_result__response
            cls._TYPE_SUPPORT = module.type_support_msg__action__point_to_point__get_result__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__point_to_point__get_result__response

            from dobot_msgs.action import PointToPoint
            if PointToPoint.Result.__class__._TYPE_SUPPORT is None:
                PointToPoint.Result.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PointToPoint_GetResult_Response(metaclass=Metaclass_PointToPoint_GetResult_Response):
    """Message class 'PointToPoint_GetResult_Response'."""

    __slots__ = [
        '_status',
        '_result',
    ]

    _fields_and_field_types = {
        'status': 'int8',
        'result': 'dobot_msgs/PointToPoint_Result',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dobot_msgs', 'action'], 'PointToPoint_Result'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', int())
        from dobot_msgs.action._point_to_point import PointToPoint_Result
        self.result = kwargs.get('result', PointToPoint_Result())

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
        if self.status != other.status:
            return False
        if self.result != other.result:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'status' field must be an integer in [-128, 127]"
        self._status = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            from dobot_msgs.action._point_to_point import PointToPoint_Result
            assert \
                isinstance(value, PointToPoint_Result), \
                "The 'result' field must be a sub message of type 'PointToPoint_Result'"
        self._result = value


class Metaclass_PointToPoint_GetResult(type):
    """Metaclass of service 'PointToPoint_GetResult'."""

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
                'dobot_msgs.action.PointToPoint_GetResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__action__point_to_point__get_result

            from dobot_msgs.action import _point_to_point
            if _point_to_point.Metaclass_PointToPoint_GetResult_Request._TYPE_SUPPORT is None:
                _point_to_point.Metaclass_PointToPoint_GetResult_Request.__import_type_support__()
            if _point_to_point.Metaclass_PointToPoint_GetResult_Response._TYPE_SUPPORT is None:
                _point_to_point.Metaclass_PointToPoint_GetResult_Response.__import_type_support__()


class PointToPoint_GetResult(metaclass=Metaclass_PointToPoint_GetResult):
    from dobot_msgs.action._point_to_point import PointToPoint_GetResult_Request as Request
    from dobot_msgs.action._point_to_point import PointToPoint_GetResult_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_PointToPoint_FeedbackMessage(type):
    """Metaclass of message 'PointToPoint_FeedbackMessage'."""

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
                'dobot_msgs.action.PointToPoint_FeedbackMessage')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__action__point_to_point__feedback_message
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__action__point_to_point__feedback_message
            cls._CONVERT_TO_PY = module.convert_to_py_msg__action__point_to_point__feedback_message
            cls._TYPE_SUPPORT = module.type_support_msg__action__point_to_point__feedback_message
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__action__point_to_point__feedback_message

            from dobot_msgs.action import PointToPoint
            if PointToPoint.Feedback.__class__._TYPE_SUPPORT is None:
                PointToPoint.Feedback.__class__.__import_type_support__()

            from unique_identifier_msgs.msg import UUID
            if UUID.__class__._TYPE_SUPPORT is None:
                UUID.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PointToPoint_FeedbackMessage(metaclass=Metaclass_PointToPoint_FeedbackMessage):
    """Message class 'PointToPoint_FeedbackMessage'."""

    __slots__ = [
        '_goal_id',
        '_feedback',
    ]

    _fields_and_field_types = {
        'goal_id': 'unique_identifier_msgs/UUID',
        'feedback': 'dobot_msgs/PointToPoint_Feedback',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['unique_identifier_msgs', 'msg'], 'UUID'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['dobot_msgs', 'action'], 'PointToPoint_Feedback'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from unique_identifier_msgs.msg import UUID
        self.goal_id = kwargs.get('goal_id', UUID())
        from dobot_msgs.action._point_to_point import PointToPoint_Feedback
        self.feedback = kwargs.get('feedback', PointToPoint_Feedback())

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
        if self.goal_id != other.goal_id:
            return False
        if self.feedback != other.feedback:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def goal_id(self):
        """Message field 'goal_id'."""
        return self._goal_id

    @goal_id.setter
    def goal_id(self, value):
        if __debug__:
            from unique_identifier_msgs.msg import UUID
            assert \
                isinstance(value, UUID), \
                "The 'goal_id' field must be a sub message of type 'UUID'"
        self._goal_id = value

    @builtins.property
    def feedback(self):
        """Message field 'feedback'."""
        return self._feedback

    @feedback.setter
    def feedback(self, value):
        if __debug__:
            from dobot_msgs.action._point_to_point import PointToPoint_Feedback
            assert \
                isinstance(value, PointToPoint_Feedback), \
                "The 'feedback' field must be a sub message of type 'PointToPoint_Feedback'"
        self._feedback = value


class Metaclass_PointToPoint(type):
    """Metaclass of action 'PointToPoint'."""

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
                'dobot_msgs.action.PointToPoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_action__action__point_to_point

            from action_msgs.msg import _goal_status_array
            if _goal_status_array.Metaclass_GoalStatusArray._TYPE_SUPPORT is None:
                _goal_status_array.Metaclass_GoalStatusArray.__import_type_support__()
            from action_msgs.srv import _cancel_goal
            if _cancel_goal.Metaclass_CancelGoal._TYPE_SUPPORT is None:
                _cancel_goal.Metaclass_CancelGoal.__import_type_support__()

            from dobot_msgs.action import _point_to_point
            if _point_to_point.Metaclass_PointToPoint_SendGoal._TYPE_SUPPORT is None:
                _point_to_point.Metaclass_PointToPoint_SendGoal.__import_type_support__()
            if _point_to_point.Metaclass_PointToPoint_GetResult._TYPE_SUPPORT is None:
                _point_to_point.Metaclass_PointToPoint_GetResult.__import_type_support__()
            if _point_to_point.Metaclass_PointToPoint_FeedbackMessage._TYPE_SUPPORT is None:
                _point_to_point.Metaclass_PointToPoint_FeedbackMessage.__import_type_support__()


class PointToPoint(metaclass=Metaclass_PointToPoint):

    # The goal message defined in the action definition.
    from dobot_msgs.action._point_to_point import PointToPoint_Goal as Goal
    # The result message defined in the action definition.
    from dobot_msgs.action._point_to_point import PointToPoint_Result as Result
    # The feedback message defined in the action definition.
    from dobot_msgs.action._point_to_point import PointToPoint_Feedback as Feedback

    class Impl:

        # The send_goal service using a wrapped version of the goal message as a request.
        from dobot_msgs.action._point_to_point import PointToPoint_SendGoal as SendGoalService
        # The get_result service using a wrapped version of the result message as a response.
        from dobot_msgs.action._point_to_point import PointToPoint_GetResult as GetResultService
        # The feedback message with generic fields which wraps the feedback message.
        from dobot_msgs.action._point_to_point import PointToPoint_FeedbackMessage as FeedbackMessage

        # The generic service to cancel a goal.
        from action_msgs.srv._cancel_goal import CancelGoal as CancelGoalService
        # The generic message for get the status of a goal.
        from action_msgs.msg._goal_status_array import GoalStatusArray as GoalStatusMessage

    def __init__(self):
        raise NotImplementedError('Action classes can not be instantiated')
