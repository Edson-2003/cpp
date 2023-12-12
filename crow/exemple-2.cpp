#include <crow.h>
#include <iostream>

int main(int argc, char **argv)
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([]()
    {
        auto page = crow::mustache::load_text("index.html");
        return page;
    });
    app.port(18080)
       .multithreaded()
       .run();
    return 0;
}