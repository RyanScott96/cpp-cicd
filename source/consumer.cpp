#include "include/consumer.h"
#include <iostream>

Consumer::Consumer() {};
void Consumer::consume(int value) {
  std::cout << value << std::endl;
};
