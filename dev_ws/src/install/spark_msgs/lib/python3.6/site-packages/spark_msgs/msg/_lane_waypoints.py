# generated from rosidl_generator_py/resource/_idl.py.em
# with input from spark_msgs:msg/LaneWaypoints.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'forward_x'
# Member 'forward_y'
# Member 'right_x'
# Member 'right_y'
# Member 'left_x'
# Member 'left_y'
import array  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaneWaypoints(type):
    """Metaclass of message 'LaneWaypoints'."""

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
            module = import_type_support('spark_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'spark_msgs.msg.LaneWaypoints')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__lane_waypoints
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__lane_waypoints
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__lane_waypoints
            cls._TYPE_SUPPORT = module.type_support_msg__msg__lane_waypoints
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__lane_waypoints

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


class LaneWaypoints(metaclass=Metaclass_LaneWaypoints):
    """Message class 'LaneWaypoints'."""

    __slots__ = [
        '_header',
        '_forward_x',
        '_forward_y',
        '_right_x',
        '_right_y',
        '_left_x',
        '_left_y',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'forward_x': 'sequence<int16>',
        'forward_y': 'sequence<int16>',
        'right_x': 'sequence<int16>',
        'right_y': 'sequence<int16>',
        'left_x': 'sequence<int16>',
        'left_y': 'sequence<int16>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('int16')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.forward_x = array.array('h', kwargs.get('forward_x', []))
        self.forward_y = array.array('h', kwargs.get('forward_y', []))
        self.right_x = array.array('h', kwargs.get('right_x', []))
        self.right_y = array.array('h', kwargs.get('right_y', []))
        self.left_x = array.array('h', kwargs.get('left_x', []))
        self.left_y = array.array('h', kwargs.get('left_y', []))

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
        if self.header != other.header:
            return False
        if self.forward_x != other.forward_x:
            return False
        if self.forward_y != other.forward_y:
            return False
        if self.right_x != other.right_x:
            return False
        if self.right_y != other.right_y:
            return False
        if self.left_x != other.left_x:
            return False
        if self.left_y != other.left_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @property
    def forward_x(self):
        """Message field 'forward_x'."""
        return self._forward_x

    @forward_x.setter
    def forward_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'forward_x' array.array() must have the type code of 'h'"
            self._forward_x = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'forward_x' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._forward_x = array.array('h', value)

    @property
    def forward_y(self):
        """Message field 'forward_y'."""
        return self._forward_y

    @forward_y.setter
    def forward_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'forward_y' array.array() must have the type code of 'h'"
            self._forward_y = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'forward_y' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._forward_y = array.array('h', value)

    @property
    def right_x(self):
        """Message field 'right_x'."""
        return self._right_x

    @right_x.setter
    def right_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'right_x' array.array() must have the type code of 'h'"
            self._right_x = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'right_x' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._right_x = array.array('h', value)

    @property
    def right_y(self):
        """Message field 'right_y'."""
        return self._right_y

    @right_y.setter
    def right_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'right_y' array.array() must have the type code of 'h'"
            self._right_y = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'right_y' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._right_y = array.array('h', value)

    @property
    def left_x(self):
        """Message field 'left_x'."""
        return self._left_x

    @left_x.setter
    def left_x(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'left_x' array.array() must have the type code of 'h'"
            self._left_x = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'left_x' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._left_x = array.array('h', value)

    @property
    def left_y(self):
        """Message field 'left_y'."""
        return self._left_y

    @left_y.setter
    def left_y(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'h', \
                "The 'left_y' array.array() must have the type code of 'h'"
            self._left_y = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'left_y' field must be a set or sequence and each value of type 'int' and each integer in [-32768, 32767]"
        self._left_y = array.array('h', value)
