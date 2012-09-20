# Generated by the protocol buffer compiler.  DO NOT EDIT!

from google.protobuf import descriptor
from google.protobuf import message
from google.protobuf import reflection
from google.protobuf import service
from google.protobuf import service_reflection
from google.protobuf import descriptor_pb2



_M3PWRSTATUS = descriptor.Descriptor(
  name='M3PwrStatus',
  full_name='M3PwrStatus',
  filename='pwr.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='base', full_name='M3PwrStatus.base', index=0,
      number=1, type=11, cpp_type=10, label=1,
      default_value=None,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='bus_voltage', full_name='M3PwrStatus.bus_voltage', index=1,
      number=2, type=1, cpp_type=5, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='current_digital', full_name='M3PwrStatus.current_digital', index=2,
      number=3, type=1, cpp_type=5, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='motor_enabled', full_name='M3PwrStatus.motor_enabled', index=3,
      number=4, type=8, cpp_type=7, label=1,
      default_value=False,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='bus_current', full_name='M3PwrStatus.bus_current', index=4,
      number=5, type=1, cpp_type=5, label=1,
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


_M3PWRPARAM = descriptor.Descriptor(
  name='M3PwrParam',
  full_name='M3PwrParam',
  filename='pwr.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='max_current_digital', full_name='M3PwrParam.max_current_digital', index=0,
      number=1, type=1, cpp_type=5, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='max_bus_voltage', full_name='M3PwrParam.max_bus_voltage', index=1,
      number=2, type=1, cpp_type=5, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='min_bus_voltage', full_name='M3PwrParam.min_bus_voltage', index=2,
      number=3, type=1, cpp_type=5, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='max_bus_current', full_name='M3PwrParam.max_bus_current', index=3,
      number=4, type=1, cpp_type=5, label=1,
      default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    descriptor.FieldDescriptor(
      name='charge_bus_voltage', full_name='M3PwrParam.charge_bus_voltage', index=4,
      number=5, type=1, cpp_type=5, label=1,
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


_M3PWRCOMMAND = descriptor.Descriptor(
  name='M3PwrCommand',
  full_name='M3PwrCommand',
  filename='pwr.proto',
  containing_type=None,
  fields=[
    descriptor.FieldDescriptor(
      name='enable_motor', full_name='M3PwrCommand.enable_motor', index=0,
      number=3, type=8, cpp_type=7, label=1,
      default_value=False,
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

_M3PWRSTATUS.fields_by_name['base'].message_type = component_base_pb2._M3BASESTATUS

class M3PwrStatus(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3PWRSTATUS

class M3PwrParam(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3PWRPARAM

class M3PwrCommand(message.Message):
  __metaclass__ = reflection.GeneratedProtocolMessageType
  DESCRIPTOR = _M3PWRCOMMAND
