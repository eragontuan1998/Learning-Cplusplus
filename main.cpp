#include <iostream>

using namespace std;
enum week
{
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7,
    Sunday = 8
};

main()
{
    week mon = week::Monday;
    cout << mon << endl;
}