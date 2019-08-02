#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
			return 0;
		if(nums.size() == 1)
			return nums[0];
		return max(robs(nums,0,nums.size()-2),robs(nums,1,nums.size()-1));
    }

	int robs(vector<int>& nums,int l,int r){
		vector<int> dp(nums.size()+1,0);
		for(int i = l; i <=  r; i++)
		{
			if(i == l)
			{
				dp[i] = nums[i];
			}else if(i == l+1)
			{
				dp[i] = max(nums[i],nums[i-1]);
			}else{
				dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
			}
		}
		return dp[r];
	}
};