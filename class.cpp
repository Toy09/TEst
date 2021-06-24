#include "class.h"

using namespace std;
/*
class Fourth {
    int i4;
    float f4[3];
    int fourthFunc1(Third third4){
        third4.i3 = 1;
        return 1;
    }
    void fourthFunc2(bool flag){
        flag = true;
    }
};*/

// class Test {
//     void print1() {
//         int x;
//         cin >> x;
//         switch(x) {
//             case 1:
//                 while(true)
//                     printf("error\n");
//                 break;
//             case 2:
//                 printf("return\n");
//                 return;
//             case 3:
//                 // for(int d=0;d<x;d++)
//                 //     printf("%d ", d);
//                 printf("\n");
//                 break;
//             case 4:
//                 int y;
//                 cin >> y;
//                 switch(y) {
//                     case 1:
//                         printf("f\n");
//                         break;
//                     default :
//                         printf("dd\n");
//                 }
//         }
//         do {
//             printf("do while\n");
//         } while(false);
//         if(x % 2 == 0)
//             cout << /*x % 2 <<*/ endl;
//         else if(x < 0)
//             cout << x << endl;
//         else
//             cout << x + 1 << endl;
//     }
//     void print2() {
//         int y;
//         cin >> y;
//         switch(y) {
//                 case 1:
//                 printf("f\n");
//                 break;
//             default :
//                 int x;
//                 cin >> x;
//                 switch(x) {
//                     case 1:
//                         while(true)
//                             printf("error\n");
//                         break;
//                     case 2:
//                         printf("return\n");
//                         return;
//                     case 3:
//                         for(int d=0;d<x;d++)
//                             printf("%d ", d);
//                         printf("\n");
//                         break;
//                     case 4:
//                         printf("dd\n");
//                 }
//                 while(false)
//                     printf("no loop\n");
        
//                 if(x % 2 == 0)
//                     cout << x % 2 << endl;
//                 else if(x < 0)
//                     cout << x << endl;
//                 else
//                     cout << x + 1 << endl;
//         }
//         switch(y) {
//         case 1:
//             break;
//         default:
//             break;
//         }
//     }
// };

// class Abst;
// class  Abst {
// public:
//     virtual Abst& Test() = 0;
//     void print() {
//         std::cout << "Abst print" << std::endl;
//     }
// };

// class CapAbst : public Abst {
// public:
//     char data[1024];
//     Abst& Test() {
//         CapAbst* tmp = (CapAbst*)data;
//         return (*tmp);
//     }
// };

void TestFunc(char *arg) {
    printf("%s\n", arg);
}

int main(int argc, char *argv[]){
    int x;
    std::cin >> x;
    // Abst *test = new CapAbst();
    test->Test().print();
    if(x == argc) {
        int y; int count = 0;
        int z, iz;
        /*y =*/ /*argc >> 1;*/
        y = argc /*>> 1 */>> 1 /*>> 1*/;
        for(x = 1; x < y; x++, count++) {
            TestFunc(argv[x * 2]);
        }
        x = 0;
        while(x < argc) {
            printf("x++ : %d\n", x++);
        }
        switch(count%2) {
            case 1:
                printf("1\n");
                break;
            case 2:
                printf("2\n");
                break;
            default :
                switch(argc) {
                    case 3:
                        printf("3\n");
                        // break;
                    case 4:
                        printf("4\n");
                        // break;
                }
        }
        printf("count %d\n", count > 2 ? true : false);
        goto Exit_true;
    } else if (x > argc) {
        printf("gt\n");
    } else {
        return 0;
    }
Test:
    TestFunc((char*)"no arguments");
    goto Exit_false;
Exit_true:
    return 1;
Exit_false:
    return 0;
}