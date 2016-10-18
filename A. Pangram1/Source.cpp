#include<iostream>
#include<set>
using namespace std;


int main() {
	int n;
	char a;
	set<char> s;

	cin >> n;

	while (n--) {
		cin >> a;
		s.insert(toupper(a));
	}
	
	cout << ((s.size() == 26) ? "YES" : "NO");

	return 0;
}
