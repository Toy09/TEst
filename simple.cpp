#include "stdio.h"
#include <iostream>

void test(int x) {
  x = ((x>10) ? : 0) + 42;
}