#include "include/provider.h"

Provider::Provider(): generator(), distribution(1,6) {};

int Provider::next_value() {
    return this->distribution(this->generator);
}