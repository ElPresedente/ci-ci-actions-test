#pragma once

#include <drogon/HttpSimpleController.h>

using namespace drogon;

namespace api
{
class hello : public drogon::HttpSimpleController<hello>
{
  public:
    void asyncHandleHttpRequest(const HttpRequestPtr& req, std::function<void (const HttpResponsePtr &)> &&callback) override;
    PATH_LIST_BEGIN
    // list path definitions here;
    PATH_ADD("/header");
    PATH_LIST_END
};
}
