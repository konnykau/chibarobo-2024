# generated from rosidl_generator_py/resource/_idl.py.em
# with input from robomas_plugins:msg/RobomasFrame.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RobomasFrame(type):
    """Metaclass of message 'RobomasFrame'."""

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
            module = import_type_support('robomas_plugins')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'robomas_plugins.msg.RobomasFrame')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__robomas_frame
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__robomas_frame
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__robomas_frame
            cls._TYPE_SUPPORT = module.type_support_msg__msg__robomas_frame
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__robomas_frame

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


class RobomasFrame(metaclass=Metaclass_RobomasFrame):
    """Message class 'RobomasFrame'."""

    __slots__ = [
        '_header',
        '_motor',
        '_c620',
        '_mode',
        '_temp',
        '_velkp',
        '_velki',
        '_poskp',
        '_tyoku_vel_target',
        '_tyoku_pos_target',
        '_stable_pos_limit_vel',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'motor': 'uint8',
        'c620': 'boolean',
        'mode': 'uint8',
        'temp': 'uint8',
        'velkp': 'float',
        'velki': 'float',
        'poskp': 'float',
        'tyoku_vel_target': 'float',
        'tyoku_pos_target': 'float',
        'stable_pos_limit_vel': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.motor = kwargs.get('motor', int())
        self.c620 = kwargs.get('c620', bool())
        self.mode = kwargs.get('mode', int())
        self.temp = kwargs.get('temp', int())
        self.velkp = kwargs.get('velkp', float())
        self.velki = kwargs.get('velki', float())
        self.poskp = kwargs.get('poskp', float())
        self.tyoku_vel_target = kwargs.get('tyoku_vel_target', float())
        self.tyoku_pos_target = kwargs.get('tyoku_pos_target', float())
        self.stable_pos_limit_vel = kwargs.get('stable_pos_limit_vel', float())

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
        if self.motor != other.motor:
            return False
        if self.c620 != other.c620:
            return False
        if self.mode != other.mode:
            return False
        if self.temp != other.temp:
            return False
        if self.velkp != other.velkp:
            return False
        if self.velki != other.velki:
            return False
        if self.poskp != other.poskp:
            return False
        if self.tyoku_vel_target != other.tyoku_vel_target:
            return False
        if self.tyoku_pos_target != other.tyoku_pos_target:
            return False
        if self.stable_pos_limit_vel != other.stable_pos_limit_vel:
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

    @builtins.property
    def motor(self):
        """Message field 'motor'."""
        return self._motor

    @motor.setter
    def motor(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'motor' field must be an unsigned integer in [0, 255]"
        self._motor = value

    @builtins.property
    def c620(self):
        """Message field 'c620'."""
        return self._c620

    @c620.setter
    def c620(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'c620' field must be of type 'bool'"
        self._c620 = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def temp(self):
        """Message field 'temp'."""
        return self._temp

    @temp.setter
    def temp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temp' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'temp' field must be an unsigned integer in [0, 255]"
        self._temp = value

    @builtins.property
    def velkp(self):
        """Message field 'velkp'."""
        return self._velkp

    @velkp.setter
    def velkp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velkp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velkp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velkp = value

    @builtins.property
    def velki(self):
        """Message field 'velki'."""
        return self._velki

    @velki.setter
    def velki(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'velki' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'velki' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._velki = value

    @builtins.property
    def poskp(self):
        """Message field 'poskp'."""
        return self._poskp

    @poskp.setter
    def poskp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'poskp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'poskp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._poskp = value

    @builtins.property
    def tyoku_vel_target(self):
        """Message field 'tyoku_vel_target'."""
        return self._tyoku_vel_target

    @tyoku_vel_target.setter
    def tyoku_vel_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tyoku_vel_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tyoku_vel_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tyoku_vel_target = value

    @builtins.property
    def tyoku_pos_target(self):
        """Message field 'tyoku_pos_target'."""
        return self._tyoku_pos_target

    @tyoku_pos_target.setter
    def tyoku_pos_target(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tyoku_pos_target' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tyoku_pos_target' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tyoku_pos_target = value

    @builtins.property
    def stable_pos_limit_vel(self):
        """Message field 'stable_pos_limit_vel'."""
        return self._stable_pos_limit_vel

    @stable_pos_limit_vel.setter
    def stable_pos_limit_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'stable_pos_limit_vel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'stable_pos_limit_vel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._stable_pos_limit_vel = value
