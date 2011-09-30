// Generated by the protocol buffer compiler.  DO NOT EDIT!

#ifndef PROTOBUF_loadx6_2eproto__INCLUDED
#define PROTOBUF_loadx6_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "component_base.pb.h"

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_loadx6_2eproto();
void protobuf_AssignDesc_loadx6_2eproto();
void protobuf_ShutdownFile_loadx6_2eproto();

class M3LoadX6Status;
class M3LoadX6Command;
class M3LoadX6Param;

// ===================================================================

class M3LoadX6Status : public ::google::protobuf::Message {
 public:
  M3LoadX6Status();
  virtual ~M3LoadX6Status();
  
  M3LoadX6Status(const M3LoadX6Status& from);
  
  inline M3LoadX6Status& operator=(const M3LoadX6Status& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const M3LoadX6Status& default_instance();
  void Swap(M3LoadX6Status* other);
  
  // implements Message ----------------------------------------------
  
  M3LoadX6Status* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3LoadX6Status& from);
  void MergeFrom(const M3LoadX6Status& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // optional .M3BaseStatus base = 1;
  inline bool has_base() const;
  inline void clear_base();
  static const int kBaseFieldNumber = 1;
  inline const ::M3BaseStatus& base() const;
  inline ::M3BaseStatus* mutable_base();
  
  // repeated double wrench = 2;
  inline int wrench_size() const;
  inline void clear_wrench();
  static const int kWrenchFieldNumber = 2;
  inline const ::google::protobuf::RepeatedField< double >& wrench() const
      ;
  inline ::google::protobuf::RepeatedField< double >* mutable_wrench();
  inline double wrench(int index) const;
  inline void set_wrench(int index, double value);
  inline void add_wrench(double value);
  
  // optional double adc_ext_0 = 3;
  inline bool has_adc_ext_0() const;
  inline void clear_adc_ext_0();
  static const int kAdcExt0FieldNumber = 3;
  inline double adc_ext_0() const;
  inline void set_adc_ext_0(double value);
  
  // optional double adc_ext_1 = 4;
  inline bool has_adc_ext_1() const;
  inline void clear_adc_ext_1();
  static const int kAdcExt1FieldNumber = 4;
  inline double adc_ext_1() const;
  inline void set_adc_ext_1(double value);
  
  // optional double adc_ext_2 = 5;
  inline bool has_adc_ext_2() const;
  inline void clear_adc_ext_2();
  static const int kAdcExt2FieldNumber = 5;
  inline double adc_ext_2() const;
  inline void set_adc_ext_2(double value);
  
  // optional double dig_ext_0 = 6;
  inline bool has_dig_ext_0() const;
  inline void clear_dig_ext_0();
  static const int kDigExt0FieldNumber = 6;
  inline double dig_ext_0() const;
  inline void set_dig_ext_0(double value);
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  ::M3BaseStatus* base_;
  ::google::protobuf::RepeatedField< double > wrench_;
  double adc_ext_0_;
  double adc_ext_1_;
  double adc_ext_2_;
  double dig_ext_0_;
  friend void  protobuf_AddDesc_loadx6_2eproto();
  friend void protobuf_AssignDesc_loadx6_2eproto();
  friend void protobuf_ShutdownFile_loadx6_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static M3LoadX6Status* default_instance_;
};
// -------------------------------------------------------------------

class M3LoadX6Command : public ::google::protobuf::Message {
 public:
  M3LoadX6Command();
  virtual ~M3LoadX6Command();
  
  M3LoadX6Command(const M3LoadX6Command& from);
  
  inline M3LoadX6Command& operator=(const M3LoadX6Command& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const M3LoadX6Command& default_instance();
  void Swap(M3LoadX6Command* other);
  
  // implements Message ----------------------------------------------
  
  M3LoadX6Command* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3LoadX6Command& from);
  void MergeFrom(const M3LoadX6Command& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  friend void  protobuf_AddDesc_loadx6_2eproto();
  friend void protobuf_AssignDesc_loadx6_2eproto();
  friend void protobuf_ShutdownFile_loadx6_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[1];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static M3LoadX6Command* default_instance_;
};
// -------------------------------------------------------------------

class M3LoadX6Param : public ::google::protobuf::Message {
 public:
  M3LoadX6Param();
  virtual ~M3LoadX6Param();
  
  M3LoadX6Param(const M3LoadX6Param& from);
  
  inline M3LoadX6Param& operator=(const M3LoadX6Param& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const M3LoadX6Param& default_instance();
  void Swap(M3LoadX6Param* other);
  
  // implements Message ----------------------------------------------
  
  M3LoadX6Param* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const M3LoadX6Param& from);
  void MergeFrom(const M3LoadX6Param& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const { _cached_size_ = size; }
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
 private:
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  mutable int _cached_size_;
  
  friend void  protobuf_AddDesc_loadx6_2eproto();
  friend void protobuf_AssignDesc_loadx6_2eproto();
  friend void protobuf_ShutdownFile_loadx6_2eproto();
  
  ::google::protobuf::uint32 _has_bits_[1];
  
  // WHY DOES & HAVE LOWER PRECEDENCE THAN != !?
  inline bool _has_bit(int index) const {
    return (_has_bits_[index / 32] & (1u << (index % 32))) != 0;
  }
  inline void _set_bit(int index) {
    _has_bits_[index / 32] |= (1u << (index % 32));
  }
  inline void _clear_bit(int index) {
    _has_bits_[index / 32] &= ~(1u << (index % 32));
  }
  
  void InitAsDefaultInstance();
  static M3LoadX6Param* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// M3LoadX6Status

// optional .M3BaseStatus base = 1;
inline bool M3LoadX6Status::has_base() const {
  return _has_bit(0);
}
inline void M3LoadX6Status::clear_base() {
  if (base_ != NULL) base_->::M3BaseStatus::Clear();
  _clear_bit(0);
}
inline const ::M3BaseStatus& M3LoadX6Status::base() const {
  return base_ != NULL ? *base_ : *default_instance_->base_;
}
inline ::M3BaseStatus* M3LoadX6Status::mutable_base() {
  _set_bit(0);
  if (base_ == NULL) base_ = new ::M3BaseStatus;
  return base_;
}

// repeated double wrench = 2;
inline int M3LoadX6Status::wrench_size() const {
  return wrench_.size();
}
inline void M3LoadX6Status::clear_wrench() {
  wrench_.Clear();
}
inline const ::google::protobuf::RepeatedField< double >&
M3LoadX6Status::wrench() const {
  return wrench_;
}
inline ::google::protobuf::RepeatedField< double >*
M3LoadX6Status::mutable_wrench() {
  return &wrench_;
}
inline double M3LoadX6Status::wrench(int index) const {
  return wrench_.Get(index);
}
inline void M3LoadX6Status::set_wrench(int index, double value) {
  wrench_.Set(index, value);
}
inline void M3LoadX6Status::add_wrench(double value) {
  wrench_.Add(value);
}

// optional double adc_ext_0 = 3;
inline bool M3LoadX6Status::has_adc_ext_0() const {
  return _has_bit(2);
}
inline void M3LoadX6Status::clear_adc_ext_0() {
  adc_ext_0_ = 0;
  _clear_bit(2);
}
inline double M3LoadX6Status::adc_ext_0() const {
  return adc_ext_0_;
}
inline void M3LoadX6Status::set_adc_ext_0(double value) {
  _set_bit(2);
  adc_ext_0_ = value;
}

// optional double adc_ext_1 = 4;
inline bool M3LoadX6Status::has_adc_ext_1() const {
  return _has_bit(3);
}
inline void M3LoadX6Status::clear_adc_ext_1() {
  adc_ext_1_ = 0;
  _clear_bit(3);
}
inline double M3LoadX6Status::adc_ext_1() const {
  return adc_ext_1_;
}
inline void M3LoadX6Status::set_adc_ext_1(double value) {
  _set_bit(3);
  adc_ext_1_ = value;
}

// optional double adc_ext_2 = 5;
inline bool M3LoadX6Status::has_adc_ext_2() const {
  return _has_bit(4);
}
inline void M3LoadX6Status::clear_adc_ext_2() {
  adc_ext_2_ = 0;
  _clear_bit(4);
}
inline double M3LoadX6Status::adc_ext_2() const {
  return adc_ext_2_;
}
inline void M3LoadX6Status::set_adc_ext_2(double value) {
  _set_bit(4);
  adc_ext_2_ = value;
}

// optional double dig_ext_0 = 6;
inline bool M3LoadX6Status::has_dig_ext_0() const {
  return _has_bit(5);
}
inline void M3LoadX6Status::clear_dig_ext_0() {
  dig_ext_0_ = 0;
  _clear_bit(5);
}
inline double M3LoadX6Status::dig_ext_0() const {
  return dig_ext_0_;
}
inline void M3LoadX6Status::set_dig_ext_0(double value) {
  _set_bit(5);
  dig_ext_0_ = value;
}

// -------------------------------------------------------------------

// M3LoadX6Command

// -------------------------------------------------------------------

// M3LoadX6Param


#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

#endif  // PROTOBUF_loadx6_2eproto__INCLUDED
