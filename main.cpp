#include <iostream>

using namespace std;

int count;
extern void print_extern();

main()
{
    count = 5;
    print_extern();
}