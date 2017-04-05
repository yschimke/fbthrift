/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp/Thrift.h>
#include <thrift/lib/cpp/TApplicationException.h>
#include <thrift/lib/cpp/protocol/TProtocol.h>
#include <thrift/lib/cpp/transport/TTransport.h>

#include <folly/json.h>

#include <folly/Range.h>

#include <folly/Conv.h>

#include <math.h>

#include <thrift/lib/cpp/Thrift.h>

using namespace folly::json;
namespace apache { namespace thrift { namespace reflection {
class Schema;
}}}
#include "thrift/compiler/test/fixtures/refs/gen-cpp/includes_types.h"




class StructUsingOtherNamespace;

void swap(StructUsingOtherNamespace &a, StructUsingOtherNamespace &b);

class StructUsingOtherNamespace : public apache::thrift::TStructType<StructUsingOtherNamespace> {
 public:

  static const uint64_t _reflection_id = 8285996275179549516U;
  static void _reflection_register(::apache::thrift::reflection::Schema&);
  StructUsingOtherNamespace() {
  }
  template <
    typename T__ThriftWrappedArgument__Ctor,
    typename... Args__ThriftWrappedArgument__Ctor
  >
  explicit StructUsingOtherNamespace(
    ::apache::thrift::detail::argument_wrapper<1, T__ThriftWrappedArgument__Ctor> arg,
    Args__ThriftWrappedArgument__Ctor&&... args
  ):
    StructUsingOtherNamespace(std::forward<Args__ThriftWrappedArgument__Ctor>(args)...)
  {
    other = std::make_unique<folly::_t<std::decay<T__ThriftWrappedArgument__Ctor>>>(arg.move());
  }

  StructUsingOtherNamespace(const StructUsingOtherNamespace&);
  StructUsingOtherNamespace& operator=(const StructUsingOtherNamespace& src) {
    StructUsingOtherNamespace tmp(src);
    swap(*this, tmp);
    return *this;
  }
  StructUsingOtherNamespace(StructUsingOtherNamespace&&) = default;
  StructUsingOtherNamespace& operator=(StructUsingOtherNamespace&&) = default;

  void __clear();

  virtual ~StructUsingOtherNamespace() throw() {}

  std::unique_ptr< ::cpp1::Included> other;

  struct __isset {
    __isset() { __clear(); } 
    void __clear() {
    }
  } __isset;

  bool operator == (const StructUsingOtherNamespace &) const;
  bool operator != (const StructUsingOtherNamespace& rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const StructUsingOtherNamespace & ) const;

  void readFromJson(const char* jsonText, size_t len, const folly::json::serialization_opts& opts = folly::json::serialization_opts());
  void readFromJson(const char* jsonText, const folly::json::serialization_opts& opts = folly::json::serialization_opts());
  uint32_t read(apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(apache::thrift::protocol::TProtocol* oprot) const;

};

class StructUsingOtherNamespace;
void merge(const StructUsingOtherNamespace& from, StructUsingOtherNamespace& to);
void merge(StructUsingOtherNamespace&& from, StructUsingOtherNamespace& to);


