#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> res;
		for(int i = 0; i < findNums.size(); i++)
		{
			int target = findNums[i];
			int j;
			for(j = 0; j < nums.size(); j++)
			{
				if(nums[j] == target)
					break;
			}
			int k;
			for(k = j; k < nums.size(); k++)
			{
				if(nums[k] > target)
					break;
			}
			if( k == nums.size())
				res.push_back(-1);
			else
				res.push_back(nums[k]);
		}
		return res;
    }
};