# generated from rosidl_generator_py/resource/_idl.py.em
# with input from docker_messages:msg/DockerStatistics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DockerStatistics(type):
    """Metaclass of message 'DockerStatistics'."""

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
            module = import_type_support('docker_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'docker_messages.msg.DockerStatistics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__docker_statistics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__docker_statistics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__docker_statistics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__docker_statistics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__docker_statistics

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


class DockerStatistics(metaclass=Metaclass_DockerStatistics):
    """Message class 'DockerStatistics'."""

    __slots__ = [
        '_header',
        '_id',
        '_name',
        '_cpu',
        '_ram',
        '_net_i',
        '_net_o',
        '_block_i',
        '_block_o',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'id': 'string',
        'name': 'string',
        'cpu': 'float',
        'ram': 'float',
        'net_i': 'float',
        'net_o': 'float',
        'block_i': 'float',
        'block_o': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.id = kwargs.get('id', str())
        self.name = kwargs.get('name', str())
        self.cpu = kwargs.get('cpu', float())
        self.ram = kwargs.get('ram', float())
        self.net_i = kwargs.get('net_i', float())
        self.net_o = kwargs.get('net_o', float())
        self.block_i = kwargs.get('block_i', float())
        self.block_o = kwargs.get('block_o', float())

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
        if self.id != other.id:
            return False
        if self.name != other.name:
            return False
        if self.cpu != other.cpu:
            return False
        if self.ram != other.ram:
            return False
        if self.net_i != other.net_i:
            return False
        if self.net_o != other.net_o:
            return False
        if self.block_i != other.block_i:
            return False
        if self.block_o != other.block_o:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
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

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property
    def cpu(self):
        """Message field 'cpu'."""
        return self._cpu

    @cpu.setter
    def cpu(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cpu' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cpu' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cpu = value

    @builtins.property
    def ram(self):
        """Message field 'ram'."""
        return self._ram

    @ram.setter
    def ram(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ram' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ram' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ram = value

    @builtins.property
    def net_i(self):
        """Message field 'net_i'."""
        return self._net_i

    @net_i.setter
    def net_i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'net_i' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'net_i' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._net_i = value

    @builtins.property
    def net_o(self):
        """Message field 'net_o'."""
        return self._net_o

    @net_o.setter
    def net_o(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'net_o' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'net_o' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._net_o = value

    @builtins.property
    def block_i(self):
        """Message field 'block_i'."""
        return self._block_i

    @block_i.setter
    def block_i(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'block_i' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'block_i' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._block_i = value

    @builtins.property
    def block_o(self):
        """Message field 'block_o'."""
        return self._block_o

    @block_o.setter
    def block_o(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'block_o' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'block_o' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._block_o = value
