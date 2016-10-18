#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <set>
#include <stack>
#include <queue>
#include <map>
#include <cstring>
#include <string>
#include <list>
#include<unordered_map>
#include <sstream>

using namespace std;

#define LL long long
#define FOR(i, a, b) for(int i = a, _b = b; i <= _b; i++)
#define FO(i, a, b) for(int i = a, _b = b; i < _b; i++)
#define FORD(i, a, b) for(int i = a, _b = b; i >= _b; i--)
#define FOD(i, a, b) for(int i = a; i > b; i--)
#define FORV(i, v) for(typeof(v.begin())i = v.begin(); i != v.end(); i++)
#define pb push_back
#define mp make_pair

#define sqr(x) ((x)*(x))

const double eps = 1e-8;
const double pi = 2 * acos(0.0);
const string alphabetU = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
const string alphabetL = "abcdefghijklmnopqrstuvwxyz";
const LL infinite = 1000000000;

const LL maxn = 100010;

typedef vector<int> vi;
typedef vector<vi> vii;
typedef vector<bool> vb;
typedef vector<vb> vbb;
typedef unsigned int u32;

static const int m37pos[] = {
	32,  0,  1, 26,  2, 23, 27,  0,  3,
	16, 24, 30, 28, 11,  0, 13,  4,  7,
	17,  0, 25, 22, 31, 15, 29, 10, 12,
	6,  0, 21, 14,  9,  5, 20,  8, 19, 18
};

//************************ I/O ****************************
inline int nextInt() {
	int x = 0;
	register int c = getc(stdin);
	int sign = 0;
	for (; ((c < 48 || c > 57) && c != '-'); c = getc(stdin));
	if (c == '-') {
		sign = 1;
		c = getc(stdin);
	}
	for (; c > 47 && c < 58; c = getc(stdin)) x = (x << 1) + (x << 3) + c - 48;
	if (sign) x = -x;
	return x;
}
inline LL nextLong() {
	LL x = 0;
	register int c = getc(stdin);
	int sign = 0;
	for (; ((c < 48 || c > 57) && c != '-'); c = getc(stdin));
	if (c == '-') {
		sign = 1;
		c = getc(stdin);
	}
	for (; c > 47 && c < 58; c = getc(stdin)) x = (x << 1) + (x << 3) + c - 48;
	if (sign) x = -x;
	return x;
}
inline string nextLine() {
	string s;
	while (!feof(stdin)) {
		char c = fgetc(stdin);
		if (c == 13) continue;
		if (c == 10) return s;
		s += c;
	}
	return s;
}
void scan(int &x) {
	x = nextInt();
}
void scanl(LL &x) {
	x = nextLong();
}
void scans(string &s) {
	s = nextLine();
}
//************************ END I/O ************************

int main()
{
	int  size, i = 0, x1, y1, x2, y2;
	int n;

	scan(x1);
	scan(y1);
	scan(x2);
	scan(y2);


	if (x1 == x2)
	{
		size = abs(y1 - y2);
		cout << x1 + size << " " << y1 << " " << x2 + size << " " << y2;
	}
	else if (y1 == y2)
	{
		size = abs(x1 - x2);
		cout << x1 << " " << y1 + size << " " << x2 << " " << y2 + size;
	}
	else if (abs(x1 - x2) == abs(y1 - y2))
	{
		cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
	}
	else
		cout << -1;

	return 0;
}