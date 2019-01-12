#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
		/*sort(nums.begin(),nums.end());
		vector<int> res;
		int first;
		if(nums.size() > 0)
		     first = nums[0];
		if(nums.size() >= 2)
		{
		for(int i = 1; i < nums.size(); i++)
		{
			if(nums[i] == first)
			{
				res.push_back(first);
			}
			first = nums[i];
		}
		}
		return res;*/
		int n = nums.size();
		vector<int> res;
		for(int i = 0; i < n; i++)
		{
			int index = abs(nums[i]) - 1;
			if(nums[index] < 0)
				res.push_back(abs(nums[i]));
			nums[index] =  -nums[index];
		}
		return res;
    }
};