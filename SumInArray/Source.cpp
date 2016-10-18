#include<iostream>
#include<unordered_map>
using std::cout; 
using std::cin;
using std::endl;
using std::hash;
using std::unordered_map;

void main()
{
	unordered_map<int, int> map;
	int array[10] = {20, 30,12,11,25,33,57,23,68,1};
	int size = 10;
	int s = 31;
	if (size >= map.max_size()) return;
	for (int i = 0; i < 10; ++i)
	{
		if (map.find(array[i]) == map.end()) {
			map[s - array[i]] = array[i];
		}
		else
		{
			cout << array[i] << " + " << map[array[i]] << " = " << s << endl;
			break;
		}
	}

	//cout << (map.find(11) == map.end()) << endl;
	int a;
	cin >> a;

}