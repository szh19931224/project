# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from decision_pb_msgs/MainStop.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import decision_pb_msgs.msg

class MainStop(genpy.Message):
  _md5sum = "ddfd7736f6ba2bbc83b655d8baafce0c"
  _type = "decision_pb_msgs/MainStop"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """StopLine enforced_line 
StopLine preferred_start 
StopLine preferred_end 
string reason 

================================================================================
MSG: decision_pb_msgs/StopLine
string lane_id 
float64 distance_s 
"""
  __slots__ = ['enforced_line','preferred_start','preferred_end','reason']
  _slot_types = ['decision_pb_msgs/StopLine','decision_pb_msgs/StopLine','decision_pb_msgs/StopLine','string']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       enforced_line,preferred_start,preferred_end,reason

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MainStop, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.enforced_line is None:
        self.enforced_line = decision_pb_msgs.msg.StopLine()
      if self.preferred_start is None:
        self.preferred_start = decision_pb_msgs.msg.StopLine()
      if self.preferred_end is None:
        self.preferred_end = decision_pb_msgs.msg.StopLine()
      if self.reason is None:
        self.reason = ''
    else:
      self.enforced_line = decision_pb_msgs.msg.StopLine()
      self.preferred_start = decision_pb_msgs.msg.StopLine()
      self.preferred_end = decision_pb_msgs.msg.StopLine()
      self.reason = ''

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
      _x = self.enforced_line.lane_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_d.pack(self.enforced_line.distance_s))
      _x = self.preferred_start.lane_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_d.pack(self.preferred_start.distance_s))
      _x = self.preferred_end.lane_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_d.pack(self.preferred_end.distance_s))
      _x = self.reason
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.enforced_line is None:
        self.enforced_line = decision_pb_msgs.msg.StopLine()
      if self.preferred_start is None:
        self.preferred_start = decision_pb_msgs.msg.StopLine()
      if self.preferred_end is None:
        self.preferred_end = decision_pb_msgs.msg.StopLine()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.enforced_line.lane_id = str[start:end].decode('utf-8')
      else:
        self.enforced_line.lane_id = str[start:end]
      start = end
      end += 8
      (self.enforced_line.distance_s,) = _struct_d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.preferred_start.lane_id = str[start:end].decode('utf-8')
      else:
        self.preferred_start.lane_id = str[start:end]
      start = end
      end += 8
      (self.preferred_start.distance_s,) = _struct_d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.preferred_end.lane_id = str[start:end].decode('utf-8')
      else:
        self.preferred_end.lane_id = str[start:end]
      start = end
      end += 8
      (self.preferred_end.distance_s,) = _struct_d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.reason = str[start:end].decode('utf-8')
      else:
        self.reason = str[start:end]
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
      _x = self.enforced_line.lane_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_d.pack(self.enforced_line.distance_s))
      _x = self.preferred_start.lane_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_d.pack(self.preferred_start.distance_s))
      _x = self.preferred_end.lane_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_d.pack(self.preferred_end.distance_s))
      _x = self.reason
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.enforced_line is None:
        self.enforced_line = decision_pb_msgs.msg.StopLine()
      if self.preferred_start is None:
        self.preferred_start = decision_pb_msgs.msg.StopLine()
      if self.preferred_end is None:
        self.preferred_end = decision_pb_msgs.msg.StopLine()
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.enforced_line.lane_id = str[start:end].decode('utf-8')
      else:
        self.enforced_line.lane_id = str[start:end]
      start = end
      end += 8
      (self.enforced_line.distance_s,) = _struct_d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.preferred_start.lane_id = str[start:end].decode('utf-8')
      else:
        self.preferred_start.lane_id = str[start:end]
      start = end
      end += 8
      (self.preferred_start.distance_s,) = _struct_d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.preferred_end.lane_id = str[start:end].decode('utf-8')
      else:
        self.preferred_end.lane_id = str[start:end]
      start = end
      end += 8
      (self.preferred_end.distance_s,) = _struct_d.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.reason = str[start:end].decode('utf-8')
      else:
        self.reason = str[start:end]
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_d = struct.Struct("<d")
