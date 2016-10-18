#include<iostream>
#include<math.h>
using namespace std;


void main()
{
	int row =0, col =0, num;
	for (int i = 1; i <= 5; ++i)
	{
		for (int j = 1; j <= 5; ++j)
		{
			cin >> num;
			if (num == 1)
			{
				row = i; col = j;
			}
		}
	}
	cout << abs(row - 3) + abs(col - 3);
}