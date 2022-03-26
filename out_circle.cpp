#include<iostream>
#include<vector>
#include<list>
using namespace std;
int main() {
	for (int n, m; cin >> n >> m;) {//多行输入
		list<int>L;
		for (int i = 1; i <=n; i++) {
			L.push_back(i);//置数功能
		}
		auto p = L.begin();
		while (L.size() > 1) {
			for (int i = 1; i < m; i++) {//执行m次  1...m
				p++;
				if (p == L.end())//当指针指向最后一个节点的下一个位置时，转向表头
				p = L.begin();
			}
			p = L.erase(p);//删除选到的节点
			if (p == L.end()) {
				p = L.begin();
			}
		}
		cout << L.front() << endl;
	}
	return 0;
}
