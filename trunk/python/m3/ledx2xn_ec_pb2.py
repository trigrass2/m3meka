# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import service
from google.protobuf import service_reflection
from google.protobuf import descriptor_pb2



_M3LEDX2XNECSTATUS = descriptor.Descriptor(
  name='M3LedX2XNEcStatus',
  full_name='M3LedX2XNEcStatus',
  filename='ledx2xn_ec.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='base', full_name='M3LedX2XNEcStatus.base', index=0,
      number=1, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='ethercat', full_name='M3LedX2XNEcStatus.ethercat', index=1,
      number=2, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='timestamp', full_name='M3LedX2XNEcStatus.timestamp', index=2,
      number=3, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='adc_ext_a', full_name='M3LedX2XNEcStatus.adc_ext_a', index=3,
      number=4, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='adc_ext_b', full_name='M3LedX2XNEcStatus.adc_ext_b', index=4,
      number=5, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='adc_ext_c', full_name='M3LedX2XNEcStatus.adc_ext_c', index=5,
      number=6, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='adc_ext_d', full_name='M3LedX2XNEcStatus.adc_ext_d', index=6,
      number=7, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='flags', full_name='M3LedX2XNEcStatus.flags', index=7,
      number=8, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)


_M3LEDX2XNECRGB = descriptor.Descriptor(
  name='M3LedX2XNEcRGB',
  full_name='M3LedX2XNEcRGB',
  filename='ledx2xn_ec.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='r', full_name='M3LedX2XNEcRGB.r', index=0,
      number=1, type=5, cpp_type=1, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='g', full_name='M3LedX2XNEcRGB.g', index=1,
      number=2, type=5, cpp_type=1, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='b', full_name='M3LedX2XNEcRGB.b', index=2,
      number=3, type=5, cpp_type=1, label=3,
      default_value=[],
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)


_M3LEDX2XNECCOMMAND = descriptor.Descriptor(
  name='M3LedX2XNEcCommand',
  full_name='M3LedX2XNEcCommand',
  filename='ledx2xn_ec.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='enable_a', full_name='M3LedX2XNEcCommand.enable_a', index=0,
      number=1, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='enable_b', full_name='M3LedX2XNEcCommand.enable_b', index=1,
      number=2, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='branch_a', full_name='M3LedX2XNEcCommand.branch_a', index=2,
      number=3, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='branch_b', full_name='M3LedX2XNEcCommand.branch_b', index=3,
      number=4, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)


_M3LEDX2XNECPARAM = descriptor.Descriptor(
  name='M3LedX2XNEcParam',
  full_name='M3LedX2XNEcParam',
  filename='ledx2xn_ec.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='config', full_name='M3LedX2XNEcParam.config', index=0,
      number=1, type=5, cpp_type=1, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],  # TODO(robinson): Implement.
  enum_types=[
  ],
  options=None)

import component_base_pb2

_M3LEDX2XNECSTATUS.fields_by_name['base'].message_type = component_base_pb2._M3BASESTATUS
_M3LEDX2XNECSTATUS.fields_by_name['ethercat'].message_type = component_base_pb2._M3ETHERCATSTATUS
_M3LEDX2XNECCOMMAND.fields_by_name['branch_a'].message_type = _M3LEDX2XNECRGB
_M3LEDX2XNECCOMMAND.fields_by_name['branch_b'].message_type = _M3LEDX2XNECRGB

class M3LedX2XNEcStatus(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3LEDX2XNECSTATUS

class M3LedX2XNEcRGB(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3LEDX2XNECRGB

class M3LedX2XNEcCommand(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3LEDX2XNECCOMMAND

class M3LedX2XNEcParam(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3LEDX2XNECPARAM

