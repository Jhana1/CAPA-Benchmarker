#include <iostream>

#include "benchmarkObj.h"

int main()
{
    BenchmarkObj b;
    std::cout << b.DeviceName() << std::endl;
    std::cout << (float) b.TheoMemBandwidth() /1000000<< std::endl;
    b.BenchMemBandwidth();
    return 0;
}
