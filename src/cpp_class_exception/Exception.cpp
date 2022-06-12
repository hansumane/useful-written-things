#include <iostream>
#include <iomanip>
#include "Exception.h"

using crs::exception;

exception::exception() :
    message("NULL"),
    error_code(0)
{}

exception::~exception() {}

exception::exception(const exception& object) :
    message(object.message),
    error_code(object.error_code)
{}

exception::exception(const std::string object) :
    message(object),
    error_code(-1)
{}

exception::exception(const int value) :
    message("N/A"),
    error_code(value)
{}

exception::exception(const std::string object, const int value) :
    message(object),
    error_code(value)
{}

std::string exception::msg() {
    return message;
}

int exception::err() {
    return error_code;
}

void exception::show() {
    std::cout << message << " (0x"
            << std::setw(sizeof(int) * 2) << std::setfill('0')
            << std::hex << error_code << std::dec
            << std::setw(0) << ')' << std::endl;
}