#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main()
{
	int n;
	string str;
	
	cin >> n;
	while (true) {
		++n;
		str =  std::to_string(n);
		unordered_set<int> s;
		for (int i = 0; i < 4; ++i)
			s.insert(str[i]);
		if (s.size() == 4)
		{
			cout << n;
			return 0;
		}
	}
}