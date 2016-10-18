#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, a[101], sum=0, temp=0;

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	for (int i = 0; i < n; ++i) {

		for (int j = i; j < n; ++j) {
			for (int z = 0; z < n; ++z) {
				temp += (z >= i && z <= j) ? (1 - a[z]) : a[z];
			}
			sum = max(sum, temp);
			temp = 0;
		}
	}
	cout << sum;
}