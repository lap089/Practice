#include<iostream>
using namespace std;

int main() {
	int arr[1000];
	int nums[] = {-2,0,3,-5,2,-1};
	int sum = 0;
	arr[0] = 0;
	for (int i = 0; i<6; ++i) {
		sum += nums[i];
		arr[i+1] = sum;
	}
	cout << arr[3] - arr[0]  << endl;
	return 0;
}