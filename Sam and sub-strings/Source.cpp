#include<iostream>
#include<string>
using namespace std;

#define MOD7 1000000007

int main() {
	string num;
	long long s[1000005];
	int i = 1;
	long long sum = 0;
	getline(cin, num);

	for (char c : num) {
		s[i] = s[i - 1] * 10 + i*(c - 48);
		s[i] = s[i] % MOD7;
		sum = (sum + s[i])%MOD7;
		++i;
	}

	cout << sum;
	return 0;
}