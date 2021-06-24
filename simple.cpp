#include "stdio.h"
#include <iostream>

void test(int x) {
  int y = 0;
  do
    try {
      printf("y:%d\n", y);
    } catch (std::runtime_error &e) {
      break;
    }
    y++;
  } while(y < x);
}