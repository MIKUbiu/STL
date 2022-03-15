#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

int main() {
	int n; cin >> n;
	map<int, int>num;
	int a;
	while (n--) {
		cin >> a;
		++num[a];
	}
	for (auto e : num) {
		cout << e.first << endl;
	}
	return 0;
}
