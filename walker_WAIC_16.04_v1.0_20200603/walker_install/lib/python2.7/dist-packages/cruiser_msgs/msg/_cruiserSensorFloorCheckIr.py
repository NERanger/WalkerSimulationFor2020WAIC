# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from cruiser_msgs/cruiserSensorFloorCheckIr.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class cruiserSensorFloorCheckIr(genpy.Message):
  _md5sum = "c371455cf05a44e93c97aa5157fb244c"
  _type = "cruiser_msgs/cruiserSensorFloorCheckIr"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """uint32 cliff1
uint32 cliff2
uint32 cliff3
uint32 cliff4
uint32 cliff5
uint32 cliff6



"""
  __slots__ = ['cliff1','cliff2','cliff3','cliff4','cliff5','cliff6']
  _slot_types = ['uint32','uint32','uint32','uint32','uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       cliff1,cliff2,cliff3,cliff4,cliff5,cliff6

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(cruiserSensorFloorCheckIr, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.cliff1 is None:
        self.cliff1 = 0
      if self.cliff2 is None:
        self.cliff2 = 0
      if self.cliff3 is None:
        self.cliff3 = 0
      if self.cliff4 is None:
        self.cliff4 = 0
      if self.cliff5 is None:
        self.cliff5 = 0
      if self.cliff6 is None:
        self.cliff6 = 0
    else:
      self.cliff1 = 0
      self.cliff2 = 0
      self.cliff3 = 0
      self.cliff4 = 0
      self.cliff5 = 0
      self.cliff6 = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_6I().pack(_x.cliff1, _x.cliff2, _x.cliff3, _x.cliff4, _x.cliff5, _x.cliff6))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.cliff1, _x.cliff2, _x.cliff3, _x.cliff4, _x.cliff5, _x.cliff6,) = _get_struct_6I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_6I().pack(_x.cliff1, _x.cliff2, _x.cliff3, _x.cliff4, _x.cliff5, _x.cliff6))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.cliff1, _x.cliff2, _x.cliff3, _x.cliff4, _x.cliff5, _x.cliff6,) = _get_struct_6I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_6I = None
def _get_struct_6I():
    global _struct_6I
    if _struct_6I is None:
        _struct_6I = struct.Struct("<6I")
    return _struct_6I
