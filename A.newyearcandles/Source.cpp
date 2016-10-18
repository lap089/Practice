#include<iostream>
using namespace std;

int main()
{
	int n, m, sum = 0, re, burn;
	cin >> n;
	cin >> m;
	sum += n;
	while (n >= m)
	{
		burn = n / m;
		sum += burn;
		n = burn + n%m;
	}
	cout << sum;
	return 0;
}