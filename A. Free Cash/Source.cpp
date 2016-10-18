#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	int i,j, sum = 1, n, presum = 1, pre1 = -1, pre2 = -1;
	cin >> n;
	while (n--)
	{
		cin >> i;
		cin >> j;
		if (i == pre1 && j == pre2) {
			++presum;
		}
		else{
			sum = presum > sum ? presum : sum;
			presum = 1;
			pre1 = i;	pre2 = j;
		}
		
	}
	sum = presum > sum ? presum : sum;
	cout << sum;
	return 0;
}