#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#include <httplib.h>
#include <iostream>

std::string getDummyData() {
	using namespace httplib;
	Client cli("jsonplaceholder.typicode.com", 80);
	auto res = cli.Get("/todos/1");
	if (res && res->status == 200) {
		std::cout << res->body << std::endl;
	}
	return res->body;
}


int main () {
  /*using namespace httplib;

    Server svr;
    svr.Get("/hi", [](const Request& req, Response& res) {
    res.set_content("Hello World!", "text/plain");
  });

  svr.listen("localhost", 3000);*/
};