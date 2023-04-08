#ifndef HUGENINTEGER_H
#define HUGENINTEGER_H

#include <string>
#include <iostream>

using std::string;
using std::cout;

class HugenInteger{

    public:
        HugenInteger(const char[40]);

        void input(const string &);
        void output();

        HugenInteger &add(const HugenInteger &);

        bool isEqualTo(const HugenInteger &);
        bool isNotEqualTo(const HugenInteger &);

        bool isGreaterThan(const HugenInteger &);
        bool isLessThan(const HugenInteger &);

        bool isGreaterThanOrIqual(const HugenInteger &);
        bool isLessThanOrIqual(const HugenInteger &);

    private:
    string array;
};

#endif