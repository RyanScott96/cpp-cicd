#include "include/consumer.h"
#include <iostream>

Consumer::Consumer() {};
void Consumer::consume(int value) {
  std::cout << "consumed " << value << std::endl;
};
