# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)


import component_base_pb2

DESCRIPTOR = descriptor.FileDescriptor(
  name='dynamatics.proto',
  package='',
  serialized_pb='\n\x10\x64ynamatics.proto\x1a\x14\x63omponent_base.proto\"\xa7\x01\n\x12M3DynamaticsStatus\x12\x1b\n\x04\x62\x61se\x18\x01 \x01(\x0b\x32\r.M3BaseStatus\x12\x0f\n\x07\x65nd_pos\x18\x02 \x03(\x01\x12\x0f\n\x07\x65nd_rot\x18\x03 \x03(\x01\x12\t\n\x01J\x18\x04 \x03(\x01\x12\t\n\x01G\x18\x05 \x03(\x01\x12\x11\n\tend_twist\x18\x06 \x03(\x01\x12\x13\n\x0b\x62\x61se_wrench\x18\x07 \x03(\x01\x12\x14\n\x0c\x63hild_wrench\x18\x08 \x03(\x01\"\x8a\x01\n\x11M3DynamaticsParam\x12\x14\n\x0cpayload_mass\x18\x01 \x01(\x01\x12\x13\n\x0bpayload_com\x18\x02 \x03(\x01\x12\x17\n\x0fpayload_inertia\x18\x03 \x03(\x01\x12\x16\n\x0euse_velocities\x18\x04 \x01(\x08\x12\x19\n\x11use_accelerations\x18\x05 \x01(\x08\"#\n\x13M3DynamaticsCommand\x12\x0c\n\x04test\x18\x01 \x01(\x01\x42\x02H\x01')




_M3DYNAMATICSSTATUS = descriptor.Descriptor(
  name='M3DynamaticsStatus',
  full_name='M3DynamaticsStatus',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='base', full_name='M3DynamaticsStatus.base', index=0,
      number=1, type=11, cpp_type=10, label=1,
      has_default_value=False, default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='end_pos', full_name='M3DynamaticsStatus.end_pos', index=1,
      number=2, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='end_rot', full_name='M3DynamaticsStatus.end_rot', index=2,
      number=3, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='J', full_name='M3DynamaticsStatus.J', index=3,
      number=4, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='G', full_name='M3DynamaticsStatus.G', index=4,
      number=5, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='end_twist', full_name='M3DynamaticsStatus.end_twist', index=5,
      number=6, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='base_wrench', full_name='M3DynamaticsStatus.base_wrench', index=6,
      number=7, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='child_wrench', full_name='M3DynamaticsStatus.child_wrench', index=7,
      number=8, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=43,
  serialized_end=210,
)


_M3DYNAMATICSPARAM = descriptor.Descriptor(
  name='M3DynamaticsParam',
  full_name='M3DynamaticsParam',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='payload_mass', full_name='M3DynamaticsParam.payload_mass', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='payload_com', full_name='M3DynamaticsParam.payload_com', index=1,
      number=2, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='payload_inertia', full_name='M3DynamaticsParam.payload_inertia', index=2,
      number=3, type=1, cpp_type=5, label=3,
      has_default_value=False, default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='use_velocities', full_name='M3DynamaticsParam.use_velocities', index=3,
      number=4, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='use_accelerations', full_name='M3DynamaticsParam.use_accelerations', index=4,
      number=5, type=8, cpp_type=7, label=1,
      has_default_value=False, default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=213,
  serialized_end=351,
)


_M3DYNAMATICSCOMMAND = descriptor.Descriptor(
  name='M3DynamaticsCommand',
  full_name='M3DynamaticsCommand',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='test', full_name='M3DynamaticsCommand.test', index=0,
      number=1, type=1, cpp_type=5, label=1,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  extension_ranges=[],
  serialized_start=353,
  serialized_end=388,
)

_M3DYNAMATICSSTATUS.fields_by_name['base'].message_type = component_base_pb2._M3BASESTATUS
DESCRIPTOR.message_types_by_name['M3DynamaticsStatus'] = _M3DYNAMATICSSTATUS
DESCRIPTOR.message_types_by_name['M3DynamaticsParam'] = _M3DYNAMATICSPARAM
DESCRIPTOR.message_types_by_name['M3DynamaticsCommand'] = _M3DYNAMATICSCOMMAND

class M3DynamaticsStatus(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3DYNAMATICSSTATUS
  
  # @@protoc_insertion_point(class_scope:M3DynamaticsStatus)

class M3DynamaticsParam(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3DYNAMATICSPARAM
  
  # @@protoc_insertion_point(class_scope:M3DynamaticsParam)

class M3DynamaticsCommand(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3DYNAMATICSCOMMAND
  
  # @@protoc_insertion_point(class_scope:M3DynamaticsCommand)

# @@protoc_insertion_point(module_scope)