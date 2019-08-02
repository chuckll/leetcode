#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    int rob(vector<int>& nums) {
		int n = nums.size();
        if(n == 0)
			return 0;
		vector<int> dp;
		for(int i = 0; i < n; i++)
		{
			if(i == 0)
			{
				dp.push_back(nums[i]);
			}else if(i ==1)
			{
				dp.push_back(max(nums[i],nums[i-1]));
			}
			else{
				dp.push_back(max(nums[i]+dp[i-2],dp[i-1]));
			}
		}
		return dp[n-1];
    }
};