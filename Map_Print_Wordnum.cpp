#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main() {
	map<string, int>word_cnt;
	string s;
	while (cin >> s) {
		word_cnt[s]++;
	}
	for (auto e : word_cnt) {
		cout << e.first << "occurs" << e.second
			<< (e.second > 1) ? "time" :"times";
	}
	return 0;
}
