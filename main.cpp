#include <iostream>
#include <printf.h>

using namespace std;

void func(int* &f){
    int b = 15;
    int *pb = &b;
    f = pb;
    cout << f  << endl;
    cout << *f << endl;
}


int main() {
    int a = 5;
    int* pa;
    pa = &a;
    func(pa);
    cout << *pa << endl;
    cout << pa << endl;ground_removal.cpp
    std::cout << *pa << std::endl;
    printf("%d", pa);
////    cout << "------" << endl;
//
//    printf("%d \n", pa);
//    printf ("Characters: %c %c \n", 'a', 65);
//    printf ("Decimals: %d %ld\n", 1977, 650000L);
//    printf ("Preceding with blanks: %10d \n", 1977);
//    printf ("Preceding with zeros: %010d \n", 1977);
//    printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
//    printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
//    printf ("Width trick: %*d \n", 5, 10);
//    printf ("%s \n", "A string");

    std::cout << "Hello, World!" << std::endl;
    return 0;
}