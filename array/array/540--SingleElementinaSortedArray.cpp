#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0, h = nums.size()-1;
		while(l<h)
		{
			int m = l+(h-l)/2;
			if(m%2 == 1)
				m--;
			if(nums[m] == nums[m+1])
			{
				l = m+2;
			}else{
				h = m;
			}
		}
		return nums[l];
    }
};