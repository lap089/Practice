#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n, group =0;
	char cur = '0';
	string str;
	cin >> n;
	while (n--)
	{
		cin >> str;
		//cout << cur << endl;
		if (group == 0 || str[0] == cur)
			++group;
		cur = str[1];
		
	}
	cout << group;
	return 0;
}