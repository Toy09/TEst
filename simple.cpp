void test(int x) {
  while(true) {
    x += 1;
    throw "Test";
    x -= 1;
  }
}