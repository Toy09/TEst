#include "stdio.h"
#include <iostream>

void test(int x) {
  int y = 0;
  bool tmp = false;
  do {
    tmp = (y == 0) || (y % 10 == 0);
    try {
      printf("y[%d]:%d\n", tmp, (y > 10) ? (y % 10) : y);
    } catch (std::runtime_error &e) {
      break;
    }
    y++;
  } while((y < x) || (y <= 100));
}