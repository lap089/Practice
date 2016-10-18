#include<iostream>
#include<set>
using namespace std;

int main() {
	set<int> s;
	int m, n, l, a[100001], b[100001];

	cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	for (int i = n; i > 0; --i) {
		s.insert(a[i]);
		b[i] = s.size();
	}

	for (int i = 0; i < m; ++i) {
		cin >> l;
		cout << b[l] << endl;
	}
}