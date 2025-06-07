# generated from rosidl_generator_py/resource/_idl.py.em
# with input from vision_interfaces:msg/Uart.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Uart(type):
    """Metaclass of message 'Uart'."""

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
            module = import_type_support('vision_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'vision_interfaces.msg.Uart')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__uart
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__uart
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__uart
            cls._TYPE_SUPPORT = module.type_support_msg__msg__uart
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__uart

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Uart(metaclass=Metaclass_Uart):
    """Message class 'Uart'."""

    __slots__ = [
        '_deviation_x',
        '_deviation_y',
        '_point_x',
        '_point_y',
        '_turned',
    ]

    _fields_and_field_types = {
        'deviation_x': 'string',
        'deviation_y': 'string',
        'point_x': 'uint8',
        'point_y': 'uint8',
        'turned': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.deviation_x = kwargs.get('deviation_x', str())
        self.deviation_y = kwargs.get('deviation_y', str())
        self.point_x = kwargs.get('point_x', int())
        self.point_y = kwargs.get('point_y', int())
        self.turned = kwargs.get('turned', int())

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
        if self.deviation_x != other.deviation_x:
            return False
        if self.deviation_y != other.deviation_y:
            return False
        if self.point_x != other.point_x:
            return False
        if self.point_y != other.point_y:
            return False
        if self.turned != other.turned:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def deviation_x(self):
        """Message field 'deviation_x'."""
        return self._deviation_x

    @deviation_x.setter
    def deviation_x(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'deviation_x' field must be of type 'str'"
        self._deviation_x = value

    @builtins.property
    def deviation_y(self):
        """Message field 'deviation_y'."""
        return self._deviation_y

    @deviation_y.setter
    def deviation_y(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'deviation_y' field must be of type 'str'"
        self._deviation_y = value

    @builtins.property
    def point_x(self):
        """Message field 'point_x'."""
        return self._point_x

    @point_x.setter
    def point_x(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'point_x' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'point_x' field must be an unsigned integer in [0, 255]"
        self._point_x = value

    @builtins.property
    def point_y(self):
        """Message field 'point_y'."""
        return self._point_y

    @point_y.setter
    def point_y(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'point_y' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'point_y' field must be an unsigned integer in [0, 255]"
        self._point_y = value

    @builtins.property
    def turned(self):
        """Message field 'turned'."""
        return self._turned

    @turned.setter
    def turned(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'turned' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'turned' field must be an unsigned integer in [0, 255]"
        self._turned = value
