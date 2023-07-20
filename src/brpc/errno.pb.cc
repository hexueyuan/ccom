// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/errno.proto

#include "brpc/errno.pb.h"

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
}  // namespace brpc
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_brpc_2ferrno_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_brpc_2ferrno_2eproto = nullptr;
const uint32_t TableStruct_brpc_2ferrno_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_brpc_2ferrno_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020brpc/errno.proto\022\004brpc*\256\003\n\005Errno\022\017\n\nEN"
  "OSERVICE\020\351\007\022\016\n\tENOMETHOD\020\352\007\022\r\n\010EREQUEST\020"
  "\353\007\022\r\n\010ERPCAUTH\020\354\007\022\022\n\rETOOMANYFAILS\020\355\007\022\021\n"
  "\014EPCHANFINISH\020\356\007\022\023\n\016EBACKUPREQUEST\020\357\007\022\021\n"
  "\014ERPCTIMEDOUT\020\360\007\022\022\n\rEFAILEDSOCKET\020\361\007\022\n\n\005"
  "EHTTP\020\362\007\022\021\n\014EOVERCROWDED\020\363\007\022\025\n\020ERTMPPUBL"
  "ISHABLE\020\364\007\022\026\n\021ERTMPCREATESTREAM\020\365\007\022\t\n\004EE"
  "OF\020\366\007\022\014\n\007EUNUSED\020\367\007\022\t\n\004ESSL\020\370\007\022\025\n\020EH2RUN"
  "OUTSTREAMS\020\371\007\022\014\n\007EREJECT\020\372\007\022\016\n\tEINTERNAL"
  "\020\321\017\022\016\n\tERESPONSE\020\322\017\022\014\n\007ELOGOFF\020\323\017\022\013\n\006ELI"
  "MIT\020\324\017\022\013\n\006ECLOSE\020\325\017\022\t\n\004EITP\020\326\017\022\n\n\005ERDMA\020"
  "\271\027\022\r\n\010ERDMAMEM\020\272\027B\031\n\010com.brpcB\rBaiduRpcE"
  "rrno"
  ;
static ::_pbi::once_flag descriptor_table_brpc_2ferrno_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_brpc_2ferrno_2eproto = {
    false, false, 484, descriptor_table_protodef_brpc_2ferrno_2eproto,
    "brpc/errno.proto",
    &descriptor_table_brpc_2ferrno_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_brpc_2ferrno_2eproto::offsets,
    nullptr, file_level_enum_descriptors_brpc_2ferrno_2eproto,
    file_level_service_descriptors_brpc_2ferrno_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_brpc_2ferrno_2eproto_getter() {
  return &descriptor_table_brpc_2ferrno_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_brpc_2ferrno_2eproto(&descriptor_table_brpc_2ferrno_2eproto);
namespace brpc {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Errno_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_brpc_2ferrno_2eproto);
  return file_level_enum_descriptors_brpc_2ferrno_2eproto[0];
}
bool Errno_IsValid(int value) {
  switch (value) {
    case 1001:
    case 1002:
    case 1003:
    case 1004:
    case 1005:
    case 1006:
    case 1007:
    case 1008:
    case 1009:
    case 1010:
    case 1011:
    case 1012:
    case 1013:
    case 1014:
    case 1015:
    case 1016:
    case 1017:
    case 1018:
    case 2001:
    case 2002:
    case 2003:
    case 2004:
    case 2005:
    case 2006:
    case 3001:
    case 3002:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace brpc
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
