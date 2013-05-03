#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <fstream>
#include <stdlib.h>

using namespace std;


class Calculator
{
    private:
    vector<XYPoint> cPoints;

    public:
    Calculator();
    ~Calculator();

    private:
    vector<float>* resolveCubicSplineSLE();
    void getPoints(char*);
};

#endif // CALCULATOR_H
