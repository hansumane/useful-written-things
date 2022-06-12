#include <iostream>
#include "Exception.h"

int main() {
    try {
        throw crs::exception("this is an exception", 1);
    }
    catch (crs::exception& e) {
        std::cout << e.msg() << ' ' << e.err() << std::endl;
        e.show();
    }
}
