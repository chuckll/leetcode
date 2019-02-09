#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
		int now = 0;
		for(int i = 0; i < nums.size(); i++)
		{
			if(nums[i] == 0)
			{
				if(now > max)
					max = now;
				now = 0;
			}
			if(nums[i] == 1)
			{
				now++;
			}
		}
		if(now > max)
		  max = now;
		return max;
    }
};