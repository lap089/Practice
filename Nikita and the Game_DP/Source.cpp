#include<iostream>
#include<algorithm>
using namespace std;

int arr[10005];

int sum(int l, int r) {
	return arr[r] - arr[l-1];
}


int get(int l, int r, long long s) {
	
	int low = l;
	int high = r;

	while (low <= high) {
		int mid = (low + high) / 2;
		int x = sum(low, mid);
		if (x == s) {
			return mid;
		}
		else if (x >= s) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
	return -1;
}

int solve(int l, int r) {
	long long s = sum(l, r);

	if (s % 2 == 0 && l != r) {
		int mid = get(l, r, s/2);
		return max(solve(l, mid), solve(mid+1, r)) + 1;
	}
	return 0;
}

int main() {

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
		arr[i] += arr[i - 1];
	}

	cout<< solve(1, n);

	return 0;
}

