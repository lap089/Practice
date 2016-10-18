#include<iostream>
using std::cout;
using std::cin;
using std::endl;

void main()
{
	long long n;
	int m, count =0;
	cin >> n;
//	cout << n;
	cout << sizeof(long) << endl;
	while (n != 0)
	{
		m =  n - (n / 10)*10;
		count = m == 4 | m == 7 ? count + 1 : count;
		n /= 10;
	//	cout << n << endl;
	}
	if (count == 4 | count == 7)
		cout << "YES";
	else cout << "NO";
}