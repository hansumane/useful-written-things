#include <vector>
#include <cmath>
#define PHI ((sqrt(5) + 1) / 2)

namespace std {


template<typename T>
void comb_sort(std::vector<T> &array) {
    double factor = 1 / (1 - exp(-PHI));
    size_t step = array.size() - 1;
    T temp;
    while (step >= 1) {
        for (size_t i = 0; i + step < array.size(); ++i) {
            if (array[i] > array[i + step]) {
                temp = array[i + step];
                array[i + step] = array[i];
                array[i] = temp;
            }
        }
        step /= factor;
    }
}


}
