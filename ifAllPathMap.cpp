#include<bits/stdc++.h>
using namespace std;
int main() {
map<int, int> G;
int n, m;
cin >> n >> m;
int f, e;
cin >> f >> e;
while (m--) {
int x, y;
cin >> x >> y;
++G[x], ++G[y];
}
int odd = 0;
for (int i = 1; i <= n; i++)odd += (G[i] & 1);
//当奇度数为0时，此时起点就是终点     当奇度数为2时，此时只能从一个奇度数的点画到另一个奇度数的点
if (f == e and odd == 0 or f != e and odd == 2 and (G[f] & 1) and (G[e] & 1))
cout << "YES" << endl;
else
cout << "NO" << endl;
return 0;
}
