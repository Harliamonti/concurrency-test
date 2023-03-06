#include <iostream>
#include <thread>
#include "helloWorld.cpp"

int main()
{
    std::thread foo(helloWorld);
    std::thread test(goodByeWorld);

    for (size_t i{}; i < 5; i++) {
        std::cout << "Main" << std::endl;
    }

    test.join();
    foo.join();
}
