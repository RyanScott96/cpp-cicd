#pragma once
#ifndef producerH
#define producerH

#include <random>

class Producer {
private:
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution;
public:
    Producer();
    int next_value();
};

#endif