#pragma once

#include "Employee.h"

class PieceWorker : public Employee {
public:
    PieceWorker(const std::string&, const std::string&, const std::string&,
        double = 0.0f, double = 0.0f);

    void setWage(double);
    double getWage() const;

    void setPieces(double);
    double getPieces() const;

    // overridden functions
    virtual double earnings() const;
    virtual void print() const;

private:
    double wage;
    double pieces;
};