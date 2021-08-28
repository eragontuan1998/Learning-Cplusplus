#include <iostream>

using namespace std;

extern int count;

void print_extern(){
    cout << "Count is: " << count << endl;
}