#include <iostream>
#include <thread>

void helloWorld() {
    for (size_t i{}; i < 5; i++) {
        std::cout << "Hello World!" << std::endl;
    }
}

void goodByeWorld() {
    for (size_t i{}; i < 5; i++) {
        std::cout << "Good Bye World!" << std::endl;
    }
}

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
