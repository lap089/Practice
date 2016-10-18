#include<iostream>
#include<algorithm>
#define f(i,a,b) for(i=a;i<b;i++)
using namespace std;
long long cnt[100001];
int main()
{
	int n, i, j; cin>>n;
	f(i, 0, n)cin >> j, cnt[j]++;
	// assign cnt[j] = 1


	f(i, 2, 100001) 
		cnt[i] = max(cnt[i] * i + cnt[i - 2], cnt[i - 1]);

	// cnt[k] = max {
	//			cnt[k]*k points + cnt[k-2] previous points	: choose to delete a[k]
	//			cnt[k-1] points		: choose to keep cnt[k]
	//}

	cout << cnt[100000];
	// maybe largest number
}