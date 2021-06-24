#include "stdio.h"
#include <iostream>

void test(int x) {
  for(int y = 0; y < x; y++) {
    try {
      printf("y:%d\n", y);
    } catch (std::runtime_error &e) {
      break;
    }
  }
}