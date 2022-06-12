#ifndef EXCEPTION_H
#define EXCEPTION_H


namespace crs {

class exception {

protected:

    std::string message;
    int error_code;

public:

    exception();
    virtual ~exception();
    exception(const exception&);
    exception(const std::string);
    exception(const int);
    exception(const std::string, const int);

    std::string msg();
    int err();
    void show();

};

}


#endif