#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	int a;
	int dp[4005];

	for (int i = 1; i < 4005; ++i) { dp[i] = -1e9; }
	cin >> n;
	for (int i = 0; i < 3;++i) {
		cin >> a;
		for (int j = a; j <= n; ++j) {
			
			dp[j] = max(dp[j - a] + 1, dp[j]);
		}
		
	}
	cout << dp[n];
	return 0;
}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//int main()
//{
//	int n, a;
//	int dp[4002];
//	for (int i = 1; i<4002; i++) dp[i] = -1e9;
//	cin >> n;
//	for (int i = 0; i<3; i++)
//	{
//		cin >> a;
//		for (int j = a; j <= n; j++)
//		{
//			dp[j] = max(dp[j - a] + 1, dp[j]);
//		}
//	}
//	cout << dp[n] << endl;
//	return 0;
//}