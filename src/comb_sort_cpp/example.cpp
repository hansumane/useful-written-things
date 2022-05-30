#include <iostream>
#include <ctime>
#include "comb_sort.h"

int main() {
    srand(time(0));
    size_t size = 10;
    std::vector<long long> array;

    for (size_t i = 0; i < size; ++i) {
        array.push_back(rand() % 90 + 10);
        std::cout << array[i] << ' ';
    } std::cout << std::endl;

    std::comb_sort(array);

    for (size_t i = 0; i < size; ++i) {
        array.push_back(rand() % 90 + 10);
        std::cout << array[i] << ' ';
    } std::cout << std::endl;
}
