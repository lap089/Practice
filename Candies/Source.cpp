#include<iostream>
#include<map>

using namespace std;
typedef map<int, int>::iterator it_type;

int main() {
	int n, a[100005], candies[100005], sum=0;


	cin >> n;

	if (n > 0) {
		cin >> a[0];
		candies[0] = 1;
	}

	for (int i = 1; i < n; ++i) {
		cin >> a[i];
		if (a[i] > a[i-1] && candies[i] <= candies[i-1]) {
			candies[i] = candies[i-1] + 1;
		}
		else candies[i] = 1;
		
	}

	for (int i = n - 2; i >= 0; --i) {
		if (a[i] > a[i + 1] && candies[i] <= candies[i+1]) {
			candies[i] = candies[i + 1] + 1;
		}
	}

	for (int i = 0; i < n; ++i) {
		sum+= candies[i];
		//cout << candies[i] << " ";
	}
	cout << sum;
	return 0;
}