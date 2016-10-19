#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */
	int t, n;
	long long arr[1000005];
	long long sum[1000005];
	long long dp[1000005];
	cin >> t;
	while (t--) {
		cin >> n;
		arr[0] = 0;
		for (int i = n; i >= 1; --i) {
			cin >> arr[i];
		}
		for (int i = 1; i <= n; ++i) {
			arr[i] += arr[i - 1];
		}
		dp[1] = arr[1];
		dp[2] = arr[2];
		dp[3] = arr[3];

		for (int i = 4; i <= n; ++i) {
			long long temp = max(arr[i] - dp[i - 1], arr[i] - dp[i - 2]);
			dp[i] = max(temp, arr[i] - dp[i - 3]);
		}
		cout << dp[n] << endl;
	}
	return 0;
}
