#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>


double sq(double arg) {
    if (arg < 0) {
        return std::numeric_limits<double>::quiet_NaN();
    }
    else if (arg == 0.0) {
        return 0.0;
    }
    else {
        double n = arg;
        double x = n;
        for (unsigned i = 0; i < 8; ++i)
            x = (x + n/x) / 2;
        return x;
    }
}


int main() {
    double number, result, real;
    std::cout << "Input number: ";
    std::cin >> number; std::cin.get();
    result = sq(number);
    real = sqrt(number);
    std::cout << std::fixed << std::setprecision(20)
            << "my function:    " << result << std::endl;
    std::cout << std::fixed << std::setprecision(20)
            << "sqrt function:  " << real << std::endl;
    return 0;
}
