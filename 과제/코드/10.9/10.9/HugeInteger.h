#pragma once

#include <iostream>
#include <string>

class HugeInteger {
public:
    HugeInteger() {}
    explicit HugeInteger(const std::string&);
    explicit HugeInteger(int[]);

    HugeInteger operator+(const HugeInteger& hi);
    HugeInteger operator-(const HugeInteger& hi);

    bool isZero();
    bool operator==(const HugeInteger& hi) const;
    bool operator!=(const HugeInteger& hi) const;
    bool operator<(const HugeInteger& hi) const;
    bool operator>=(const HugeInteger& hi) const;
    bool operator>(const HugeInteger& hi) const;
    bool operator<=(const HugeInteger& hi) const;

    void quickPrint(int*);

    friend std::istream& operator>>(std::istream& in, HugeInteger& hi) {
        std::string digit;

        in >> digit;

        hi.input(digit);

        return in;
    }
    friend std::ostream& operator<<(std::ostream& out, HugeInteger& hi) {
        return hi.output(out);
    }

    void input(const std::string&);
    std::ostream& output(std::ostream&);

    int size() { return _hiSize; }

private:
    static const size_t MAX_INTEGER = 41;
    const int TERMINATOR = -99;

    int _hugeInteger[MAX_INTEGER] = { 0 };
    int _hiSize = 0;

    void reverse(int*, int);
};