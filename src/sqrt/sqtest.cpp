#include <iostream>
#include <iomanip>


double sq(double arg) {

    try {
        if (!(arg > 0)) {
            throw arg;
        }
    }
    catch (double& e) {
        std::cout << "Argument must be > 0, returning 0" << std::endl;
        return 0.0;
    }

    double n = arg;
    double x = n;
    for (unsigned i = 0; i < 8; ++i)
        x = (x + n/x) / 2;
    return x;

}


int main() {
    double number;
    std::cout << "Input number: ";
    std::cin >> number; std::cin.get();
    std::cout << std::fixed << std::setprecision(10) << sq(number) << std::endl;
    return 0;
}
