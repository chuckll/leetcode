#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
		if(nums.size() == 0)
			return 0;
        int n = nums.size();
		int res = 1;
		vector<int> dp(n,1);
		for(int i = 0; i < n; i++)
		{
			int max_ = 1;
			for(int j = 0; j < i; j++)
			{
				if(nums[i] > nums[j])
					max_ = max(max_,dp[j]+1);
			}
			dp[i] = max_;
			res = max(dp[i],res);
		}
		return res;
    }
};