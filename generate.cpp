#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>a(numRows);
        for (int i = 0; i < numRows; i++) {
            a[i].resize(i + 1);//二重容器的设置大小
            a[i][0] = 1;
            a[i][i] = 1;
        }
        for (int i = 2; i < numRows; i++) {
            for (int j = 1; j < i; j++) {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
        return a;
    }
};