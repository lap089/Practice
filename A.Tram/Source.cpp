#include<iostream>
using namespace std;

int main()
{
	int n, suma =0, sumb=0, remain = 0, temp , maxCap = 0;
	cin >> n;

	while (n--)
	{
		cin >> suma;
		cin >> sumb;
		remain += sumb - suma;
		maxCap = maxCap >= remain ? maxCap : remain;
	}
	cout << maxCap;
	return 0;
}