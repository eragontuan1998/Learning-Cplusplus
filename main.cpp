#include <iostream>

using namespace std;
void swap(int x, int y);
main()
{
    int a = 4, b = 10;
    cout << "Before swap In main function: x = " << a << " y = " << b << endl; 
    swap(a,b);
    cout << "After swap In main function: x = " << a << " y = " << b << endl; 

}
void swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
    cout << "In swap function: x = " << x << " y = " << y << endl;
    return;
}