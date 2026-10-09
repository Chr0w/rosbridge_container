# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mir_nav_interface:msg/LaserCloud.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaserCloud(type):
    """Metaclass of message 'LaserCloud'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BACK_SCANNER': 1,
        'FRONT_SCANNER': 2,
        'RIGHT_SCANNER': 3,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mir_nav_interface')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mir_nav_interface.msg.LaserCloud')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__laser_cloud
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__laser_cloud
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__laser_cloud
            cls._TYPE_SUPPORT = module.type_support_msg__msg__laser_cloud
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__laser_cloud

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from geometry_msgs.msg import Transform
            if Transform.__class__._TYPE_SUPPORT is None:
                Transform.__class__.__import_type_support__()

            from sensor_msgs.msg import PointCloud2
            if PointCloud2.__class__._TYPE_SUPPORT is None:
                PointCloud2.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BACK_SCANNER': cls.__constants['BACK_SCANNER'],
            'FRONT_SCANNER': cls.__constants['FRONT_SCANNER'],
            'RIGHT_SCANNER': cls.__constants['RIGHT_SCANNER'],
        }

    @property
    def BACK_SCANNER(self):
        """Message constant 'BACK_SCANNER'."""
        return Metaclass_LaserCloud.__constants['BACK_SCANNER']

    @property
    def FRONT_SCANNER(self):
        """Message constant 'FRONT_SCANNER'."""
        return Metaclass_LaserCloud.__constants['FRONT_SCANNER']

    @property
    def RIGHT_SCANNER(self):
        """Message constant 'RIGHT_SCANNER'."""
        return Metaclass_LaserCloud.__constants['RIGHT_SCANNER']


class LaserCloud(metaclass=Metaclass_LaserCloud):
    """
    Message class 'LaserCloud'.

    Constants:
      BACK_SCANNER
      FRONT_SCANNER
      RIGHT_SCANNER
    """

    __slots__ = [
        '_cloud_data',
        '_origin',
        '_odom_to_base',
        '_scanner',
    ]

    _fields_and_field_types = {
        'cloud_data': 'sensor_msgs/PointCloud2',
        'origin': 'geometry_msgs/Pose',
        'odom_to_base': 'geometry_msgs/Transform',
        'scanner': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['sensor_msgs', 'msg'], 'PointCloud2'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Transform'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from sensor_msgs.msg import PointCloud2
        self.cloud_data = kwargs.get('cloud_data', PointCloud2())
        from geometry_msgs.msg import Pose
        self.origin = kwargs.get('origin', Pose())
        from geometry_msgs.msg import Transform
        self.odom_to_base = kwargs.get('odom_to_base', Transform())
        self.scanner = kwargs.get('scanner', int())

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
        if self.cloud_data != other.cloud_data:
            return False
        if self.origin != other.origin:
            return False
        if self.odom_to_base != other.odom_to_base:
            return False
        if self.scanner != other.scanner:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cloud_data(self):
        """Message field 'cloud_data'."""
        return self._cloud_data

    @cloud_data.setter
    def cloud_data(self, value):
        if __debug__:
            from sensor_msgs.msg import PointCloud2
            assert \
                isinstance(value, PointCloud2), \
                "The 'cloud_data' field must be a sub message of type 'PointCloud2'"
        self._cloud_data = value

    @builtins.property
    def origin(self):
        """Message field 'origin'."""
        return self._origin

    @origin.setter
    def origin(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'origin' field must be a sub message of type 'Pose'"
        self._origin = value

    @builtins.property
    def odom_to_base(self):
        """Message field 'odom_to_base'."""
        return self._odom_to_base

    @odom_to_base.setter
    def odom_to_base(self, value):
        if __debug__:
            from geometry_msgs.msg import Transform
            assert \
                isinstance(value, Transform), \
                "The 'odom_to_base' field must be a sub message of type 'Transform'"
        self._odom_to_base = value

    @builtins.property
    def scanner(self):
        """Message field 'scanner'."""
        return self._scanner

    @scanner.setter
    def scanner(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'scanner' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'scanner' field must be an unsigned integer in [0, 255]"
        self._scanner = value
