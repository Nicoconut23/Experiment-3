#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    char arrange[75];
    int x, y, size, first;

    cout << "Enter the size of the array: ";
    cin >> size;
    cout << endl;

    for(x=0;x<size;x++)
    {
        cout << "Enter a single letter or a one-digit number: ";
        cin >> arrange[x];
    }

    for(x=0;x<size;x++)
    {
        for(y=x+1;y<size;y++)
        {
        if (arrange[x] > arrange[y])
            {
                first = arrange[x];
                arrange[x] = arrange[y];
                arrange[y] = first;
            }
        }
    }

    cout << endl;
    cout << "Ascending output: ";

    for(x=0;x<size;x++)
    {
        cout << arrange[x];
    }

    cout << endl;
    cout << "Size of the array: " << size << endl;

getch();
return 0;
}
