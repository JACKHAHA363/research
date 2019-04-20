// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_serving/servables/tensorflow/saved_model_bundle_source_adapter.proto

#include "tensorflow_serving/servables/tensorflow/saved_model_bundle_source_adapter.pb.h"

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

namespace protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsession_5fbundle_5fconfig_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsession_5fbundle_5fconfig_2eproto ::google::protobuf::internal::SCCInfo<4> scc_info_SessionBundleConfig;
}  // namespace protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsession_5fbundle_5fconfig_2eproto
namespace tensorflow {
namespace serving {
class SavedModelBundleSourceAdapterConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SavedModelBundleSourceAdapterConfig>
      _instance;
} _SavedModelBundleSourceAdapterConfig_default_instance_;
}  // namespace serving
}  // namespace tensorflow
namespace protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsaved_5fmodel_5fbundle_5fsource_5fadapter_2eproto {
static void InitDefaultsSavedModelBundleSourceAdapterConfig() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tensorflow::serving::_SavedModelBundleSourceAdapterConfig_default_instance_;
    new (ptr) ::tensorflow::serving::SavedModelBundleSourceAdapterConfig();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tensorflow::serving::SavedModelBundleSourceAdapterConfig::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_SavedModelBundleSourceAdapterConfig =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsSavedModelBundleSourceAdapterConfig}, {
      &protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsession_5fbundle_5fconfig_2eproto::scc_info_SessionBundleConfig.base,}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_SavedModelBundleSourceAdapterConfig.base);
}

::google::protobuf::Metadata file_level_metadata[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::serving::SavedModelBundleSourceAdapterConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::tensorflow::serving::SavedModelBundleSourceAdapterConfig, legacy_config_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tensorflow::serving::SavedModelBundleSourceAdapterConfig)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tensorflow::serving::_SavedModelBundleSourceAdapterConfig_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "tensorflow_serving/servables/tensorflow/saved_model_bundle_source_adapter.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\nOtensorflow_serving/servables/tensorflo"
      "w/saved_model_bundle_source_adapter.prot"
      "o\022\022tensorflow.serving\032Ctensorflow_servin"
      "g/servables/tensorflow/session_bundle_co"
      "nfig.proto\"f\n#SavedModelBundleSourceAdap"
      "terConfig\022\?\n\rlegacy_config\030\350\007 \001(\0132\'.tens"
      "orflow.serving.SessionBundleConfigb\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 282);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow_serving/servables/tensorflow/saved_model_bundle_source_adapter.proto", &protobuf_RegisterTypes);
  ::protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsession_5fbundle_5fconfig_2eproto::AddDescriptors();
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
}  // namespace protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsaved_5fmodel_5fbundle_5fsource_5fadapter_2eproto
namespace tensorflow {
namespace serving {

// ===================================================================

void SavedModelBundleSourceAdapterConfig::InitAsDefaultInstance() {
  ::tensorflow::serving::_SavedModelBundleSourceAdapterConfig_default_instance_._instance.get_mutable()->legacy_config_ = const_cast< ::tensorflow::serving::SessionBundleConfig*>(
      ::tensorflow::serving::SessionBundleConfig::internal_default_instance());
}
void SavedModelBundleSourceAdapterConfig::clear_legacy_config() {
  if (GetArenaNoVirtual() == NULL && legacy_config_ != NULL) {
    delete legacy_config_;
  }
  legacy_config_ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SavedModelBundleSourceAdapterConfig::kLegacyConfigFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SavedModelBundleSourceAdapterConfig::SavedModelBundleSourceAdapterConfig()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsaved_5fmodel_5fbundle_5fsource_5fadapter_2eproto::scc_info_SavedModelBundleSourceAdapterConfig.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
}
SavedModelBundleSourceAdapterConfig::SavedModelBundleSourceAdapterConfig(const SavedModelBundleSourceAdapterConfig& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_legacy_config()) {
    legacy_config_ = new ::tensorflow::serving::SessionBundleConfig(*from.legacy_config_);
  } else {
    legacy_config_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
}

void SavedModelBundleSourceAdapterConfig::SharedCtor() {
  legacy_config_ = NULL;
}

SavedModelBundleSourceAdapterConfig::~SavedModelBundleSourceAdapterConfig() {
  // @@protoc_insertion_point(destructor:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  SharedDtor();
}

void SavedModelBundleSourceAdapterConfig::SharedDtor() {
  if (this != internal_default_instance()) delete legacy_config_;
}

void SavedModelBundleSourceAdapterConfig::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* SavedModelBundleSourceAdapterConfig::descriptor() {
  ::protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsaved_5fmodel_5fbundle_5fsource_5fadapter_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsaved_5fmodel_5fbundle_5fsource_5fadapter_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SavedModelBundleSourceAdapterConfig& SavedModelBundleSourceAdapterConfig::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsaved_5fmodel_5fbundle_5fsource_5fadapter_2eproto::scc_info_SavedModelBundleSourceAdapterConfig.base);
  return *internal_default_instance();
}


void SavedModelBundleSourceAdapterConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == NULL && legacy_config_ != NULL) {
    delete legacy_config_;
  }
  legacy_config_ = NULL;
  _internal_metadata_.Clear();
}

bool SavedModelBundleSourceAdapterConfig::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(16383u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .tensorflow.serving.SessionBundleConfig legacy_config = 1000;
      case 1000: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 8002 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_legacy_config()));
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
  // @@protoc_insertion_point(parse_success:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  return false;
#undef DO_
}

void SavedModelBundleSourceAdapterConfig::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.serving.SessionBundleConfig legacy_config = 1000;
  if (this->has_legacy_config()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1000, this->_internal_legacy_config(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
}

::google::protobuf::uint8* SavedModelBundleSourceAdapterConfig::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tensorflow.serving.SessionBundleConfig legacy_config = 1000;
  if (this->has_legacy_config()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1000, this->_internal_legacy_config(), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  return target;
}

size_t SavedModelBundleSourceAdapterConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // .tensorflow.serving.SessionBundleConfig legacy_config = 1000;
  if (this->has_legacy_config()) {
    total_size += 2 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *legacy_config_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SavedModelBundleSourceAdapterConfig::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  GOOGLE_DCHECK_NE(&from, this);
  const SavedModelBundleSourceAdapterConfig* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SavedModelBundleSourceAdapterConfig>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
    MergeFrom(*source);
  }
}

void SavedModelBundleSourceAdapterConfig::MergeFrom(const SavedModelBundleSourceAdapterConfig& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_legacy_config()) {
    mutable_legacy_config()->::tensorflow::serving::SessionBundleConfig::MergeFrom(from.legacy_config());
  }
}

void SavedModelBundleSourceAdapterConfig::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SavedModelBundleSourceAdapterConfig::CopyFrom(const SavedModelBundleSourceAdapterConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.serving.SavedModelBundleSourceAdapterConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SavedModelBundleSourceAdapterConfig::IsInitialized() const {
  return true;
}

void SavedModelBundleSourceAdapterConfig::Swap(SavedModelBundleSourceAdapterConfig* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SavedModelBundleSourceAdapterConfig::InternalSwap(SavedModelBundleSourceAdapterConfig* other) {
  using std::swap;
  swap(legacy_config_, other->legacy_config_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata SavedModelBundleSourceAdapterConfig::GetMetadata() const {
  protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsaved_5fmodel_5fbundle_5fsource_5fadapter_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_tensorflow_5fserving_2fservables_2ftensorflow_2fsaved_5fmodel_5fbundle_5fsource_5fadapter_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace serving
}  // namespace tensorflow
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::tensorflow::serving::SavedModelBundleSourceAdapterConfig* Arena::CreateMaybeMessage< ::tensorflow::serving::SavedModelBundleSourceAdapterConfig >(Arena* arena) {
  return Arena::CreateInternal< ::tensorflow::serving::SavedModelBundleSourceAdapterConfig >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)