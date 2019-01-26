#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;




class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
		int thres = n / 2;
		sort(nums.begin(),nums.end());
		int res;
		int first = 0;
		if(n == 1)
			return nums[0];
		int i;
		for(i = 1; i < n; i++)
		{
			if(nums[i] != nums[i-1])
			{
				if(i - first > thres)
				{
					res = nums[first];
					break;
				}
				first = i;
			}
		}
		if(i == n)
			res = nums[first];
		return res;
    }
};