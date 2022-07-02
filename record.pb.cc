// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: record.proto

#include "record.pb.h"

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

PROTOBUF_CONSTEXPR Record::Record(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.address_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.nane_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.occupation_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.year_of_foundation_)*/0
  , /*decltype(_impl_.foreign_economic_activity_)*/false} {}
struct RecordDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RecordDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RecordDefaultTypeInternal() {}
  union {
    Record _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RecordDefaultTypeInternal _Record_default_instance_;
static ::_pb::Metadata file_level_metadata_record_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_record_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_record_2eproto = nullptr;

const uint32_t TableStruct_record_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::Record, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::Record, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Record, _impl_.year_of_foundation_),
  PROTOBUF_FIELD_OFFSET(::Record, _impl_.address_),
  PROTOBUF_FIELD_OFFSET(::Record, _impl_.nane_),
  PROTOBUF_FIELD_OFFSET(::Record, _impl_.occupation_),
  PROTOBUF_FIELD_OFFSET(::Record, _impl_.foreign_economic_activity_),
  3,
  0,
  1,
  2,
  4,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::Record)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_Record_default_instance_._instance,
};

const char descriptor_table_protodef_record_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\014record.proto\"z\n\006Record\022\032\n\022year_of_foun"
  "dation\030\001 \002(\005\022\017\n\007address\030\002 \002(\t\022\014\n\004nane\030\003 "
  "\002(\t\022\022\n\noccupation\030\004 \001(\t\022!\n\031foreign_econo"
  "mic_activity\030\005 \001(\010"
  ;
static ::_pbi::once_flag descriptor_table_record_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_record_2eproto = {
    false, false, 138, descriptor_table_protodef_record_2eproto,
    "record.proto",
    &descriptor_table_record_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_record_2eproto::offsets,
    file_level_metadata_record_2eproto, file_level_enum_descriptors_record_2eproto,
    file_level_service_descriptors_record_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_record_2eproto_getter() {
  return &descriptor_table_record_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_record_2eproto(&descriptor_table_record_2eproto);

// ===================================================================

class Record::_Internal {
 public:
  using HasBits = decltype(std::declval<Record>()._impl_._has_bits_);
  static void set_has_year_of_foundation(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_address(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_nane(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_occupation(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_foreign_economic_activity(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000000b) ^ 0x0000000b) != 0;
  }
};

Record::Record(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:Record)
}
Record::Record(const Record& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Record* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.address_){}
    , decltype(_impl_.nane_){}
    , decltype(_impl_.occupation_){}
    , decltype(_impl_.year_of_foundation_){}
    , decltype(_impl_.foreign_economic_activity_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.address_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.address_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_address()) {
    _this->_impl_.address_.Set(from._internal_address(), 
      _this->GetArenaForAllocation());
  }
  _impl_.nane_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.nane_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_nane()) {
    _this->_impl_.nane_.Set(from._internal_nane(), 
      _this->GetArenaForAllocation());
  }
  _impl_.occupation_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.occupation_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_occupation()) {
    _this->_impl_.occupation_.Set(from._internal_occupation(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.year_of_foundation_, &from._impl_.year_of_foundation_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.foreign_economic_activity_) -
    reinterpret_cast<char*>(&_impl_.year_of_foundation_)) + sizeof(_impl_.foreign_economic_activity_));
  // @@protoc_insertion_point(copy_constructor:Record)
}

inline void Record::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.address_){}
    , decltype(_impl_.nane_){}
    , decltype(_impl_.occupation_){}
    , decltype(_impl_.year_of_foundation_){0}
    , decltype(_impl_.foreign_economic_activity_){false}
  };
  _impl_.address_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.address_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.nane_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.nane_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.occupation_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.occupation_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Record::~Record() {
  // @@protoc_insertion_point(destructor:Record)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Record::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.address_.Destroy();
  _impl_.nane_.Destroy();
  _impl_.occupation_.Destroy();
}

void Record::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Record::Clear() {
// @@protoc_insertion_point(message_clear_start:Record)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _impl_.address_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      _impl_.nane_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      _impl_.occupation_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x00000018u) {
    ::memset(&_impl_.year_of_foundation_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&_impl_.foreign_economic_activity_) -
        reinterpret_cast<char*>(&_impl_.year_of_foundation_)) + sizeof(_impl_.foreign_economic_activity_));
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Record::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required int32 year_of_foundation = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_year_of_foundation(&has_bits);
          _impl_.year_of_foundation_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required string address = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_address();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "Record.address");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // required string nane = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_nane();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "Record.nane");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional string occupation = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_occupation();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          #ifndef NDEBUG
          ::_pbi::VerifyUTF8(str, "Record.occupation");
          #endif  // !NDEBUG
        } else
          goto handle_unusual;
        continue;
      // optional bool foreign_economic_activity = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_foreign_economic_activity(&has_bits);
          _impl_.foreign_economic_activity_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* Record::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Record)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // required int32 year_of_foundation = 1;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_year_of_foundation(), target);
  }

  // required string address = 2;
  if (cached_has_bits & 0x00000001u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_address().data(), static_cast<int>(this->_internal_address().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Record.address");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_address(), target);
  }

  // required string nane = 3;
  if (cached_has_bits & 0x00000002u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_nane().data(), static_cast<int>(this->_internal_nane().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Record.nane");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_nane(), target);
  }

  // optional string occupation = 4;
  if (cached_has_bits & 0x00000004u) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::VerifyUTF8StringNamedField(
      this->_internal_occupation().data(), static_cast<int>(this->_internal_occupation().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::SERIALIZE,
      "Record.occupation");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_occupation(), target);
  }

  // optional bool foreign_economic_activity = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_foreign_economic_activity(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Record)
  return target;
}

size_t Record::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:Record)
  size_t total_size = 0;

  if (_internal_has_address()) {
    // required string address = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_address());
  }

  if (_internal_has_nane()) {
    // required string nane = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_nane());
  }

  if (_internal_has_year_of_foundation()) {
    // required int32 year_of_foundation = 1;
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_year_of_foundation());
  }

  return total_size;
}
size_t Record::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Record)
  size_t total_size = 0;

  if (((_impl_._has_bits_[0] & 0x0000000b) ^ 0x0000000b) == 0) {  // All required fields are present.
    // required string address = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_address());

    // required string nane = 3;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_nane());

    // required int32 year_of_foundation = 1;
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_year_of_foundation());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string occupation = 4;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000004u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_occupation());
  }

  // optional bool foreign_economic_activity = 5;
  if (cached_has_bits & 0x00000010u) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Record::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Record::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Record::GetClassData() const { return &_class_data_; }


void Record::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Record*>(&to_msg);
  auto& from = static_cast<const Record&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:Record)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_set_address(from._internal_address());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_internal_set_nane(from._internal_nane());
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_internal_set_occupation(from._internal_occupation());
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.year_of_foundation_ = from._impl_.year_of_foundation_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.foreign_economic_activity_ = from._impl_.foreign_economic_activity_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Record::CopyFrom(const Record& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Record)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Record::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_impl_._has_bits_)) return false;
  return true;
}

void Record::InternalSwap(Record* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.address_, lhs_arena,
      &other->_impl_.address_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.nane_, lhs_arena,
      &other->_impl_.nane_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.occupation_, lhs_arena,
      &other->_impl_.occupation_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Record, _impl_.foreign_economic_activity_)
      + sizeof(Record::_impl_.foreign_economic_activity_)
      - PROTOBUF_FIELD_OFFSET(Record, _impl_.year_of_foundation_)>(
          reinterpret_cast<char*>(&_impl_.year_of_foundation_),
          reinterpret_cast<char*>(&other->_impl_.year_of_foundation_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Record::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_record_2eproto_getter, &descriptor_table_record_2eproto_once,
      file_level_metadata_record_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Record*
Arena::CreateMaybeMessage< ::Record >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Record >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
