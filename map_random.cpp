#include<iostream>
#include<map>
using namespace std;
template<typename T = int>
inline T read() {
	T x;
	cin >> x;
	return x;
}
int main() {
	int T;
	cin >> T;
	map<int, int>a;
	while (T--) {
		int i;
		cin >> i;
		a[i]++;
	}
	cout << a.size() << endl;
	for (auto e : a) {
		cout << e.first << " ";
	}
	return 0;
}