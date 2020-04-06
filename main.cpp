#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <httplib.h>

int main () {
    using namespace httplib;

    Server svr;
    svr.Get("/hi", [](const Request& req, Response& res) {
    res.set_content("Hello World!", "text/plain");
  });

  svr.listen("localhost", 3000);
};