#include<iostream>
#include<string>
#include<set>
using namespace std;


void main()
{
	string name;
	set<int> s;
	getline(cin, name);
	for each  (char a in name)
	{
		s.insert(a);
	}
	if (s.size() % 2)
		cout << "IGNORE HIM!";
	else cout << "CHAT WITH HER!";
}