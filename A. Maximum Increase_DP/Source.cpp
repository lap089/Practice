#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n,a,b, temp=1, sum=0;
	cin >> n;
	cin >> a;	
	for (int i = 0; i < n-1; ++i) {
		cin >> b;
		if (a < b) {
			++temp;
		}
		else {
			sum = max(temp, sum);
			temp = 1;
		}
		a = b;
	}
	sum = max(temp, sum);
	cout << sum;
	return 0;
}