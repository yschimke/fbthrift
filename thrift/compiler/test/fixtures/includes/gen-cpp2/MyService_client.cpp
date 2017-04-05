/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/MyService.h"

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/MyService.tcc"

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace cpp2 {

const char* MyServiceAsyncClient::getServiceName() {
  return "MyService";
}

void MyServiceAsyncClient::query(std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i) {
  ::apache::thrift::RpcOptions rpcOptions;
  query(rpcOptions, std::move(callback), s, i);
}

void MyServiceAsyncClient::query(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i) {
  switch(getChannel()->getProtocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolWriter writer;
      queryT(&writer, rpcOptions, std::move(callback), s, i);
      break;
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolWriter writer;
      queryT(&writer, rpcOptions, std::move(callback), s, i);
      break;
    }
    default:
    {
      throw apache::thrift::TApplicationException("Could not find Protocol");
    }
  }
}

void MyServiceAsyncClient::sync_query(const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_query(rpcOptions, s, i);
}

void MyServiceAsyncClient::sync_query(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i) {
  apache::thrift::ClientReceiveState _returnState;
  auto callback = std::make_unique<apache::thrift::ClientSyncCallback>(&_returnState, getChannel()->getEventBase(), false);
  query(rpcOptions, std::move(callback), s, i);
  getChannel()->getEventBase()->loopForever();
  SCOPE_EXIT {
    if (_returnState.header() && !_returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(_returnState.header()->releaseHeaders());
    }
  };
  if (!_returnState.buf()) {
    assert(_returnState.exception());
    std::rethrow_exception(_returnState.exception());
  }
  recv_query(_returnState);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_query(const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_query(rpcOptions, s, i);
}

folly::Future<folly::Unit> MyServiceAsyncClient::future_query(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i) {
  folly::Promise<folly::Unit> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::FutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_query, channel_);
  query(rpcOptions, std::move(callback), s, i);
  return _future;
}

folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> MyServiceAsyncClient::header_future_query(apache::thrift::RpcOptions& rpcOptions, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i) {
  folly::Promise<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> _promise;
  auto _future = _promise.getFuture();
  auto callback = std::make_unique<apache::thrift::HeaderFutureCallback<folly::Unit>>(std::move(_promise), recv_wrapped_query, channel_);
  query(rpcOptions, std::move(callback), s, i);
  return _future;
}

void MyServiceAsyncClient::query(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, const  ::cpp2::MyStruct& s, const  ::cpp2::Included& i) {
  query(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), s, i);
}

folly::exception_wrapper MyServiceAsyncClient::recv_wrapped_query(::apache::thrift::ClientReceiveState& state) {
  auto ew = state.exceptionWrapper();
  if (ew) {
    return ew;
  }
  if (!state.buf()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }
  switch(state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return recv_wrapped_queryT(&reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return recv_wrapped_queryT(&reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

void MyServiceAsyncClient::recv_query(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_query(state);
  if (ew) {
    ew.throwException();
  }
}

void MyServiceAsyncClient::recv_instance_query(::apache::thrift::ClientReceiveState& state) {
  recv_query(state);
}

folly::exception_wrapper MyServiceAsyncClient::recv_instance_wrapped_query(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_query(state);
}

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
