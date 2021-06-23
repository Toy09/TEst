#include "gv-test.h"

struct Basic {
    int _int;
    double _double;
};

int g1 = 1;
struct Basic g2;


const int c1 = 100;
const struct Basic c2 = {10, 10.1};

static int s1;
static struct Basic s2;

extern void test();
extern void test1();


void test2(int *x) {
    if(x)
        x+=200;
}

void printConst(int x) {
    int y = c1;
    printf("-------------Const Test Begin---------------\n");
    printf("Global:%d\tArg:%d\tLocal:%d\n", c1, x, y);
    printf("Global Struct:%d, %f\n", c2._int, c2._double);
    printf("-------------Const Test End---------------\n");
    if (c1 > c2._int) {
        printf("c1 > c2._int\n");
    } else if (c1 == c2._int) {
        printf("c1 == c2._int\n");
    } else {
        printf("c1 < c2._int\n");
    }
}

int TestReturn() {
    return 10;
}

void printStatic(int x) {
    int y = s1;
    printf("-------------Static Test Begin---------------\n");
    printf("Global:%d\tArg:%d\tLocal:%d\n", s1, x, y);
    printf("Global Struct:%d, %f\n", s2._int, s2._double);
    printf("-------------Static Test End---------------\n");
    if (s1 > s2._int) {
        printf("s1 > s2._int\n");
    } else if (s1 == s2._int) {
        printf("s1 == s2._int\n");
    } else {
        printf("s1 < s2._int\n");
    }
}

void printDefault(int x) {
    int y = g1;
    printf("-------------Default Test Begin---------------\n");
    printf("Global:%d\tArg:%d\tLocal:%d\n", g1, x, y);
    printf("Global Struct:%d, %f\n", g2._int, g2._double);
    printf("-------------Default Test End---------------\n");
    if (g1 > g2._int) {
        printf("g1 > g2._int\n");
    } else if (g1 == g2._int) {
        printf("g1 == g2._int\n");
    } else {
        printf("g1 < g2._int\n");
    }
}

void printExtern(int x) {
    int y = e1;
    printf("-------------Extern Test Begin---------------\n");
    printf("Global:%d, %f\tArg:%d\tLocal:%d\n", e1, e2, x, y);
    printf("-------------Extern Test End---------------\n");
    if (e1 > x) {
        printf("e1 > e2._int\n");
    } else if (e1 == x) {
        printf("e1 == e2._int\n");
    } else {
        printf("e1 < e2._int\n");
    }
}

int main(int argc, char *arcv[]) {
    test();
    // test1(&g1);
    // test2(&g1);
    printConst(1);

    s1++;
    s2._int += 30;
    s2._double = -0.31;
    printStatic(2);

    // g1 = 60;
    // g2._int = 3;
    // g2._double = 2.2;
    printDefault(3);

    e1 = 20;
    e2 = 1.2;
    printExtern(4);

    return 0;
}