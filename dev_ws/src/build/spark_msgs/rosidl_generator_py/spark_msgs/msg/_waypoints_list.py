# generated from rosidl_generator_py/resource/_idl.py.em
# with input from spark_msgs:msg/WaypointsList.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_WaypointsList(type):
    """Metaclass of message 'WaypointsList'."""

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
                'spark_msgs.msg.WaypointsList')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__waypoints_list
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__waypoints_list
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__waypoints_list
            cls._TYPE_SUPPORT = module.type_support_msg__msg__waypoints_list
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__waypoints_list

            from spark_msgs.msg import Waypoints
            if Waypoints.__class__._TYPE_SUPPORT is None:
                Waypoints.__class__.__import_type_support__()

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


class WaypointsList(metaclass=Metaclass_WaypointsList):
    """Message class 'WaypointsList'."""

    __slots__ = [
        '_header',
        '_left',
        '_right',
        '_forward',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'left': 'spark_msgs/Waypoints',
        'right': 'spark_msgs/Waypoints',
        'forward': 'spark_msgs/Waypoints',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['spark_msgs', 'msg'], 'Waypoints'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['spark_msgs', 'msg'], 'Waypoints'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['spark_msgs', 'msg'], 'Waypoints'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        from spark_msgs.msg import Waypoints
        self.left = kwargs.get('left', Waypoints())
        from spark_msgs.msg import Waypoints
        self.right = kwargs.get('right', Waypoints())
        from spark_msgs.msg import Waypoints
        self.forward = kwargs.get('forward', Waypoints())

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
        if self.left != other.left:
            return False
        if self.right != other.right:
            return False
        if self.forward != other.forward:
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
    def left(self):
        """Message field 'left'."""
        return self._left

    @left.setter
    def left(self, value):
        if __debug__:
            from spark_msgs.msg import Waypoints
            assert \
                isinstance(value, Waypoints), \
                "The 'left' field must be a sub message of type 'Waypoints'"
        self._left = value

    @property
    def right(self):
        """Message field 'right'."""
        return self._right

    @right.setter
    def right(self, value):
        if __debug__:
            from spark_msgs.msg import Waypoints
            assert \
                isinstance(value, Waypoints), \
                "The 'right' field must be a sub message of type 'Waypoints'"
        self._right = value

    @property
    def forward(self):
        """Message field 'forward'."""
        return self._forward

    @forward.setter
    def forward(self, value):
        if __debug__:
            from spark_msgs.msg import Waypoints
            assert \
                isinstance(value, Waypoints), \
                "The 'forward' field must be a sub message of type 'Waypoints'"
        self._forward = value
