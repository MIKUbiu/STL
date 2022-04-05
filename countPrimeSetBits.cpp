#include<iostream>
#include<unordered_set>
using namespace std;
class Solution {
public:
    unordered_set<int> prime = { 2,3,5,7,11,13,17,19,23,29,31 };
    int countPrimeSetBits(int left, int right) {
        int ans = 0;
        for (int i = left; i <= right; i++) {
            int cnt = __builtin_popcount(i);
            if (prime.count(cnt)) ans++;//.count(x)查找容器中值为k的个数
        }
        return ans;
    }
};//这个unordered_set可以存放数据，并用来查找数据个数
int main() {
	
	return 0;
}
