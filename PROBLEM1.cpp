#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int num[10];
    int x, small, large, total;

    cout << "Enter 10 numbers: " << endl;

    for(x=0;x<10;x++)
    cin >> num[x];

    small = num[0];

    for(x=0;x<10;x++)
    {
        if (small > num[x])
            small = num[x];
    }

    large = num[0];

    for(x=0;x<10;x++)
    {
        if (large < num[x])
            large = num[x];
    }

    total = 0;

    for(x=0;x<10;x++)
    {
        total = total + num[x];
    }

    cout << endl;
    cout << "The smallest integer is: " << small << endl;
    cout << "The largest integer is: " << large << endl;
    cout << "The total is: " << total << endl;
    cout << "The average is: " << total / 10 << "." << total % 10 << endl;

getch();
return 0;
}
