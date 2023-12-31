// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/streaming_rpc_meta.proto

#include "brpc/streaming_rpc_meta.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace brpc {
PROTOBUF_CONSTEXPR StreamSettings::StreamSettings(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.stream_id_)*/int64_t{0}
  , /*decltype(_impl_.need_feedback_)*/false
  , /*decltype(_impl_.writable_)*/false} {}
struct StreamSettingsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StreamSettingsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StreamSettingsDefaultTypeInternal() {}
  union {
    StreamSettings _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StreamSettingsDefaultTypeInternal _StreamSettings_default_instance_;
PROTOBUF_CONSTEXPR StreamFrameMeta::StreamFrameMeta(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.feedback_)*/nullptr
  , /*decltype(_impl_.stream_id_)*/int64_t{0}
  , /*decltype(_impl_.source_stream_id_)*/int64_t{0}
  , /*decltype(_impl_.frame_type_)*/0
  , /*decltype(_impl_.has_continuation_)*/false} {}
struct StreamFrameMetaDefaultTypeInternal {
  PROTOBUF_CONSTEXPR StreamFrameMetaDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~StreamFrameMetaDefaultTypeInternal() {}
  union {
    StreamFrameMeta _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 StreamFrameMetaDefaultTypeInternal _StreamFrameMeta_default_instance_;
PROTOBUF_CONSTEXPR Feedback::Feedback(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.consumed_size_)*/int64_t{0}} {}
struct FeedbackDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FeedbackDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FeedbackDefaultTypeInternal() {}
  union {
    Feedback _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FeedbackDefaultTypeInternal _Feedback_default_instance_;
}  // namespace brpc
static ::_pb::Metadata file_level_metadata_brpc_2fstreaming_5frpc_5fmeta_2eproto[3];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_brpc_2fstreaming_5frpc_5fmeta_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_brpc_2fstreaming_5frpc_5fmeta_2eproto = nullptr;

const uint32_t TableStruct_brpc_2fstreaming_5frpc_5fmeta_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::brpc::StreamSettings, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::brpc::StreamSettings, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::brpc::StreamSettings, _impl_.stream_id_),
  PROTOBUF_FIELD_OFFSET(::brpc::StreamSettings, _impl_.need_feedback_),
  PROTOBUF_FIELD_OFFSET(::brpc::StreamSettings, _impl_.writable_),
  0,
  1,
  2,
  PROTOBUF_FIELD_OFFSET(::brpc::StreamFrameMeta, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::brpc::StreamFrameMeta, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::brpc::StreamFrameMeta, _impl_.stream_id_),
  PROTOBUF_FIELD_OFFSET(::brpc::StreamFrameMeta, _impl_.source_stream_id_),
  PROTOBUF_FIELD_OFFSET(::brpc::StreamFrameMeta, _impl_.frame_type_),
  PROTOBUF_FIELD_OFFSET(::brpc::StreamFrameMeta, _impl_.has_continuation_),
  PROTOBUF_FIELD_OFFSET(::brpc::StreamFrameMeta, _impl_.feedback_),
  1,
  2,
  3,
  4,
  0,
  PROTOBUF_FIELD_OFFSET(::brpc::Feedback, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::brpc::Feedback, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::brpc::Feedback, _impl_.consumed_size_),
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, -1, sizeof(::brpc::StreamSettings)},
  { 12, 23, -1, sizeof(::brpc::StreamFrameMeta)},
  { 28, 35, -1, sizeof(::brpc::Feedback)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::brpc::_StreamSettings_default_instance_._instance,
  &::brpc::_StreamFrameMeta_default_instance_._instance,
  &::brpc::_Feedback_default_instance_._instance,
};

const char descriptor_table_protodef_brpc_2fstreaming_5frpc_5fmeta_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035brpc/streaming_rpc_meta.proto\022\004brpc\"Z\n"
  "\016StreamSettings\022\021\n\tstream_id\030\001 \002(\003\022\034\n\rne"
  "ed_feedback\030\002 \001(\010:\005false\022\027\n\010writable\030\003 \001"
  "(\010:\005false\"\237\001\n\017StreamFrameMeta\022\021\n\tstream_"
  "id\030\001 \002(\003\022\030\n\020source_stream_id\030\002 \001(\003\022#\n\nfr"
  "ame_type\030\003 \001(\0162\017.brpc.FrameType\022\030\n\020has_c"
  "ontinuation\030\004 \001(\010\022 \n\010feedback\030\005 \001(\0132\016.br"
  "pc.Feedback\"!\n\010Feedback\022\025\n\rconsumed_size"
  "\030\001 \001(\003*{\n\tFrameType\022\026\n\022FRAME_TYPE_UNKNOW"
  "N\020\000\022\022\n\016FRAME_TYPE_RST\020\001\022\024\n\020FRAME_TYPE_CL"
  "OSE\020\002\022\023\n\017FRAME_TYPE_DATA\020\003\022\027\n\023FRAME_TYPE"
  "_FEEDBACK\020\004B\035\n\010com.brpcB\021StreamingRpcPro"
  "to"
  ;
static ::_pbi::once_flag descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto = {
    false, false, 482, descriptor_table_protodef_brpc_2fstreaming_5frpc_5fmeta_2eproto,
    "brpc/streaming_rpc_meta.proto",
    &descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_brpc_2fstreaming_5frpc_5fmeta_2eproto::offsets,
    file_level_metadata_brpc_2fstreaming_5frpc_5fmeta_2eproto, file_level_enum_descriptors_brpc_2fstreaming_5frpc_5fmeta_2eproto,
    file_level_service_descriptors_brpc_2fstreaming_5frpc_5fmeta_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto_getter() {
  return &descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_brpc_2fstreaming_5frpc_5fmeta_2eproto(&descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto);
namespace brpc {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* FrameType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto);
  return file_level_enum_descriptors_brpc_2fstreaming_5frpc_5fmeta_2eproto[0];
}
bool FrameType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class StreamSettings::_Internal {
 public:
  using HasBits = decltype(std::declval<StreamSettings>()._impl_._has_bits_);
  static void set_has_stream_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_need_feedback(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_writable(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000001) ^ 0x00000001) != 0;
  }
};

StreamSettings::StreamSettings(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:brpc.StreamSettings)
}
StreamSettings::StreamSettings(const StreamSettings& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.stream_id_){}
    , decltype(_impl_.need_feedback_){}
    , decltype(_impl_.writable_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.stream_id_, &from._impl_.stream_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.writable_) -
    reinterpret_cast<char*>(&_impl_.stream_id_)) + sizeof(_impl_.writable_));
  // @@protoc_insertion_point(copy_constructor:brpc.StreamSettings)
}

inline void StreamSettings::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.stream_id_){int64_t{0}}
    , decltype(_impl_.need_feedback_){false}
    , decltype(_impl_.writable_){false}
  };
}

StreamSettings::~StreamSettings() {
  // @@protoc_insertion_point(destructor:brpc.StreamSettings)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StreamSettings::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void StreamSettings::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StreamSettings::Clear() {
// @@protoc_insertion_point(message_clear_start:brpc.StreamSettings)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    ::memset(&_impl_.stream_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.writable_) -
        reinterpret_cast<char*>(&_impl_.stream_id_)) + sizeof(_impl_.writable_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamSettings::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int64 stream_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_stream_id(&has_bits);
          _impl_.stream_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool need_feedback = 2 [default = false];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_need_feedback(&has_bits);
          _impl_.need_feedback_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool writable = 3 [default = false];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_writable(&has_bits);
          _impl_.writable_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* StreamSettings::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.StreamSettings)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required int64 stream_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_stream_id(), target);
  }

  // optional bool need_feedback = 2 [default = false];
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_need_feedback(), target);
  }

  // optional bool writable = 3 [default = false];
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_writable(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.StreamSettings)
  return target;
}

size_t StreamSettings::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:brpc.StreamSettings)
  size_t total_size = 0;

  // required int64 stream_id = 1;
  if (_internal_has_stream_id()) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_stream_id());
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000006u) {
    // optional bool need_feedback = 2 [default = false];
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 + 1;
    }

    // optional bool writable = 3 [default = false];
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 + 1;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamSettings::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StreamSettings::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamSettings::GetClassData() const { return &_class_data_; }

void StreamSettings::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<StreamSettings *>(to)->MergeFrom(
      static_cast<const StreamSettings &>(from));
}


void StreamSettings::MergeFrom(const StreamSettings& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:brpc.StreamSettings)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.stream_id_ = from._impl_.stream_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.need_feedback_ = from._impl_.need_feedback_;
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.writable_ = from._impl_.writable_;
    }
    _impl_._has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamSettings::CopyFrom(const StreamSettings& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:brpc.StreamSettings)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamSettings::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  return true;
}

void StreamSettings::InternalSwap(StreamSettings* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(StreamSettings, _impl_.writable_)
      + sizeof(StreamSettings::_impl_.writable_)
      - PROTOBUF_FIELD_OFFSET(StreamSettings, _impl_.stream_id_)>(
          reinterpret_cast<char*>(&_impl_.stream_id_),
          reinterpret_cast<char*>(&other->_impl_.stream_id_));
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamSettings::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto_getter, &descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto_once,
      file_level_metadata_brpc_2fstreaming_5frpc_5fmeta_2eproto[0]);
}

// ===================================================================

class StreamFrameMeta::_Internal {
 public:
  using HasBits = decltype(std::declval<StreamFrameMeta>()._impl_._has_bits_);
  static void set_has_stream_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_source_stream_id(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_frame_type(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_has_continuation(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static const ::brpc::Feedback& feedback(const StreamFrameMeta* msg);
  static void set_has_feedback(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000002) ^ 0x00000002) != 0;
  }
};

const ::brpc::Feedback&
StreamFrameMeta::_Internal::feedback(const StreamFrameMeta* msg) {
  return *msg->_impl_.feedback_;
}
StreamFrameMeta::StreamFrameMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:brpc.StreamFrameMeta)
}
StreamFrameMeta::StreamFrameMeta(const StreamFrameMeta& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.feedback_){nullptr}
    , decltype(_impl_.stream_id_){}
    , decltype(_impl_.source_stream_id_){}
    , decltype(_impl_.frame_type_){}
    , decltype(_impl_.has_continuation_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_feedback()) {
    _impl_.feedback_ = new ::brpc::Feedback(*from._impl_.feedback_);
  }
  ::memcpy(&_impl_.stream_id_, &from._impl_.stream_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.has_continuation_) -
    reinterpret_cast<char*>(&_impl_.stream_id_)) + sizeof(_impl_.has_continuation_));
  // @@protoc_insertion_point(copy_constructor:brpc.StreamFrameMeta)
}

inline void StreamFrameMeta::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.feedback_){nullptr}
    , decltype(_impl_.stream_id_){int64_t{0}}
    , decltype(_impl_.source_stream_id_){int64_t{0}}
    , decltype(_impl_.frame_type_){0}
    , decltype(_impl_.has_continuation_){false}
  };
}

StreamFrameMeta::~StreamFrameMeta() {
  // @@protoc_insertion_point(destructor:brpc.StreamFrameMeta)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void StreamFrameMeta::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.feedback_;
}

void StreamFrameMeta::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void StreamFrameMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:brpc.StreamFrameMeta)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(_impl_.feedback_ != nullptr);
    _impl_.feedback_->Clear();
  }
  if (cached_has_bits & 0x0000001eu) {
    ::memset(&_impl_.stream_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.has_continuation_) -
        reinterpret_cast<char*>(&_impl_.stream_id_)) + sizeof(_impl_.has_continuation_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* StreamFrameMeta::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int64 stream_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_stream_id(&has_bits);
          _impl_.stream_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 source_stream_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_source_stream_id(&has_bits);
          _impl_.source_stream_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .brpc.FrameType frame_type = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::brpc::FrameType_IsValid(val))) {
            _internal_set_frame_type(static_cast<::brpc::FrameType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(3, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional bool has_continuation = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_has_continuation(&has_bits);
          _impl_.has_continuation_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .brpc.Feedback feedback = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_feedback(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* StreamFrameMeta::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.StreamFrameMeta)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required int64 stream_id = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_stream_id(), target);
  }

  // optional int64 source_stream_id = 2;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_source_stream_id(), target);
  }

  // optional .brpc.FrameType frame_type = 3;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_frame_type(), target);
  }

  // optional bool has_continuation = 4;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_has_continuation(), target);
  }

  // optional .brpc.Feedback feedback = 5;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::feedback(this),
        _Internal::feedback(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.StreamFrameMeta)
  return target;
}

size_t StreamFrameMeta::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:brpc.StreamFrameMeta)
  size_t total_size = 0;

  // required int64 stream_id = 1;
  if (_internal_has_stream_id()) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_stream_id());
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional .brpc.Feedback feedback = 5;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.feedback_);
  }

  if (cached_has_bits & 0x0000001cu) {
    // optional int64 source_stream_id = 2;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_source_stream_id());
    }

    // optional .brpc.FrameType frame_type = 3;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_frame_type());
    }

    // optional bool has_continuation = 4;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 + 1;
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData StreamFrameMeta::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    StreamFrameMeta::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*StreamFrameMeta::GetClassData() const { return &_class_data_; }

void StreamFrameMeta::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<StreamFrameMeta *>(to)->MergeFrom(
      static_cast<const StreamFrameMeta &>(from));
}


void StreamFrameMeta::MergeFrom(const StreamFrameMeta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:brpc.StreamFrameMeta)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_feedback()->::brpc::Feedback::MergeFrom(from._internal_feedback());
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.stream_id_ = from._impl_.stream_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.source_stream_id_ = from._impl_.source_stream_id_;
    }
    if (cached_has_bits & 0x00000008u) {
      _impl_.frame_type_ = from._impl_.frame_type_;
    }
    if (cached_has_bits & 0x00000010u) {
      _impl_.has_continuation_ = from._impl_.has_continuation_;
    }
    _impl_._has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void StreamFrameMeta::CopyFrom(const StreamFrameMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:brpc.StreamFrameMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StreamFrameMeta::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  return true;
}

void StreamFrameMeta::InternalSwap(StreamFrameMeta* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(StreamFrameMeta, _impl_.has_continuation_)
      + sizeof(StreamFrameMeta::_impl_.has_continuation_)
      - PROTOBUF_FIELD_OFFSET(StreamFrameMeta, _impl_.feedback_)>(
          reinterpret_cast<char*>(&_impl_.feedback_),
          reinterpret_cast<char*>(&other->_impl_.feedback_));
}

::PROTOBUF_NAMESPACE_ID::Metadata StreamFrameMeta::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto_getter, &descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto_once,
      file_level_metadata_brpc_2fstreaming_5frpc_5fmeta_2eproto[1]);
}

// ===================================================================

class Feedback::_Internal {
 public:
  using HasBits = decltype(std::declval<Feedback>()._impl_._has_bits_);
  static void set_has_consumed_size(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Feedback::Feedback(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:brpc.Feedback)
}
Feedback::Feedback(const Feedback& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.consumed_size_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.consumed_size_ = from._impl_.consumed_size_;
  // @@protoc_insertion_point(copy_constructor:brpc.Feedback)
}

inline void Feedback::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.consumed_size_){int64_t{0}}
  };
}

Feedback::~Feedback() {
  // @@protoc_insertion_point(destructor:brpc.Feedback)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Feedback::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Feedback::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Feedback::Clear() {
// @@protoc_insertion_point(message_clear_start:brpc.Feedback)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.consumed_size_ = int64_t{0};
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Feedback::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int64 consumed_size = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_consumed_size(&has_bits);
          _impl_.consumed_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Feedback::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.Feedback)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional int64 consumed_size = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_consumed_size(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.Feedback)
  return target;
}

size_t Feedback::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:brpc.Feedback)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional int64 consumed_size = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_consumed_size());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Feedback::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Feedback::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Feedback::GetClassData() const { return &_class_data_; }

void Feedback::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Feedback *>(to)->MergeFrom(
      static_cast<const Feedback &>(from));
}


void Feedback::MergeFrom(const Feedback& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:brpc.Feedback)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_consumed_size()) {
    _internal_set_consumed_size(from._internal_consumed_size());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Feedback::CopyFrom(const Feedback& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:brpc.Feedback)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Feedback::IsInitialized() const {
  return true;
}

void Feedback::InternalSwap(Feedback* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  swap(_impl_.consumed_size_, other->_impl_.consumed_size_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Feedback::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto_getter, &descriptor_table_brpc_2fstreaming_5frpc_5fmeta_2eproto_once,
      file_level_metadata_brpc_2fstreaming_5frpc_5fmeta_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace brpc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::brpc::StreamSettings*
Arena::CreateMaybeMessage< ::brpc::StreamSettings >(Arena* arena) {
  return Arena::CreateMessageInternal< ::brpc::StreamSettings >(arena);
}
template<> PROTOBUF_NOINLINE ::brpc::StreamFrameMeta*
Arena::CreateMaybeMessage< ::brpc::StreamFrameMeta >(Arena* arena) {
  return Arena::CreateMessageInternal< ::brpc::StreamFrameMeta >(arena);
}
template<> PROTOBUF_NOINLINE ::brpc::Feedback*
Arena::CreateMaybeMessage< ::brpc::Feedback >(Arena* arena) {
  return Arena::CreateMessageInternal< ::brpc::Feedback >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
