#include<iostream>
using namespace std;

int main() {
	int charge, uncharge, m=0;

	cin >> charge;
	cin >> uncharge;

	if (charge > uncharge) swap(charge, uncharge);
	while (charge > 0 && uncharge > 0) {
		if (charge + uncharge == 2) break;
		if (uncharge <= 2) { swap(charge, uncharge); }
		uncharge -= 2;
		charge++;
		++m;
	}
	cout << m;

	return 0;
}