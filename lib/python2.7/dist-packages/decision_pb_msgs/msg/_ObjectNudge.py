# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from decision_pb_msgs/ObjectNudge.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import decision_pb_msgs.msg

class ObjectNudge(genpy.Message):
  _md5sum = "fb0d3d4ff3a41e9fa643afca4c5c267e"
  _type = "decision_pb_msgs/ObjectNudge"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 distance_l 
int32 type 
Range preferred_distance_l 

================================================================================
MSG: decision_pb_msgs/Range
float64 start 
float64 end 
"""
  __slots__ = ['distance_l','type','preferred_distance_l']
  _slot_types = ['float64','int32','decision_pb_msgs/Range']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       distance_l,type,preferred_distance_l

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ObjectNudge, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.distance_l is None:
        self.distance_l = 0.
      if self.type is None:
        self.type = 0
      if self.preferred_distance_l is None:
        self.preferred_distance_l = decision_pb_msgs.msg.Range()
    else:
      self.distance_l = 0.
      self.type = 0
      self.preferred_distance_l = decision_pb_msgs.msg.Range()

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
      buff.write(_struct_di2d.pack(_x.distance_l, _x.type, _x.preferred_distance_l.start, _x.preferred_distance_l.end))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.preferred_distance_l is None:
        self.preferred_distance_l = decision_pb_msgs.msg.Range()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.distance_l, _x.type, _x.preferred_distance_l.start, _x.preferred_distance_l.end,) = _struct_di2d.unpack(str[start:end])
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
      buff.write(_struct_di2d.pack(_x.distance_l, _x.type, _x.preferred_distance_l.start, _x.preferred_distance_l.end))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.preferred_distance_l is None:
        self.preferred_distance_l = decision_pb_msgs.msg.Range()
      end = 0
      _x = self
      start = end
      end += 28
      (_x.distance_l, _x.type, _x.preferred_distance_l.start, _x.preferred_distance_l.end,) = _struct_di2d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_di2d = struct.Struct("<di2d")
