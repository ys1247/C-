#include <iostream>

using namespace std;
typedef int test_t;

typedef int test_t2;
typedef unsigned uint32_t;
int main()
{
    test_t sum = 0;
    
    int aa = 100;
    int bb = 200;
    sum = aa + bb;
    //endl =="\n"
    std::cout << "typedef result sum = " << sum << std::endl;

    uint32_t sum2 = 0;
    bb = 1000;
    sum2 = aa + bb;
    std::cout << "\ntypedef result sum = " << sum << std::endl;

    test_t2 sum3 = 0;
    aa = 1000;
    bb = 2000;
    sum3 = aa + bb;
    std::cout << "\ntypedef result sum = " << sum << std::endl;
}


