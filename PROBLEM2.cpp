#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	char province[3] = {'A' , 'B' , 'C'};
	int day[7] = {1, 2, 3, 4, 5, 6, 7};
	int temp[3][7];
	int x, y, z;

	cout << "Enter all temperature for a week of Province A, Province B and then Province C. " << endl;

	for(x=0;x<3;x++)
	{
        for(y=0;y<7;y++)
        {
            cout << "Province " << province[x] << ", "<< "Day " << day[y] << ": ";
        for (z=0;z<1;z++)
            {
            cin >> temp[x][y];
            }
        }
	}

    cout << endl;
	cout << "Displaying Values: " << endl;

	for(x=0;x<3;x++)
	{
        for(y=0;y<7;y++)
        {
        for(z=0;z<1;z++)
            {
            cout << "Province " << province[x] << ", " << "Day " << day[y] << "= " << temp[x][y] << endl;
            }
        }
	}

getch();
return 0;
}
