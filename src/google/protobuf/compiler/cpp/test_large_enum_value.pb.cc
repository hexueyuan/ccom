// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/compiler/cpp/test_large_enum_value.proto

#include "google/protobuf/compiler/cpp/test_large_enum_value.pb.h"

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

namespace protobuf_unittest {
PROTOBUF_CONSTEXPR TestLargeEnumValue::TestLargeEnumValue(
    ::_pbi::ConstantInitialized) {}
struct TestLargeEnumValueDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TestLargeEnumValueDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TestLargeEnumValueDefaultTypeInternal() {}
  union {
    TestLargeEnumValue _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TestLargeEnumValueDefaultTypeInternal _TestLargeEnumValue_default_instance_;
}  // namespace protobuf_unittest
static ::_pb::Metadata file_level_metadata_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto = nullptr;

const uint32_t TableStruct_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::protobuf_unittest::TestLargeEnumValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::protobuf_unittest::TestLargeEnumValue)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::protobuf_unittest::_TestLargeEnumValue_default_instance_._instance,
};

const char descriptor_table_protodef_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n8google/protobuf/compiler/cpp/test_larg"
  "e_enum_value.proto\022\021protobuf_unittest\"J\n"
  "\022TestLargeEnumValue\"4\n\022EnumWithLargeValu"
  "e\022\013\n\007VALUE_1\020\001\022\021\n\tVALUE_MAX\020\377\377\377\377\007"
  ;
static ::_pbi::once_flag descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto = {
    false, false, 153, descriptor_table_protodef_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto,
    "google/protobuf/compiler/cpp/test_large_enum_value.proto",
    &descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto::offsets,
    file_level_metadata_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto, file_level_enum_descriptors_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto,
    file_level_service_descriptors_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto_getter() {
  return &descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto(&descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto);
namespace protobuf_unittest {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* TestLargeEnumValue_EnumWithLargeValue_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto);
  return file_level_enum_descriptors_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto[0];
}
bool TestLargeEnumValue_EnumWithLargeValue_IsValid(int value) {
  switch (value) {
    case 1:
    case 2147483647:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr TestLargeEnumValue_EnumWithLargeValue TestLargeEnumValue::VALUE_1;
constexpr TestLargeEnumValue_EnumWithLargeValue TestLargeEnumValue::VALUE_MAX;
constexpr TestLargeEnumValue_EnumWithLargeValue TestLargeEnumValue::EnumWithLargeValue_MIN;
constexpr TestLargeEnumValue_EnumWithLargeValue TestLargeEnumValue::EnumWithLargeValue_MAX;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class TestLargeEnumValue::_Internal {
 public:
};

TestLargeEnumValue::TestLargeEnumValue(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:protobuf_unittest.TestLargeEnumValue)
}
TestLargeEnumValue::TestLargeEnumValue(const TestLargeEnumValue& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:protobuf_unittest.TestLargeEnumValue)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData TestLargeEnumValue::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*TestLargeEnumValue::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata TestLargeEnumValue::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto_getter, &descriptor_table_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto_once,
      file_level_metadata_google_2fprotobuf_2fcompiler_2fcpp_2ftest_5flarge_5fenum_5fvalue_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace protobuf_unittest
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::protobuf_unittest::TestLargeEnumValue*
Arena::CreateMaybeMessage< ::protobuf_unittest::TestLargeEnumValue >(Arena* arena) {
  return Arena::CreateMessageInternal< ::protobuf_unittest::TestLargeEnumValue >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
