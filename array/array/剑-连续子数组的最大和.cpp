#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

//动态规划初级题目


class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
        int n = array.size();
		vector<int> dp(n,0);
		dp[0] = array[0];
		for(int i = 1; i < n; i++)
		{
			dp[i] = max(dp[i-1] + array[i], array[i]);
		}
		sort(dp.begin(),dp.end());
		return dp[n-1];
    }
};