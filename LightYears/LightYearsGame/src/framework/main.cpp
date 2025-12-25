#include <iostream>
#include <memory>
#include <unistd.h>
#include "framework/Application.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cerr << "Warning: This is a sample warning message." << std::endl;

    //allocating on heap
    //can use
    std::unique_ptr<ly::Application> app = std::make_unique<ly::Application>();
    app->Run();
   
    return 0;
}