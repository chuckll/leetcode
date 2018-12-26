#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> ans;
		int len = nums.size() - 1;
		permuteIter(ans,nums,0,len);
		return ans;
    }
	void swap(vector<int> &nums,int a,int b)
	{
		int flag = nums[a];
		nums[a] = nums[b];
		nums[b] = flag;
	}
	void permuteIter(vector<vector<int>> &ans,vector<int> nums,int begin,int end)
	{
		if(begin == end)
		{
			ans.push_back(nums);
			return;
		}else{

			for(int i = begin; i <= end; i++)
			{
				swap(nums,begin,i);
				permuteIter(ans,nums,begin+1,end);
				swap(nums,i,begin);
			}
		}
	}
};



class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> ans;
		sort(nums.begin(),nums.end());
		ans.push_back(nums);
		while(next_permutation(nums.begin(),nums.end()))
		{
			ans.push_back(nums);
		}
		return ans;
    }
};