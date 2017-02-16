# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from hdmap_pb_msgs/Subsignal.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import hdmap_pb_msgs.msg

class Subsignal(genpy.Message):
  _md5sum = "227ecc846f6f31e38bceb609a8e59eaa"
  _type = "hdmap_pb_msgs/Subsignal"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """Id id 
int32 type 
Point location 

================================================================================
MSG: hdmap_pb_msgs/Id
int8 id 

================================================================================
MSG: hdmap_pb_msgs/Point
float64 x 
float64 y 
float64 z 
"""
  __slots__ = ['id','type','location']
  _slot_types = ['hdmap_pb_msgs/Id','int32','hdmap_pb_msgs/Point']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       id,type,location

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Subsignal, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.id is None:
        self.id = hdmap_pb_msgs.msg.Id()
      if self.type is None:
        self.type = 0
      if self.location is None:
        self.location = hdmap_pb_msgs.msg.Point()
    else:
      self.id = hdmap_pb_msgs.msg.Id()
      self.type = 0
      self.location = hdmap_pb_msgs.msg.Point()

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
      buff.write(_struct_bi3d.pack(_x.id.id, _x.type, _x.location.x, _x.location.y, _x.location.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.id is None:
        self.id = hdmap_pb_msgs.msg.Id()
      if self.location is None:
        self.location = hdmap_pb_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 29
      (_x.id.id, _x.type, _x.location.x, _x.location.y, _x.location.z,) = _struct_bi3d.unpack(str[start:end])
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
      buff.write(_struct_bi3d.pack(_x.id.id, _x.type, _x.location.x, _x.location.y, _x.location.z))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.id is None:
        self.id = hdmap_pb_msgs.msg.Id()
      if self.location is None:
        self.location = hdmap_pb_msgs.msg.Point()
      end = 0
      _x = self
      start = end
      end += 29
      (_x.id.id, _x.type, _x.location.x, _x.location.y, _x.location.z,) = _struct_bi3d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_bi3d = struct.Struct("<bi3d")
