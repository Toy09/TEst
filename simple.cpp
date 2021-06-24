#include "stdio.h"

void test(int x) {
  while(true) {
    x += 1;
    try {
      printf("try\n");
    } catch (...) {
      printf("error\n");
    }
    x -= 1;
  }
}