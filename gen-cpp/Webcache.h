/**
 * Autogenerated by Thrift Compiler (0.9.3)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Webcache_H
#define Webcache_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include "file_types.h"

namespace Test {

#ifdef _WIN32
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class WebcacheIf {
 public:
  virtual ~WebcacheIf() {}
  virtual int32_t ping() = 0;
  virtual void status(std::string& _return) = 0;
  virtual void request(std::string& _return, const Url_req& req) = 0;
};

class WebcacheIfFactory {
 public:
  typedef WebcacheIf Handler;

  virtual ~WebcacheIfFactory() {}

  virtual WebcacheIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(WebcacheIf* /* handler */) = 0;
};

class WebcacheIfSingletonFactory : virtual public WebcacheIfFactory {
 public:
  WebcacheIfSingletonFactory(const boost::shared_ptr<WebcacheIf>& iface) : iface_(iface) {}
  virtual ~WebcacheIfSingletonFactory() {}

  virtual WebcacheIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(WebcacheIf* /* handler */) {}

 protected:
  boost::shared_ptr<WebcacheIf> iface_;
};

class WebcacheNull : virtual public WebcacheIf {
 public:
  virtual ~WebcacheNull() {}
  int32_t ping() {
    int32_t _return = 0;
    return _return;
  }
  void status(std::string& /* _return */) {
    return;
  }
  void request(std::string& /* _return */, const Url_req& /* req */) {
    return;
  }
};


class Webcache_ping_args {
 public:

  Webcache_ping_args(const Webcache_ping_args&);
  Webcache_ping_args& operator=(const Webcache_ping_args&);
  Webcache_ping_args() {
  }

  virtual ~Webcache_ping_args() throw();

  bool operator == (const Webcache_ping_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Webcache_ping_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Webcache_ping_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Webcache_ping_pargs {
 public:


  virtual ~Webcache_ping_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Webcache_ping_result__isset {
  _Webcache_ping_result__isset() : success(false) {}
  bool success :1;
} _Webcache_ping_result__isset;

class Webcache_ping_result {
 public:

  Webcache_ping_result(const Webcache_ping_result&);
  Webcache_ping_result& operator=(const Webcache_ping_result&);
  Webcache_ping_result() : success(0) {
  }

  virtual ~Webcache_ping_result() throw();
  int32_t success;

  _Webcache_ping_result__isset __isset;

  void __set_success(const int32_t val);

  bool operator == (const Webcache_ping_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Webcache_ping_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Webcache_ping_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Webcache_ping_presult__isset {
  _Webcache_ping_presult__isset() : success(false) {}
  bool success :1;
} _Webcache_ping_presult__isset;

class Webcache_ping_presult {
 public:


  virtual ~Webcache_ping_presult() throw();
  int32_t* success;

  _Webcache_ping_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};


class Webcache_status_args {
 public:

  Webcache_status_args(const Webcache_status_args&);
  Webcache_status_args& operator=(const Webcache_status_args&);
  Webcache_status_args() {
  }

  virtual ~Webcache_status_args() throw();

  bool operator == (const Webcache_status_args & /* rhs */) const
  {
    return true;
  }
  bool operator != (const Webcache_status_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Webcache_status_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Webcache_status_pargs {
 public:


  virtual ~Webcache_status_pargs() throw();

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Webcache_status_result__isset {
  _Webcache_status_result__isset() : success(false) {}
  bool success :1;
} _Webcache_status_result__isset;

class Webcache_status_result {
 public:

  Webcache_status_result(const Webcache_status_result&);
  Webcache_status_result& operator=(const Webcache_status_result&);
  Webcache_status_result() : success() {
  }

  virtual ~Webcache_status_result() throw();
  std::string success;

  _Webcache_status_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const Webcache_status_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Webcache_status_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Webcache_status_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Webcache_status_presult__isset {
  _Webcache_status_presult__isset() : success(false) {}
  bool success :1;
} _Webcache_status_presult__isset;

class Webcache_status_presult {
 public:


  virtual ~Webcache_status_presult() throw();
  std::string* success;

  _Webcache_status_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _Webcache_request_args__isset {
  _Webcache_request_args__isset() : req(false) {}
  bool req :1;
} _Webcache_request_args__isset;

class Webcache_request_args {
 public:

  Webcache_request_args(const Webcache_request_args&);
  Webcache_request_args& operator=(const Webcache_request_args&);
  Webcache_request_args() {
  }

  virtual ~Webcache_request_args() throw();
  Url_req req;

  _Webcache_request_args__isset __isset;

  void __set_req(const Url_req& val);

  bool operator == (const Webcache_request_args & rhs) const
  {
    if (!(req == rhs.req))
      return false;
    return true;
  }
  bool operator != (const Webcache_request_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Webcache_request_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class Webcache_request_pargs {
 public:


  virtual ~Webcache_request_pargs() throw();
  const Url_req* req;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Webcache_request_result__isset {
  _Webcache_request_result__isset() : success(false) {}
  bool success :1;
} _Webcache_request_result__isset;

class Webcache_request_result {
 public:

  Webcache_request_result(const Webcache_request_result&);
  Webcache_request_result& operator=(const Webcache_request_result&);
  Webcache_request_result() : success() {
  }

  virtual ~Webcache_request_result() throw();
  std::string success;

  _Webcache_request_result__isset __isset;

  void __set_success(const std::string& val);

  bool operator == (const Webcache_request_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    return true;
  }
  bool operator != (const Webcache_request_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Webcache_request_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _Webcache_request_presult__isset {
  _Webcache_request_presult__isset() : success(false) {}
  bool success :1;
} _Webcache_request_presult__isset;

class Webcache_request_presult {
 public:


  virtual ~Webcache_request_presult() throw();
  std::string* success;

  _Webcache_request_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class WebcacheClient : virtual public WebcacheIf {
 public:
  WebcacheClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  WebcacheClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t ping();
  void send_ping();
  int32_t recv_ping();
  void status(std::string& _return);
  void send_status();
  void recv_status(std::string& _return);
  void request(std::string& _return, const Url_req& req);
  void send_request(const Url_req& req);
  void recv_request(std::string& _return);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class WebcacheProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  boost::shared_ptr<WebcacheIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (WebcacheProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_ping(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_status(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_request(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  WebcacheProcessor(boost::shared_ptr<WebcacheIf> iface) :
    iface_(iface) {
    processMap_["ping"] = &WebcacheProcessor::process_ping;
    processMap_["status"] = &WebcacheProcessor::process_status;
    processMap_["request"] = &WebcacheProcessor::process_request;
  }

  virtual ~WebcacheProcessor() {}
};

class WebcacheProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  WebcacheProcessorFactory(const ::boost::shared_ptr< WebcacheIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::boost::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::boost::shared_ptr< WebcacheIfFactory > handlerFactory_;
};

class WebcacheMultiface : virtual public WebcacheIf {
 public:
  WebcacheMultiface(std::vector<boost::shared_ptr<WebcacheIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~WebcacheMultiface() {}
 protected:
  std::vector<boost::shared_ptr<WebcacheIf> > ifaces_;
  WebcacheMultiface() {}
  void add(boost::shared_ptr<WebcacheIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  int32_t ping() {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ping();
    }
    return ifaces_[i]->ping();
  }

  void status(std::string& _return) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->status(_return);
    }
    ifaces_[i]->status(_return);
    return;
  }

  void request(std::string& _return, const Url_req& req) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->request(_return, req);
    }
    ifaces_[i]->request(_return, req);
    return;
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class WebcacheConcurrentClient : virtual public WebcacheIf {
 public:
  WebcacheConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  WebcacheConcurrentClient(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(boost::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, boost::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  int32_t ping();
  int32_t send_ping();
  int32_t recv_ping(const int32_t seqid);
  void status(std::string& _return);
  int32_t send_status();
  void recv_status(std::string& _return, const int32_t seqid);
  void request(std::string& _return, const Url_req& req);
  int32_t send_request(const Url_req& req);
  void recv_request(std::string& _return, const int32_t seqid);
 protected:
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  boost::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  ::apache::thrift::async::TConcurrentClientSyncInfo sync_;
};

#ifdef _WIN32
  #pragma warning( pop )
#endif

} // namespace

#endif