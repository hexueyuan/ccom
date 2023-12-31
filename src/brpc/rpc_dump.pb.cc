// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/rpc_dump.proto

#include "brpc/rpc_dump.pb.h"

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
PROTOBUF_CONSTEXPR RpcDumpMeta::RpcDumpMeta(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.service_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.method_name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.authentication_data_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.user_data_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.nshead_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.method_index_)*/0
  , /*decltype(_impl_.compress_type_)*/0
  , /*decltype(_impl_.protocol_type_)*/0
  , /*decltype(_impl_.attachment_size_)*/0} {}
struct RpcDumpMetaDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RpcDumpMetaDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RpcDumpMetaDefaultTypeInternal() {}
  union {
    RpcDumpMeta _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RpcDumpMetaDefaultTypeInternal _RpcDumpMeta_default_instance_;
}  // namespace brpc
static ::_pb::Metadata file_level_metadata_brpc_2frpc_5fdump_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_brpc_2frpc_5fdump_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_brpc_2frpc_5fdump_2eproto = nullptr;

const uint32_t TableStruct_brpc_2frpc_5fdump_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _impl_.service_name_),
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _impl_.method_name_),
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _impl_.method_index_),
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _impl_.compress_type_),
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _impl_.protocol_type_),
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _impl_.attachment_size_),
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _impl_.authentication_data_),
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _impl_.user_data_),
  PROTOBUF_FIELD_OFFSET(::brpc::RpcDumpMeta, _impl_.nshead_),
  0,
  1,
  5,
  6,
  7,
  8,
  2,
  3,
  4,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 15, -1, sizeof(::brpc::RpcDumpMeta)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::brpc::_RpcDumpMeta_default_instance_._instance,
};

const char descriptor_table_protodef_brpc_2frpc_5fdump_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023brpc/rpc_dump.proto\022\004brpc\032\022brpc/option"
  "s.proto\"\375\001\n\013RpcDumpMeta\022\024\n\014service_name\030"
  "\001 \001(\t\022\023\n\013method_name\030\002 \001(\t\022\024\n\014method_ind"
  "ex\030\003 \001(\005\022)\n\rcompress_type\030\004 \001(\0162\022.brpc.C"
  "ompressType\022)\n\rprotocol_type\030\005 \001(\0162\022.brp"
  "c.ProtocolType\022\027\n\017attachment_size\030\006 \001(\005\022"
  "\033\n\023authentication_data\030\007 \001(\014\022\021\n\tuser_dat"
  "a\030\010 \001(\014\022\016\n\006nshead\030\t \001(\014"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_brpc_2frpc_5fdump_2eproto_deps[1] = {
  &::descriptor_table_brpc_2foptions_2eproto,
};
static ::_pbi::once_flag descriptor_table_brpc_2frpc_5fdump_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_brpc_2frpc_5fdump_2eproto = {
    false, false, 303, descriptor_table_protodef_brpc_2frpc_5fdump_2eproto,
    "brpc/rpc_dump.proto",
    &descriptor_table_brpc_2frpc_5fdump_2eproto_once, descriptor_table_brpc_2frpc_5fdump_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_brpc_2frpc_5fdump_2eproto::offsets,
    file_level_metadata_brpc_2frpc_5fdump_2eproto, file_level_enum_descriptors_brpc_2frpc_5fdump_2eproto,
    file_level_service_descriptors_brpc_2frpc_5fdump_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_brpc_2frpc_5fdump_2eproto_getter() {
  return &descriptor_table_brpc_2frpc_5fdump_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_brpc_2frpc_5fdump_2eproto(&descriptor_table_brpc_2frpc_5fdump_2eproto);
namespace brpc {

// ===================================================================

class RpcDumpMeta::_Internal {
 public:
  using HasBits = decltype(std::declval<RpcDumpMeta>()._impl_._has_bits_);
  static void set_has_service_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_method_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_method_index(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_compress_type(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_protocol_type(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_attachment_size(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_authentication_data(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_user_data(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_nshead(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

RpcDumpMeta::RpcDumpMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:brpc.RpcDumpMeta)
}
RpcDumpMeta::RpcDumpMeta(const RpcDumpMeta& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.service_name_){}
    , decltype(_impl_.method_name_){}
    , decltype(_impl_.authentication_data_){}
    , decltype(_impl_.user_data_){}
    , decltype(_impl_.nshead_){}
    , decltype(_impl_.method_index_){}
    , decltype(_impl_.compress_type_){}
    , decltype(_impl_.protocol_type_){}
    , decltype(_impl_.attachment_size_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.service_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.service_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_service_name()) {
    _impl_.service_name_.Set(from._internal_service_name(), 
      GetArenaForAllocation());
  }
  _impl_.method_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.method_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_method_name()) {
    _impl_.method_name_.Set(from._internal_method_name(), 
      GetArenaForAllocation());
  }
  _impl_.authentication_data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.authentication_data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_authentication_data()) {
    _impl_.authentication_data_.Set(from._internal_authentication_data(), 
      GetArenaForAllocation());
  }
  _impl_.user_data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.user_data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_user_data()) {
    _impl_.user_data_.Set(from._internal_user_data(), 
      GetArenaForAllocation());
  }
  _impl_.nshead_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.nshead_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_nshead()) {
    _impl_.nshead_.Set(from._internal_nshead(), 
      GetArenaForAllocation());
  }
  ::memcpy(&_impl_.method_index_, &from._impl_.method_index_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.attachment_size_) -
    reinterpret_cast<char*>(&_impl_.method_index_)) + sizeof(_impl_.attachment_size_));
  // @@protoc_insertion_point(copy_constructor:brpc.RpcDumpMeta)
}

inline void RpcDumpMeta::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.service_name_){}
    , decltype(_impl_.method_name_){}
    , decltype(_impl_.authentication_data_){}
    , decltype(_impl_.user_data_){}
    , decltype(_impl_.nshead_){}
    , decltype(_impl_.method_index_){0}
    , decltype(_impl_.compress_type_){0}
    , decltype(_impl_.protocol_type_){0}
    , decltype(_impl_.attachment_size_){0}
  };
  _impl_.service_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.service_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.method_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.method_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.authentication_data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.authentication_data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.user_data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.user_data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.nshead_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.nshead_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

RpcDumpMeta::~RpcDumpMeta() {
  // @@protoc_insertion_point(destructor:brpc.RpcDumpMeta)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RpcDumpMeta::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.service_name_.Destroy();
  _impl_.method_name_.Destroy();
  _impl_.authentication_data_.Destroy();
  _impl_.user_data_.Destroy();
  _impl_.nshead_.Destroy();
}

void RpcDumpMeta::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RpcDumpMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:brpc.RpcDumpMeta)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.service_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.method_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.authentication_data_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      _impl_.user_data_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000010u) {
      _impl_.nshead_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x000000e0u) {
    ::memset(&_impl_.method_index_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.protocol_type_) -
        reinterpret_cast<char*>(&_impl_.method_index_)) + sizeof(_impl_.protocol_type_));
  }
  _impl_.attachment_size_ = 0;
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RpcDumpMeta::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string service_name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_service_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "brpc.RpcDumpMeta.service_name");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional string method_name = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_method_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "brpc.RpcDumpMeta.method_name");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional int32 method_index = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_method_index(&has_bits);
          _impl_.method_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .brpc.CompressType compress_type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::brpc::CompressType_IsValid(val))) {
            _internal_set_compress_type(static_cast<::brpc::CompressType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(4, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .brpc.ProtocolType protocol_type = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::brpc::ProtocolType_IsValid(val))) {
            _internal_set_protocol_type(static_cast<::brpc::ProtocolType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(5, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional int32 attachment_size = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_attachment_size(&has_bits);
          _impl_.attachment_size_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes authentication_data = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_authentication_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes user_data = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          auto str = _internal_mutable_user_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes nshead = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 74)) {
          auto str = _internal_mutable_nshead();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
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

uint8_t* RpcDumpMeta::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.RpcDumpMeta)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string service_name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_service_name().data(), static_cast<int>(this->_internal_service_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "brpc.RpcDumpMeta.service_name");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_service_name(), target);
  }

  // optional string method_name = 2;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_method_name().data(), static_cast<int>(this->_internal_method_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "brpc.RpcDumpMeta.method_name");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_method_name(), target);
  }

  // optional int32 method_index = 3;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_method_index(), target);
  }

  // optional .brpc.CompressType compress_type = 4;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_compress_type(), target);
  }

  // optional .brpc.ProtocolType protocol_type = 5;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_protocol_type(), target);
  }

  // optional int32 attachment_size = 6;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_attachment_size(), target);
  }

  // optional bytes authentication_data = 7;
  if (cached_has_bits & 0x00000004u) {
    target = stream->WriteBytesMaybeAliased(
        7, this->_internal_authentication_data(), target);
  }

  // optional bytes user_data = 8;
  if (cached_has_bits & 0x00000008u) {
    target = stream->WriteBytesMaybeAliased(
        8, this->_internal_user_data(), target);
  }

  // optional bytes nshead = 9;
  if (cached_has_bits & 0x00000010u) {
    target = stream->WriteBytesMaybeAliased(
        9, this->_internal_nshead(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.RpcDumpMeta)
  return target;
}

size_t RpcDumpMeta::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:brpc.RpcDumpMeta)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string service_name = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_service_name());
    }

    // optional string method_name = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_method_name());
    }

    // optional bytes authentication_data = 7;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_authentication_data());
    }

    // optional bytes user_data = 8;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_user_data());
    }

    // optional bytes nshead = 9;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_nshead());
    }

    // optional int32 method_index = 3;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_method_index());
    }

    // optional .brpc.CompressType compress_type = 4;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_compress_type());
    }

    // optional .brpc.ProtocolType protocol_type = 5;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_protocol_type());
    }

  }
  // optional int32 attachment_size = 6;
  if (cached_has_bits & 0x00000100u) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_attachment_size());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RpcDumpMeta::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    RpcDumpMeta::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RpcDumpMeta::GetClassData() const { return &_class_data_; }

void RpcDumpMeta::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<RpcDumpMeta *>(to)->MergeFrom(
      static_cast<const RpcDumpMeta &>(from));
}


void RpcDumpMeta::MergeFrom(const RpcDumpMeta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:brpc.RpcDumpMeta)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_service_name(from._internal_service_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_method_name(from._internal_method_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_authentication_data(from._internal_authentication_data());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_set_user_data(from._internal_user_data());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_set_nshead(from._internal_nshead());
    }
    if (cached_has_bits & 0x00000020u) {
      _impl_.method_index_ = from._impl_.method_index_;
    }
    if (cached_has_bits & 0x00000040u) {
      _impl_.compress_type_ = from._impl_.compress_type_;
    }
    if (cached_has_bits & 0x00000080u) {
      _impl_.protocol_type_ = from._impl_.protocol_type_;
    }
    _impl_._has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00000100u) {
    _internal_set_attachment_size(from._internal_attachment_size());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RpcDumpMeta::CopyFrom(const RpcDumpMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:brpc.RpcDumpMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcDumpMeta::IsInitialized() const {
  return true;
}

void RpcDumpMeta::InternalSwap(RpcDumpMeta* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.service_name_, lhs_arena,
      &other->_impl_.service_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.method_name_, lhs_arena,
      &other->_impl_.method_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.authentication_data_, lhs_arena,
      &other->_impl_.authentication_data_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.user_data_, lhs_arena,
      &other->_impl_.user_data_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.nshead_, lhs_arena,
      &other->_impl_.nshead_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RpcDumpMeta, _impl_.attachment_size_)
      + sizeof(RpcDumpMeta::_impl_.attachment_size_)
      - PROTOBUF_FIELD_OFFSET(RpcDumpMeta, _impl_.method_index_)>(
          reinterpret_cast<char*>(&_impl_.method_index_),
          reinterpret_cast<char*>(&other->_impl_.method_index_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RpcDumpMeta::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_brpc_2frpc_5fdump_2eproto_getter, &descriptor_table_brpc_2frpc_5fdump_2eproto_once,
      file_level_metadata_brpc_2frpc_5fdump_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace brpc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::brpc::RpcDumpMeta*
Arena::CreateMaybeMessage< ::brpc::RpcDumpMeta >(Arena* arena) {
  return Arena::CreateMessageInternal< ::brpc::RpcDumpMeta >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
