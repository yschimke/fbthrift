/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/fatal-compat/gen-cpp2/service_with_special_names.h"

#include "thrift/compiler/test/fixtures/fatal-compat/gen-cpp2/service_with_special_names.tcc"

#include <thrift/lib/cpp2/protocol/Protocol.h>
#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace test_cpp2 { namespace cpp_reflection {

std::unique_ptr<apache::thrift::AsyncProcessor> service_with_special_namesSvIf::getProcessor() {
  return std::make_unique<service_with_special_namesAsyncProcessor>(this);
}

int32_t service_with_special_namesSvIf::get() {
  throw apache::thrift::TApplicationException("Function get is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_get() {
  return apache::thrift::detail::si::future([&] { return get(); });
}

void service_with_special_namesSvIf::async_tm_get(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_get(); });
}

int32_t service_with_special_namesSvIf::getter() {
  throw apache::thrift::TApplicationException("Function getter is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_getter() {
  return apache::thrift::detail::si::future([&] { return getter(); });
}

void service_with_special_namesSvIf::async_tm_getter(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_getter(); });
}

int32_t service_with_special_namesSvIf::lists() {
  throw apache::thrift::TApplicationException("Function lists is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_lists() {
  return apache::thrift::detail::si::future([&] { return lists(); });
}

void service_with_special_namesSvIf::async_tm_lists(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_lists(); });
}

int32_t service_with_special_namesSvIf::maps() {
  throw apache::thrift::TApplicationException("Function maps is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_maps() {
  return apache::thrift::detail::si::future([&] { return maps(); });
}

void service_with_special_namesSvIf::async_tm_maps(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_maps(); });
}

int32_t service_with_special_namesSvIf::name() {
  throw apache::thrift::TApplicationException("Function name is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_name() {
  return apache::thrift::detail::si::future([&] { return name(); });
}

void service_with_special_namesSvIf::async_tm_name(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_name(); });
}

int32_t service_with_special_namesSvIf::name_to_value() {
  throw apache::thrift::TApplicationException("Function name_to_value is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_name_to_value() {
  return apache::thrift::detail::si::future([&] { return name_to_value(); });
}

void service_with_special_namesSvIf::async_tm_name_to_value(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_name_to_value(); });
}

int32_t service_with_special_namesSvIf::names() {
  throw apache::thrift::TApplicationException("Function names is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_names() {
  return apache::thrift::detail::si::future([&] { return names(); });
}

void service_with_special_namesSvIf::async_tm_names(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_names(); });
}

int32_t service_with_special_namesSvIf::prefix_tree() {
  throw apache::thrift::TApplicationException("Function prefix_tree is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_prefix_tree() {
  return apache::thrift::detail::si::future([&] { return prefix_tree(); });
}

void service_with_special_namesSvIf::async_tm_prefix_tree(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_prefix_tree(); });
}

int32_t service_with_special_namesSvIf::sets() {
  throw apache::thrift::TApplicationException("Function sets is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_sets() {
  return apache::thrift::detail::si::future([&] { return sets(); });
}

void service_with_special_namesSvIf::async_tm_sets(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_sets(); });
}

int32_t service_with_special_namesSvIf::setter() {
  throw apache::thrift::TApplicationException("Function setter is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_setter() {
  return apache::thrift::detail::si::future([&] { return setter(); });
}

void service_with_special_namesSvIf::async_tm_setter(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_setter(); });
}

int32_t service_with_special_namesSvIf::str() {
  throw apache::thrift::TApplicationException("Function str is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_str() {
  return apache::thrift::detail::si::future([&] { return str(); });
}

void service_with_special_namesSvIf::async_tm_str(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_str(); });
}

int32_t service_with_special_namesSvIf::strings() {
  throw apache::thrift::TApplicationException("Function strings is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_strings() {
  return apache::thrift::detail::si::future([&] { return strings(); });
}

void service_with_special_namesSvIf::async_tm_strings(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_strings(); });
}

int32_t service_with_special_namesSvIf::type() {
  throw apache::thrift::TApplicationException("Function type is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_type() {
  return apache::thrift::detail::si::future([&] { return type(); });
}

void service_with_special_namesSvIf::async_tm_type(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_type(); });
}

int32_t service_with_special_namesSvIf::value() {
  throw apache::thrift::TApplicationException("Function value is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_value() {
  return apache::thrift::detail::si::future([&] { return value(); });
}

void service_with_special_namesSvIf::async_tm_value(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_value(); });
}

int32_t service_with_special_namesSvIf::value_to_name() {
  throw apache::thrift::TApplicationException("Function value_to_name is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_value_to_name() {
  return apache::thrift::detail::si::future([&] { return value_to_name(); });
}

void service_with_special_namesSvIf::async_tm_value_to_name(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_value_to_name(); });
}

int32_t service_with_special_namesSvIf::values() {
  throw apache::thrift::TApplicationException("Function values is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_values() {
  return apache::thrift::detail::si::future([&] { return values(); });
}

void service_with_special_namesSvIf::async_tm_values(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_values(); });
}

int32_t service_with_special_namesSvIf::id() {
  throw apache::thrift::TApplicationException("Function id is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_id() {
  return apache::thrift::detail::si::future([&] { return id(); });
}

void service_with_special_namesSvIf::async_tm_id(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_id(); });
}

int32_t service_with_special_namesSvIf::ids() {
  throw apache::thrift::TApplicationException("Function ids is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_ids() {
  return apache::thrift::detail::si::future([&] { return ids(); });
}

void service_with_special_namesSvIf::async_tm_ids(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_ids(); });
}

int32_t service_with_special_namesSvIf::descriptor() {
  throw apache::thrift::TApplicationException("Function descriptor is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_descriptor() {
  return apache::thrift::detail::si::future([&] { return descriptor(); });
}

void service_with_special_namesSvIf::async_tm_descriptor(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_descriptor(); });
}

int32_t service_with_special_namesSvIf::descriptors() {
  throw apache::thrift::TApplicationException("Function descriptors is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_descriptors() {
  return apache::thrift::detail::si::future([&] { return descriptors(); });
}

void service_with_special_namesSvIf::async_tm_descriptors(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_descriptors(); });
}

int32_t service_with_special_namesSvIf::key() {
  throw apache::thrift::TApplicationException("Function key is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_key() {
  return apache::thrift::detail::si::future([&] { return key(); });
}

void service_with_special_namesSvIf::async_tm_key(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_key(); });
}

int32_t service_with_special_namesSvIf::keys() {
  throw apache::thrift::TApplicationException("Function keys is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_keys() {
  return apache::thrift::detail::si::future([&] { return keys(); });
}

void service_with_special_namesSvIf::async_tm_keys(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_keys(); });
}

int32_t service_with_special_namesSvIf::annotation() {
  throw apache::thrift::TApplicationException("Function annotation is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_annotation() {
  return apache::thrift::detail::si::future([&] { return annotation(); });
}

void service_with_special_namesSvIf::async_tm_annotation(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_annotation(); });
}

int32_t service_with_special_namesSvIf::annotations() {
  throw apache::thrift::TApplicationException("Function annotations is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_annotations() {
  return apache::thrift::detail::si::future([&] { return annotations(); });
}

void service_with_special_namesSvIf::async_tm_annotations(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_annotations(); });
}

int32_t service_with_special_namesSvIf::member() {
  throw apache::thrift::TApplicationException("Function member is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_member() {
  return apache::thrift::detail::si::future([&] { return member(); });
}

void service_with_special_namesSvIf::async_tm_member(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_member(); });
}

int32_t service_with_special_namesSvIf::members() {
  throw apache::thrift::TApplicationException("Function members is unimplemented");
}

folly::Future<int32_t> service_with_special_namesSvIf::future_members() {
  return apache::thrift::detail::si::future([&] { return members(); });
}

void service_with_special_namesSvIf::async_tm_members(std::unique_ptr<apache::thrift::HandlerCallback<int32_t>> callback) {
  apache::thrift::detail::si::async_tm(this, std::move(callback), [&] { return future_members(); });
}

int32_t service_with_special_namesSvNull::get() {
  return 0;
}

int32_t service_with_special_namesSvNull::getter() {
  return 0;
}

int32_t service_with_special_namesSvNull::lists() {
  return 0;
}

int32_t service_with_special_namesSvNull::maps() {
  return 0;
}

int32_t service_with_special_namesSvNull::name() {
  return 0;
}

int32_t service_with_special_namesSvNull::name_to_value() {
  return 0;
}

int32_t service_with_special_namesSvNull::names() {
  return 0;
}

int32_t service_with_special_namesSvNull::prefix_tree() {
  return 0;
}

int32_t service_with_special_namesSvNull::sets() {
  return 0;
}

int32_t service_with_special_namesSvNull::setter() {
  return 0;
}

int32_t service_with_special_namesSvNull::str() {
  return 0;
}

int32_t service_with_special_namesSvNull::strings() {
  return 0;
}

int32_t service_with_special_namesSvNull::type() {
  return 0;
}

int32_t service_with_special_namesSvNull::value() {
  return 0;
}

int32_t service_with_special_namesSvNull::value_to_name() {
  return 0;
}

int32_t service_with_special_namesSvNull::values() {
  return 0;
}

int32_t service_with_special_namesSvNull::id() {
  return 0;
}

int32_t service_with_special_namesSvNull::ids() {
  return 0;
}

int32_t service_with_special_namesSvNull::descriptor() {
  return 0;
}

int32_t service_with_special_namesSvNull::descriptors() {
  return 0;
}

int32_t service_with_special_namesSvNull::key() {
  return 0;
}

int32_t service_with_special_namesSvNull::keys() {
  return 0;
}

int32_t service_with_special_namesSvNull::annotation() {
  return 0;
}

int32_t service_with_special_namesSvNull::annotations() {
  return 0;
}

int32_t service_with_special_namesSvNull::member() {
  return 0;
}

int32_t service_with_special_namesSvNull::members() {
  return 0;
}

const char* service_with_special_namesAsyncProcessor::getServiceName() {
  return "service_with_special_names";
}

folly::Optional<std::string> service_with_special_namesAsyncProcessor::getCacheKey(folly::IOBuf* buf, apache::thrift::protocol::PROTOCOL_TYPES protType) {
  return apache::thrift::detail::ap::get_cache_key(buf, protType, cacheKeyMap_);
}

void service_with_special_namesAsyncProcessor::process(std::unique_ptr<apache::thrift::ResponseChannel::Request> req, std::unique_ptr<folly::IOBuf> buf, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, std::move(req), std::move(buf), protType, context, eb, tm);
}

bool service_with_special_namesAsyncProcessor::isOnewayMethod(const folly::IOBuf* buf, const apache::thrift::transport::THeader* header) {
  return apache::thrift::detail::ap::is_oneway_method(buf, header, onewayMethods_);
}

std::unordered_set<std::string> service_with_special_namesAsyncProcessor::onewayMethods_ {};
std::unordered_map<std::string, int16_t> service_with_special_namesAsyncProcessor::cacheKeyMap_ {};
const service_with_special_namesAsyncProcessor::BinaryProtocolProcessMap& service_with_special_namesAsyncProcessor::getBinaryProtocolProcessMap() {
  return binaryProcessMap_;
}

const service_with_special_namesAsyncProcessor::BinaryProtocolProcessMap service_with_special_namesAsyncProcessor::binaryProcessMap_ {
  {"get", &service_with_special_namesAsyncProcessor::_processInThread_get<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"getter", &service_with_special_namesAsyncProcessor::_processInThread_getter<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"lists", &service_with_special_namesAsyncProcessor::_processInThread_lists<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"maps", &service_with_special_namesAsyncProcessor::_processInThread_maps<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"name", &service_with_special_namesAsyncProcessor::_processInThread_name<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"name_to_value", &service_with_special_namesAsyncProcessor::_processInThread_name_to_value<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"names", &service_with_special_namesAsyncProcessor::_processInThread_names<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"prefix_tree", &service_with_special_namesAsyncProcessor::_processInThread_prefix_tree<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"sets", &service_with_special_namesAsyncProcessor::_processInThread_sets<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"setter", &service_with_special_namesAsyncProcessor::_processInThread_setter<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"str", &service_with_special_namesAsyncProcessor::_processInThread_str<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"strings", &service_with_special_namesAsyncProcessor::_processInThread_strings<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"type", &service_with_special_namesAsyncProcessor::_processInThread_type<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"value", &service_with_special_namesAsyncProcessor::_processInThread_value<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"value_to_name", &service_with_special_namesAsyncProcessor::_processInThread_value_to_name<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"values", &service_with_special_namesAsyncProcessor::_processInThread_values<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"id", &service_with_special_namesAsyncProcessor::_processInThread_id<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"ids", &service_with_special_namesAsyncProcessor::_processInThread_ids<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"descriptor", &service_with_special_namesAsyncProcessor::_processInThread_descriptor<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"descriptors", &service_with_special_namesAsyncProcessor::_processInThread_descriptors<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"key", &service_with_special_namesAsyncProcessor::_processInThread_key<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"keys", &service_with_special_namesAsyncProcessor::_processInThread_keys<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"annotation", &service_with_special_namesAsyncProcessor::_processInThread_annotation<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"annotations", &service_with_special_namesAsyncProcessor::_processInThread_annotations<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"member", &service_with_special_namesAsyncProcessor::_processInThread_member<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
  {"members", &service_with_special_namesAsyncProcessor::_processInThread_members<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>},
};

const service_with_special_namesAsyncProcessor::CompactProtocolProcessMap& service_with_special_namesAsyncProcessor::getCompactProtocolProcessMap() {
  return compactProcessMap_;
}

const service_with_special_namesAsyncProcessor::CompactProtocolProcessMap service_with_special_namesAsyncProcessor::compactProcessMap_ {
  {"get", &service_with_special_namesAsyncProcessor::_processInThread_get<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"getter", &service_with_special_namesAsyncProcessor::_processInThread_getter<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"lists", &service_with_special_namesAsyncProcessor::_processInThread_lists<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"maps", &service_with_special_namesAsyncProcessor::_processInThread_maps<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"name", &service_with_special_namesAsyncProcessor::_processInThread_name<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"name_to_value", &service_with_special_namesAsyncProcessor::_processInThread_name_to_value<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"names", &service_with_special_namesAsyncProcessor::_processInThread_names<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"prefix_tree", &service_with_special_namesAsyncProcessor::_processInThread_prefix_tree<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"sets", &service_with_special_namesAsyncProcessor::_processInThread_sets<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"setter", &service_with_special_namesAsyncProcessor::_processInThread_setter<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"str", &service_with_special_namesAsyncProcessor::_processInThread_str<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"strings", &service_with_special_namesAsyncProcessor::_processInThread_strings<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"type", &service_with_special_namesAsyncProcessor::_processInThread_type<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"value", &service_with_special_namesAsyncProcessor::_processInThread_value<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"value_to_name", &service_with_special_namesAsyncProcessor::_processInThread_value_to_name<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"values", &service_with_special_namesAsyncProcessor::_processInThread_values<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"id", &service_with_special_namesAsyncProcessor::_processInThread_id<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"ids", &service_with_special_namesAsyncProcessor::_processInThread_ids<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"descriptor", &service_with_special_namesAsyncProcessor::_processInThread_descriptor<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"descriptors", &service_with_special_namesAsyncProcessor::_processInThread_descriptors<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"key", &service_with_special_namesAsyncProcessor::_processInThread_key<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"keys", &service_with_special_namesAsyncProcessor::_processInThread_keys<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"annotation", &service_with_special_namesAsyncProcessor::_processInThread_annotation<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"annotations", &service_with_special_namesAsyncProcessor::_processInThread_annotations<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"member", &service_with_special_namesAsyncProcessor::_processInThread_member<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
  {"members", &service_with_special_namesAsyncProcessor::_processInThread_members<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>},
};

}} // test_cpp2::cpp_reflection
namespace apache { namespace thrift {

}} // apache::thrift
