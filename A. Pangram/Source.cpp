#include<iostream>
using namespace std;

int main() {
	int n, sum = 1, i=1, temp=1;
	string a;
	cin >> n;

	if (n == 1) {
		cout << i;
		return 0;
	}

	while (sum <= n) {
		++i;
		temp += i;
		sum += temp;
	}
	cout << i-1;

	return 0;
}