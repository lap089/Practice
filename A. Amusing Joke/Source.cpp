#include<iostream>
#include<string>
using namespace std;


int main()
{
	string str;
	char chr[26] = { 0 };
	cin >> str;
	for(char c : str)
		++chr[c - 'A'];
	cin >> str;
	for(char c : str)
		++chr[c - 'A'];

	cin >> str;
	for(char c : str)
		--chr[c - 'A'];

	for (int i = 0; i < 26; ++i)
		if (chr[i] != 0) {
			cout << "NO";
			return 0;
		}
	cout << "YES";
	return 0;
}