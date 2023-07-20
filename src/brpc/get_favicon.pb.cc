// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/get_favicon.proto

#include "brpc/get_favicon.pb.h"

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
PROTOBUF_CONSTEXPR GetFaviconRequest::GetFaviconRequest(
    ::_pbi::ConstantInitialized) {}
struct GetFaviconRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetFaviconRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetFaviconRequestDefaultTypeInternal() {}
  union {
    GetFaviconRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetFaviconRequestDefaultTypeInternal _GetFaviconRequest_default_instance_;
PROTOBUF_CONSTEXPR GetFaviconResponse::GetFaviconResponse(
    ::_pbi::ConstantInitialized) {}
struct GetFaviconResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GetFaviconResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GetFaviconResponseDefaultTypeInternal() {}
  union {
    GetFaviconResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GetFaviconResponseDefaultTypeInternal _GetFaviconResponse_default_instance_;
}  // namespace brpc
static ::_pb::Metadata file_level_metadata_brpc_2fget_5ffavicon_2eproto[2];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_brpc_2fget_5ffavicon_2eproto = nullptr;
static const ::_pb::ServiceDescriptor* file_level_service_descriptors_brpc_2fget_5ffavicon_2eproto[1];

const uint32_t TableStruct_brpc_2fget_5ffavicon_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::brpc::GetFaviconRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::brpc::GetFaviconResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::brpc::GetFaviconRequest)},
  { 6, -1, -1, sizeof(::brpc::GetFaviconResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::brpc::_GetFaviconRequest_default_instance_._instance,
  &::brpc::_GetFaviconResponse_default_instance_._instance,
};

const char descriptor_table_protodef_brpc_2fget_5ffavicon_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026brpc/get_favicon.proto\022\004brpc\"\023\n\021GetFav"
  "iconRequest\"\024\n\022GetFaviconResponse2J\n\003ico"
  "\022C\n\016default_method\022\027.brpc.GetFaviconRequ"
  "est\032\030.brpc.GetFaviconResponseB\034\n\010com.brp"
  "cB\nGetFavicon\200\001\001\210\001\001"
  ;
static ::_pbi::once_flag descriptor_table_brpc_2fget_5ffavicon_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_brpc_2fget_5ffavicon_2eproto = {
    false, false, 179, descriptor_table_protodef_brpc_2fget_5ffavicon_2eproto,
    "brpc/get_favicon.proto",
    &descriptor_table_brpc_2fget_5ffavicon_2eproto_once, nullptr, 0, 2,
    schemas, file_default_instances, TableStruct_brpc_2fget_5ffavicon_2eproto::offsets,
    file_level_metadata_brpc_2fget_5ffavicon_2eproto, file_level_enum_descriptors_brpc_2fget_5ffavicon_2eproto,
    file_level_service_descriptors_brpc_2fget_5ffavicon_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_brpc_2fget_5ffavicon_2eproto_getter() {
  return &descriptor_table_brpc_2fget_5ffavicon_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_brpc_2fget_5ffavicon_2eproto(&descriptor_table_brpc_2fget_5ffavicon_2eproto);
namespace brpc {

// ===================================================================

class GetFaviconRequest::_Internal {
 public:
};

GetFaviconRequest::GetFaviconRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:brpc.GetFaviconRequest)
}
GetFaviconRequest::GetFaviconRequest(const GetFaviconRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:brpc.GetFaviconRequest)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetFaviconRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetFaviconRequest::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata GetFaviconRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_brpc_2fget_5ffavicon_2eproto_getter, &descriptor_table_brpc_2fget_5ffavicon_2eproto_once,
      file_level_metadata_brpc_2fget_5ffavicon_2eproto[0]);
}

// ===================================================================

class GetFaviconResponse::_Internal {
 public:
};

GetFaviconResponse::GetFaviconResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:brpc.GetFaviconResponse)
}
GetFaviconResponse::GetFaviconResponse(const GetFaviconResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:brpc.GetFaviconResponse)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GetFaviconResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetFaviconResponse::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata GetFaviconResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_brpc_2fget_5ffavicon_2eproto_getter, &descriptor_table_brpc_2fget_5ffavicon_2eproto_once,
      file_level_metadata_brpc_2fget_5ffavicon_2eproto[1]);
}

// ===================================================================

ico::~ico() {}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* ico::descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_brpc_2fget_5ffavicon_2eproto);
  return file_level_service_descriptors_brpc_2fget_5ffavicon_2eproto[0];
}

const ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor* ico::GetDescriptor() {
  return descriptor();
}

void ico::default_method(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                         const ::brpc::GetFaviconRequest*,
                         ::brpc::GetFaviconResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method default_method() not implemented.");
  done->Run();
}

void ico::CallMethod(const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method,
                             ::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                             const ::PROTOBUF_NAMESPACE_ID::Message* request,
                             ::PROTOBUF_NAMESPACE_ID::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), file_level_service_descriptors_brpc_2fget_5ffavicon_2eproto[0]);
  switch(method->index()) {
    case 0:
      default_method(controller,
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<const ::brpc::GetFaviconRequest*>(
                 request),
             ::PROTOBUF_NAMESPACE_ID::internal::DownCast<::brpc::GetFaviconResponse*>(
                 response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& ico::GetRequestPrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::brpc::GetFaviconRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->input_type());
  }
}

const ::PROTOBUF_NAMESPACE_ID::Message& ico::GetResponsePrototype(
    const ::PROTOBUF_NAMESPACE_ID::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::brpc::GetFaviconResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::PROTOBUF_NAMESPACE_ID::MessageFactory::generated_factory()
          ->GetPrototype(method->output_type());
  }
}

ico_Stub::ico_Stub(::PROTOBUF_NAMESPACE_ID::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
ico_Stub::ico_Stub(
    ::PROTOBUF_NAMESPACE_ID::RpcChannel* channel,
    ::PROTOBUF_NAMESPACE_ID::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::PROTOBUF_NAMESPACE_ID::Service::STUB_OWNS_CHANNEL) {}
ico_Stub::~ico_Stub() {
  if (owns_channel_) delete channel_;
}

void ico_Stub::default_method(::PROTOBUF_NAMESPACE_ID::RpcController* controller,
                              const ::brpc::GetFaviconRequest* request,
                              ::brpc::GetFaviconResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace brpc
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::brpc::GetFaviconRequest*
Arena::CreateMaybeMessage< ::brpc::GetFaviconRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::brpc::GetFaviconRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::brpc::GetFaviconResponse*
Arena::CreateMaybeMessage< ::brpc::GetFaviconResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::brpc::GetFaviconResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
