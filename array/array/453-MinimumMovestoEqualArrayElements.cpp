#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int minMoves(vector<int>& nums) {
		int ans = 0;
		int n = nums.size();
		if(n == 1)
			return 0;
		int min = nums[0];
		for(int i = 1; i < n; i++)
		{
			if(nums[i] < min)
				min = nums[i];
		}
		for(int i = 0; i < n; i++)
		{
			ans += nums[i] - min;
		}
		return ans; 
    }
};