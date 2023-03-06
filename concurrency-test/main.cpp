#include <iostream>
#include <thread>
#include <vector>

#include "helloWorld.hpp"

void modOdds(std::vector<int> &vec) {
    for (auto it{ vec.begin() }; it !=vec.end(); it++) {
        if (*it % 2 == 0 && *it != 2) *it = 0;
    }
}

void modFods(std::vector<int> &vec) {
    for (auto &it : vec) {
        if (it % 3 == 0 && it != 3) it = 0;
    }
}

void modCods(std::vector<int> &vec) {
    for (auto &it : vec) {
        if (it % 5 == 0 && it != 5) it = 0;
    }
}

int main()
{
    std::vector<int> v;
    for (size_t i{}; i < 25; i++) {
        v.push_back((i));
    }

    std::thread foo(modOdds, std::ref(v));
    std::thread food(modFods, std::ref(v));
    std::thread foood(modCods, std::ref(v));


    foo.join();
    food.join();
    foood.join();

    for (auto it : v) {
        if (it) {
            std::cout << it << std::endl;
        }
    }

}
