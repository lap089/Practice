#include<iostream>

using namespace std;

int coins[55];
int64_t s[300][300];



int64_t cal(int sum, int numCoin) {
	
	if (sum < 0) {
		return 0;
	}
	else if (sum == 0) {
		return 1;
	}
	else if (numCoin <= 0) {
		return 0;
	}
	else {
		if (s[sum][numCoin] == -1) {
			s[sum][numCoin] = cal(sum, numCoin - 1) + cal(sum - coins[numCoin - 1], numCoin);
		}
		return s[sum][numCoin];
	}
}


int main() {
	int n, money;

	cin >> money >> n;
	for (int i = 0; i < n; ++i) {
		cin >> coins[i];
	}
	for (int i = 0; i <= money; ++i) {
		for (int j = 0; j <= n; ++j) {
			s[i][j] = -1;
		}
	}
	
	cout << cal(money, n);

	return 0;
}
