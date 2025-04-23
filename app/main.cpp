#include "producer.h"
#include "consumer.h"

#include <iostream>

int main(int, char**){
    Producer producer;
    Consumer consumer;

    for (int i = 0; i < 10; ++i) {
        consumer.consume(producer.next_value());
    }

    return 0;
}
