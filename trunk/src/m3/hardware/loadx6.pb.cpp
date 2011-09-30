// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "loadx6.pb.h"
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>

namespace {

const ::google::protobuf::Descriptor* M3LoadX6Status_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  M3LoadX6Status_reflection_ = NULL;
const ::google::protobuf::Descriptor* M3LoadX6Command_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  M3LoadX6Command_reflection_ = NULL;
const ::google::protobuf::Descriptor* M3LoadX6Param_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  M3LoadX6Param_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_loadx6_2eproto() {
  protobuf_AddDesc_loadx6_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "loadx6.proto");
  GOOGLE_CHECK(file != NULL);
  M3LoadX6Status_descriptor_ = file->message_type(0);
  static const int M3LoadX6Status_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Status, base_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Status, wrench_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Status, adc_ext_0_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Status, adc_ext_1_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Status, adc_ext_2_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Status, dig_ext_0_),
  };
  M3LoadX6Status_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      M3LoadX6Status_descriptor_,
      M3LoadX6Status::default_instance_,
      M3LoadX6Status_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Status, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Status, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(M3LoadX6Status));
  M3LoadX6Command_descriptor_ = file->message_type(1);
  static const int M3LoadX6Command_offsets_[1] = {
  };
  M3LoadX6Command_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      M3LoadX6Command_descriptor_,
      M3LoadX6Command::default_instance_,
      M3LoadX6Command_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Command, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Command, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(M3LoadX6Command));
  M3LoadX6Param_descriptor_ = file->message_type(2);
  static const int M3LoadX6Param_offsets_[1] = {
  };
  M3LoadX6Param_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      M3LoadX6Param_descriptor_,
      M3LoadX6Param::default_instance_,
      M3LoadX6Param_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Param, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(M3LoadX6Param, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(M3LoadX6Param));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_loadx6_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    M3LoadX6Status_descriptor_, &M3LoadX6Status::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    M3LoadX6Command_descriptor_, &M3LoadX6Command::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    M3LoadX6Param_descriptor_, &M3LoadX6Param::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_loadx6_2eproto() {
  delete M3LoadX6Status::default_instance_;
  delete M3LoadX6Status_reflection_;
  delete M3LoadX6Command::default_instance_;
  delete M3LoadX6Command_reflection_;
  delete M3LoadX6Param::default_instance_;
  delete M3LoadX6Param_reflection_;
}

void protobuf_AddDesc_loadx6_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::protobuf_AddDesc_component_5fbase_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014loadx6.proto\032\024component_base.proto\"\211\001\n"
    "\016M3LoadX6Status\022\033\n\004base\030\001 \001(\0132\r.M3BaseSt"
    "atus\022\016\n\006wrench\030\002 \003(\001\022\021\n\tadc_ext_0\030\003 \001(\001\022"
    "\021\n\tadc_ext_1\030\004 \001(\001\022\021\n\tadc_ext_2\030\005 \001(\001\022\021\n"
    "\tdig_ext_0\030\006 \001(\001\"\021\n\017M3LoadX6Command\"\017\n\rM"
    "3LoadX6ParamB\002H\001", 216);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "loadx6.proto", &protobuf_RegisterTypes);
  M3LoadX6Status::default_instance_ = new M3LoadX6Status();
  M3LoadX6Command::default_instance_ = new M3LoadX6Command();
  M3LoadX6Param::default_instance_ = new M3LoadX6Param();
  M3LoadX6Status::default_instance_->InitAsDefaultInstance();
  M3LoadX6Command::default_instance_->InitAsDefaultInstance();
  M3LoadX6Param::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_loadx6_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_loadx6_2eproto {
  StaticDescriptorInitializer_loadx6_2eproto() {
    protobuf_AddDesc_loadx6_2eproto();
  }
} static_descriptor_initializer_loadx6_2eproto_;


// ===================================================================

#ifndef _MSC_VER
const int M3LoadX6Status::kBaseFieldNumber;
const int M3LoadX6Status::kWrenchFieldNumber;
const int M3LoadX6Status::kAdcExt0FieldNumber;
const int M3LoadX6Status::kAdcExt1FieldNumber;
const int M3LoadX6Status::kAdcExt2FieldNumber;
const int M3LoadX6Status::kDigExt0FieldNumber;
#endif  // !_MSC_VER

M3LoadX6Status::M3LoadX6Status() {
  SharedCtor();
}

void M3LoadX6Status::InitAsDefaultInstance() {
  base_ = const_cast< ::M3BaseStatus*>(&::M3BaseStatus::default_instance());
}

M3LoadX6Status::M3LoadX6Status(const M3LoadX6Status& from) {
  SharedCtor();
  MergeFrom(from);
}

void M3LoadX6Status::SharedCtor() {
  _cached_size_ = 0;
  base_ = NULL;
  adc_ext_0_ = 0;
  adc_ext_1_ = 0;
  adc_ext_2_ = 0;
  dig_ext_0_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

M3LoadX6Status::~M3LoadX6Status() {
  SharedDtor();
}

void M3LoadX6Status::SharedDtor() {
  if (this != default_instance_) {
    delete base_;
  }
}

const ::google::protobuf::Descriptor* M3LoadX6Status::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return M3LoadX6Status_descriptor_;
}

const M3LoadX6Status& M3LoadX6Status::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_loadx6_2eproto();  return *default_instance_;
}

M3LoadX6Status* M3LoadX6Status::default_instance_ = NULL;

M3LoadX6Status* M3LoadX6Status::New() const {
  return new M3LoadX6Status;
}

void M3LoadX6Status::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (_has_bit(0)) {
      if (base_ != NULL) base_->::M3BaseStatus::Clear();
    }
    adc_ext_0_ = 0;
    adc_ext_1_ = 0;
    adc_ext_2_ = 0;
    dig_ext_0_ = 0;
  }
  wrench_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool M3LoadX6Status::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .M3BaseStatus base = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          goto handle_uninterpreted;
        }
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
             input, mutable_base()));
        if (input->ExpectTag(17)) goto parse_wrench;
        break;
      }
      
      // repeated double wrench = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          goto handle_uninterpreted;
        }
       parse_wrench:
        double value;
        DO_(::google::protobuf::internal::WireFormatLite::ReadDouble(
              input, &value));
        add_wrench(value);
        if (input->ExpectTag(17)) goto parse_wrench;
        if (input->ExpectTag(25)) goto parse_adc_ext_0;
        break;
      }
      
      // optional double adc_ext_0 = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          goto handle_uninterpreted;
        }
       parse_adc_ext_0:
        DO_(::google::protobuf::internal::WireFormatLite::ReadDouble(
              input, &adc_ext_0_));
        _set_bit(2);
        if (input->ExpectTag(33)) goto parse_adc_ext_1;
        break;
      }
      
      // optional double adc_ext_1 = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          goto handle_uninterpreted;
        }
       parse_adc_ext_1:
        DO_(::google::protobuf::internal::WireFormatLite::ReadDouble(
              input, &adc_ext_1_));
        _set_bit(3);
        if (input->ExpectTag(41)) goto parse_adc_ext_2;
        break;
      }
      
      // optional double adc_ext_2 = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          goto handle_uninterpreted;
        }
       parse_adc_ext_2:
        DO_(::google::protobuf::internal::WireFormatLite::ReadDouble(
              input, &adc_ext_2_));
        _set_bit(4);
        if (input->ExpectTag(49)) goto parse_dig_ext_0;
        break;
      }
      
      // optional double dig_ext_0 = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) !=
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED64) {
          goto handle_uninterpreted;
        }
       parse_dig_ext_0:
        DO_(::google::protobuf::internal::WireFormatLite::ReadDouble(
              input, &dig_ext_0_));
        _set_bit(5);
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void M3LoadX6Status::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    M3LoadX6Status::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  // optional .M3BaseStatus base = 1;
  if (_has_bit(0)) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageNoVirtual(
      1, this->base(), output);
  }
  
  // repeated double wrench = 2;
  for (int i = 0; i < this->wrench_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(
      2, this->wrench(i), output);
  }
  
  // optional double adc_ext_0 = 3;
  if (_has_bit(2)) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->adc_ext_0(), output);
  }
  
  // optional double adc_ext_1 = 4;
  if (_has_bit(3)) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->adc_ext_1(), output);
  }
  
  // optional double adc_ext_2 = 5;
  if (_has_bit(4)) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(5, this->adc_ext_2(), output);
  }
  
  // optional double dig_ext_0 = 6;
  if (_has_bit(5)) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(6, this->dig_ext_0(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* M3LoadX6Status::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional .M3BaseStatus base = 1;
  if (_has_bit(0)) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->base(), target);
  }
  
  // repeated double wrench = 2;
  for (int i = 0; i < this->wrench_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteDoubleToArray(2, this->wrench(i), target);
  }
  
  // optional double adc_ext_0 = 3;
  if (_has_bit(2)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->adc_ext_0(), target);
  }
  
  // optional double adc_ext_1 = 4;
  if (_has_bit(3)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->adc_ext_1(), target);
  }
  
  // optional double adc_ext_2 = 5;
  if (_has_bit(4)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(5, this->adc_ext_2(), target);
  }
  
  // optional double dig_ext_0 = 6;
  if (_has_bit(5)) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(6, this->dig_ext_0(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int M3LoadX6Status::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .M3BaseStatus base = 1;
    if (has_base()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->base());
    }
    
    // optional double adc_ext_0 = 3;
    if (has_adc_ext_0()) {
      total_size += 1 + 8;
    }
    
    // optional double adc_ext_1 = 4;
    if (has_adc_ext_1()) {
      total_size += 1 + 8;
    }
    
    // optional double adc_ext_2 = 5;
    if (has_adc_ext_2()) {
      total_size += 1 + 8;
    }
    
    // optional double dig_ext_0 = 6;
    if (has_dig_ext_0()) {
      total_size += 1 + 8;
    }
    
  }
  // repeated double wrench = 2;
  {
    int data_size = 0;
    data_size = 8 * this->wrench_size();
    total_size += 1 * this->wrench_size() + data_size;
  }
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void M3LoadX6Status::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const M3LoadX6Status* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const M3LoadX6Status*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void M3LoadX6Status::MergeFrom(const M3LoadX6Status& from) {
  GOOGLE_CHECK_NE(&from, this);
  wrench_.MergeFrom(from.wrench_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from._has_bit(0)) {
      mutable_base()->::M3BaseStatus::MergeFrom(from.base());
    }
    if (from._has_bit(2)) {
      set_adc_ext_0(from.adc_ext_0());
    }
    if (from._has_bit(3)) {
      set_adc_ext_1(from.adc_ext_1());
    }
    if (from._has_bit(4)) {
      set_adc_ext_2(from.adc_ext_2());
    }
    if (from._has_bit(5)) {
      set_dig_ext_0(from.dig_ext_0());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void M3LoadX6Status::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void M3LoadX6Status::CopyFrom(const M3LoadX6Status& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool M3LoadX6Status::IsInitialized() const {
  
  return true;
}

void M3LoadX6Status::Swap(M3LoadX6Status* other) {
  if (other != this) {
    std::swap(base_, other->base_);
    wrench_.Swap(&other->wrench_);
    std::swap(adc_ext_0_, other->adc_ext_0_);
    std::swap(adc_ext_1_, other->adc_ext_1_);
    std::swap(adc_ext_2_, other->adc_ext_2_);
    std::swap(dig_ext_0_, other->dig_ext_0_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata M3LoadX6Status::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = M3LoadX6Status_descriptor_;
  metadata.reflection = M3LoadX6Status_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

M3LoadX6Command::M3LoadX6Command() {
  SharedCtor();
}

void M3LoadX6Command::InitAsDefaultInstance() {
}

M3LoadX6Command::M3LoadX6Command(const M3LoadX6Command& from) {
  SharedCtor();
  MergeFrom(from);
}

void M3LoadX6Command::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

M3LoadX6Command::~M3LoadX6Command() {
  SharedDtor();
}

void M3LoadX6Command::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* M3LoadX6Command::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return M3LoadX6Command_descriptor_;
}

const M3LoadX6Command& M3LoadX6Command::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_loadx6_2eproto();  return *default_instance_;
}

M3LoadX6Command* M3LoadX6Command::default_instance_ = NULL;

M3LoadX6Command* M3LoadX6Command::New() const {
  return new M3LoadX6Command;
}

void M3LoadX6Command::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool M3LoadX6Command::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void M3LoadX6Command::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    M3LoadX6Command::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* M3LoadX6Command::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int M3LoadX6Command::ByteSize() const {
  int total_size = 0;
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void M3LoadX6Command::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const M3LoadX6Command* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const M3LoadX6Command*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void M3LoadX6Command::MergeFrom(const M3LoadX6Command& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void M3LoadX6Command::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void M3LoadX6Command::CopyFrom(const M3LoadX6Command& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool M3LoadX6Command::IsInitialized() const {
  
  return true;
}

void M3LoadX6Command::Swap(M3LoadX6Command* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata M3LoadX6Command::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = M3LoadX6Command_descriptor_;
  metadata.reflection = M3LoadX6Command_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

M3LoadX6Param::M3LoadX6Param() {
  SharedCtor();
}

void M3LoadX6Param::InitAsDefaultInstance() {
}

M3LoadX6Param::M3LoadX6Param(const M3LoadX6Param& from) {
  SharedCtor();
  MergeFrom(from);
}

void M3LoadX6Param::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

M3LoadX6Param::~M3LoadX6Param() {
  SharedDtor();
}

void M3LoadX6Param::SharedDtor() {
  if (this != default_instance_) {
  }
}

const ::google::protobuf::Descriptor* M3LoadX6Param::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return M3LoadX6Param_descriptor_;
}

const M3LoadX6Param& M3LoadX6Param::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_loadx6_2eproto();  return *default_instance_;
}

M3LoadX6Param* M3LoadX6Param::default_instance_ = NULL;

M3LoadX6Param* M3LoadX6Param::New() const {
  return new M3LoadX6Param;
}

void M3LoadX6Param::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool M3LoadX6Param::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void M3LoadX6Param::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  ::google::protobuf::uint8* raw_buffer = output->GetDirectBufferForNBytesAndAdvance(_cached_size_);
  if (raw_buffer != NULL) {
    M3LoadX6Param::SerializeWithCachedSizesToArray(raw_buffer);
    return;
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* M3LoadX6Param::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int M3LoadX6Param::ByteSize() const {
  int total_size = 0;
  
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  _cached_size_ = total_size;
  return total_size;
}

void M3LoadX6Param::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const M3LoadX6Param* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const M3LoadX6Param*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void M3LoadX6Param::MergeFrom(const M3LoadX6Param& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void M3LoadX6Param::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void M3LoadX6Param::CopyFrom(const M3LoadX6Param& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool M3LoadX6Param::IsInitialized() const {
  
  return true;
}

void M3LoadX6Param::Swap(M3LoadX6Param* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata M3LoadX6Param::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = M3LoadX6Param_descriptor_;
  metadata.reflection = M3LoadX6Param_reflection_;
  return metadata;
}

