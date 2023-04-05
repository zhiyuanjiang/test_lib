// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: test.proto

#include "test.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace GrpcService {
class MyRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MyRequest>
      _instance;
} _MyRequest_default_instance_;
class MyResponseDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MyResponse>
      _instance;
} _MyResponse_default_instance_;
}  // namespace GrpcService
namespace protobuf_test_2eproto {
static void InitDefaultsMyRequest() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::GrpcService::_MyRequest_default_instance_;
    new (ptr) ::GrpcService::MyRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::GrpcService::MyRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_MyRequest =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsMyRequest}, {}};

static void InitDefaultsMyResponse() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::GrpcService::_MyResponse_default_instance_;
    new (ptr) ::GrpcService::MyResponse();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::GrpcService::MyResponse::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_MyResponse =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsMyResponse}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_MyRequest.base);
  ::google::protobuf::internal::InitSCC(&scc_info_MyResponse.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GrpcService::MyRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GrpcService::MyRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GrpcService::MyRequest, a_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GrpcService::MyRequest, b_),
  0,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GrpcService::MyResponse, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GrpcService::MyResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::GrpcService::MyResponse, result_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::GrpcService::MyRequest)},
  { 9, 15, sizeof(::GrpcService::MyResponse)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::GrpcService::_MyRequest_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::GrpcService::_MyResponse_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "test.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\ntest.proto\022\013GrpcService\"!\n\tMyRequest\022\t"
      "\n\001a\030\001 \002(\005\022\t\n\001b\030\002 \002(\005\"\034\n\nMyResponse\022\016\n\006re"
      "sult\030\001 \002(\0052B\n\006AddInt\0228\n\003add\022\026.GrpcServic"
      "e.MyRequest\032\027.GrpcService.MyResponse\"\000"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 158);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "test.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_test_2eproto
namespace GrpcService {

// ===================================================================

void MyRequest::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MyRequest::kAFieldNumber;
const int MyRequest::kBFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MyRequest::MyRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_test_2eproto::scc_info_MyRequest.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:GrpcService.MyRequest)
}
MyRequest::MyRequest(const MyRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&a_, &from.a_,
    static_cast<size_t>(reinterpret_cast<char*>(&b_) -
    reinterpret_cast<char*>(&a_)) + sizeof(b_));
  // @@protoc_insertion_point(copy_constructor:GrpcService.MyRequest)
}

void MyRequest::SharedCtor() {
  ::memset(&a_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&b_) -
      reinterpret_cast<char*>(&a_)) + sizeof(b_));
}

MyRequest::~MyRequest() {
  // @@protoc_insertion_point(destructor:GrpcService.MyRequest)
  SharedDtor();
}

void MyRequest::SharedDtor() {
}

void MyRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* MyRequest::descriptor() {
  ::protobuf_test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_test_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MyRequest& MyRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_test_2eproto::scc_info_MyRequest.base);
  return *internal_default_instance();
}


void MyRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:GrpcService.MyRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    ::memset(&a_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&b_) -
        reinterpret_cast<char*>(&a_)) + sizeof(b_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MyRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GrpcService.MyRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 a = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_a();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &a_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 b = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_b();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &b_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GrpcService.MyRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GrpcService.MyRequest)
  return false;
#undef DO_
}

void MyRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GrpcService.MyRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 a = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->a(), output);
  }

  // required int32 b = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->b(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:GrpcService.MyRequest)
}

::google::protobuf::uint8* MyRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:GrpcService.MyRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 a = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->a(), target);
  }

  // required int32 b = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->b(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GrpcService.MyRequest)
  return target;
}

size_t MyRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:GrpcService.MyRequest)
  size_t total_size = 0;

  if (has_a()) {
    // required int32 a = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->a());
  }

  if (has_b()) {
    // required int32 b = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->b());
  }

  return total_size;
}
size_t MyRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GrpcService.MyRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 a = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->a());

    // required int32 b = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->b());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MyRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GrpcService.MyRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const MyRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MyRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GrpcService.MyRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GrpcService.MyRequest)
    MergeFrom(*source);
  }
}

void MyRequest::MergeFrom(const MyRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GrpcService.MyRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      a_ = from.a_;
    }
    if (cached_has_bits & 0x00000002u) {
      b_ = from.b_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MyRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GrpcService.MyRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MyRequest::CopyFrom(const MyRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GrpcService.MyRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MyRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void MyRequest::Swap(MyRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MyRequest::InternalSwap(MyRequest* other) {
  using std::swap;
  swap(a_, other->a_);
  swap(b_, other->b_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata MyRequest::GetMetadata() const {
  protobuf_test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_test_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void MyResponse::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MyResponse::kResultFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MyResponse::MyResponse()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_test_2eproto::scc_info_MyResponse.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:GrpcService.MyResponse)
}
MyResponse::MyResponse(const MyResponse& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  result_ = from.result_;
  // @@protoc_insertion_point(copy_constructor:GrpcService.MyResponse)
}

void MyResponse::SharedCtor() {
  result_ = 0;
}

MyResponse::~MyResponse() {
  // @@protoc_insertion_point(destructor:GrpcService.MyResponse)
  SharedDtor();
}

void MyResponse::SharedDtor() {
}

void MyResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* MyResponse::descriptor() {
  ::protobuf_test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_test_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const MyResponse& MyResponse::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_test_2eproto::scc_info_MyResponse.base);
  return *internal_default_instance();
}


void MyResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:GrpcService.MyResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  result_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MyResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:GrpcService.MyResponse)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 result = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_result();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &result_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:GrpcService.MyResponse)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:GrpcService.MyResponse)
  return false;
#undef DO_
}

void MyResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:GrpcService.MyResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 result = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->result(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:GrpcService.MyResponse)
}

::google::protobuf::uint8* MyResponse::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:GrpcService.MyResponse)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required int32 result = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->result(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:GrpcService.MyResponse)
  return target;
}

size_t MyResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:GrpcService.MyResponse)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // required int32 result = 1;
  if (has_result()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->result());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void MyResponse::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:GrpcService.MyResponse)
  GOOGLE_DCHECK_NE(&from, this);
  const MyResponse* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const MyResponse>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:GrpcService.MyResponse)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:GrpcService.MyResponse)
    MergeFrom(*source);
  }
}

void MyResponse::MergeFrom(const MyResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:GrpcService.MyResponse)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_result()) {
    set_result(from.result());
  }
}

void MyResponse::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:GrpcService.MyResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MyResponse::CopyFrom(const MyResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:GrpcService.MyResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MyResponse::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void MyResponse::Swap(MyResponse* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MyResponse::InternalSwap(MyResponse* other) {
  using std::swap;
  swap(result_, other->result_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata MyResponse::GetMetadata() const {
  protobuf_test_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_test_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace GrpcService
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::GrpcService::MyRequest* Arena::CreateMaybeMessage< ::GrpcService::MyRequest >(Arena* arena) {
  return Arena::CreateInternal< ::GrpcService::MyRequest >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::GrpcService::MyResponse* Arena::CreateMaybeMessage< ::GrpcService::MyResponse >(Arena* arena) {
  return Arena::CreateInternal< ::GrpcService::MyResponse >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
