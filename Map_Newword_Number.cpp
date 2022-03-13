#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main() {
	map<string, int>S;
	string s;
	while (cin >> s) {
		S[s]++;
	}
	cout << S.size();
	return 0;
}
