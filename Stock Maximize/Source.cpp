#include<iostream>
using namespace std;

int main() {

	int n, t;
	long long tempMax = 0, profit = 0;
	int arr[50005];
	
	cin >> t;
	for (int i = 0; i < t; ++i) {
		cin >> n;
		for (int j = 0; j < n; ++j) {
			cin >> arr[j];
		}
			for (int z = n - 1; z >= 0; --z) {
				if (arr[z] >= tempMax) {
					tempMax = arr[z];
				}
				else {
					profit += tempMax - arr[z];
				}
			}
		
		cout << profit << endl;
		tempMax = 0;
		profit = 0;

	}
}