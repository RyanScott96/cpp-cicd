#pragma once
#ifndef providerH
#define providerH

#include <random>

class Provider {
private:
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution;
public:
    Provider();
    int next_value();
};

#endif