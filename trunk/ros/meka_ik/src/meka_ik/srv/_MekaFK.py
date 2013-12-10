"""autogenerated by genpy from meka_ik/MekaFKRequest.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MekaFKRequest(genpy.Message):
  _md5sum = "c13cedd689aa257ae9251cd4cd2b0acd"
  _type = "meka_ik/MekaFKRequest"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """string arm_name
float32[7] joint_angles

"""
  __slots__ = ['arm_name','joint_angles']
  _slot_types = ['string','float32[7]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       arm_name,joint_angles

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MekaFKRequest, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.arm_name is None:
        self.arm_name = ''
      if self.joint_angles is None:
        self.joint_angles = [0.,0.,0.,0.,0.,0.,0.]
    else:
      self.arm_name = ''
      self.joint_angles = [0.,0.,0.,0.,0.,0.,0.]

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
      _x = self.arm_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(_struct_7f.pack(*self.joint_angles))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.arm_name = str[start:end].decode('utf-8')
      else:
        self.arm_name = str[start:end]
      start = end
      end += 28
      self.joint_angles = _struct_7f.unpack(str[start:end])
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
      _x = self.arm_name
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.pack('<I%ss'%length, length, _x))
      buff.write(self.joint_angles.tostring())
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.arm_name = str[start:end].decode('utf-8')
      else:
        self.arm_name = str[start:end]
      start = end
      end += 28
      self.joint_angles = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=7)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_7f = struct.Struct("<7f")
"""autogenerated by genpy from meka_ik/MekaFKResponse.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class MekaFKResponse(genpy.Message):
  _md5sum = "bce9b7dcadecc597d63e070011964c69"
  _type = "meka_ik/MekaFKResponse"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float32[3] end_position
float32[3] end_rpy

"""
  __slots__ = ['end_position','end_rpy']
  _slot_types = ['float32[3]','float32[3]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       end_position,end_rpy

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(MekaFKResponse, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.end_position is None:
        self.end_position = [0.,0.,0.]
      if self.end_rpy is None:
        self.end_rpy = [0.,0.,0.]
    else:
      self.end_position = [0.,0.,0.]
      self.end_rpy = [0.,0.,0.]

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
      buff.write(_struct_3f.pack(*self.end_position))
      buff.write(_struct_3f.pack(*self.end_rpy))
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      start = end
      end += 12
      self.end_position = _struct_3f.unpack(str[start:end])
      start = end
      end += 12
      self.end_rpy = _struct_3f.unpack(str[start:end])
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
      buff.write(self.end_position.tostring())
      buff.write(self.end_rpy.tostring())
    except struct.error as se: self._check_types(se)
    except TypeError as te: self._check_types(te)

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      start = end
      end += 12
      self.end_position = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=3)
      start = end
      end += 12
      self.end_rpy = numpy.frombuffer(str[start:end], dtype=numpy.float32, count=3)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3f = struct.Struct("<3f")
class MekaFK(object):
  _type          = 'meka_ik/MekaFK'
  _md5sum = '220adc38ef40d3a76c46bfd9f09c5504'
  _request_class  = MekaFKRequest
  _response_class = MekaFKResponse
