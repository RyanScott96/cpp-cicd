#include "producer.h"

Producer::Producer(): generator(), distribution(1,6) {};

int Producer::next_value() {
    return this->distribution(this->generator);
}