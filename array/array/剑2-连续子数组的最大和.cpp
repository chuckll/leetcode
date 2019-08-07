#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
    
		if(array.size() == 0)
			return 0;
		int n = array.size();
		vector<int> dp(n,0);
		int maxNum = array[0];
		dp[0] = array[0];
		for(int i = 1; i < n; i++)
		{
			dp[i] = max(array[i],array[i]+dp[i-1]);
			maxNum = maxNum > dp[i] ? maxNum : dp[i];
		}

		return maxNum;
    }
};