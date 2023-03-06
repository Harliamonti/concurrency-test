#include <iostream>
#include <thread>
#include <vector>

#include "helloWorld.cpp"

void modOdds(std::vector<int> &vec) {
    for (auto it{ vec.begin() }; it !=vec.end(); it++) {
        if(*it % 2 == 0) *it = 0;
    }
}

int main()
{
    std::vector<int> v{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };

//    std::thread foo(modOdds, v);
    modOdds(v);

    for (auto it : v) {
        std::cout << it << std::endl;
    }
}
