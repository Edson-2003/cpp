#include <crow.h>
#include <iostream>

int main(int argc, char **argv)
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/")([]()
    {
        return "hello crow cpp";
    });
    app.port(18080)
       .multithreaded()
       .run();
    
    return 0;
}