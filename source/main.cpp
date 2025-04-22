#include "include/provider.h"
#include "include/consumer.h"

#include <iostream>

int main(int, char**){
    Provider provider;
    Consumer consumer;

    for (int i = 0; i < 10; ++i) {
        consumer.consume(provider.next_value());
    }

    return 0;
}
