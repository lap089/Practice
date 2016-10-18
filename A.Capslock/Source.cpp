#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::string;


void main()
{
	string str, temp;
	char * a;
	getline(cin, str);
	temp = str;
	for (int i = str.length(); i >= 0; --i)
	{
		if (str[i] <= 90)
			str[i] += 32;
		else if (i == 0)
			str[i] -= 32;
		else {
			cout << temp;
			return;
		}

	}
	cout << str;
}