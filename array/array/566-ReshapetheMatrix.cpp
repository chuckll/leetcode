#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        vector<vector<int>> res;
		vector<int> seq;
		int s = nums.size() * nums[0].size();
		if(r*c > s)
			return nums;
		for(int i = 0; i < nums.size(); i++)
			for(int j = 0; j < nums[i].size(); j++)
				seq.push_back(nums[i][j]);

		for(int i = 0; i < r; i++)
		{
			vector<int> flag;
			for(int j = 0; j < c; j++)
			{
				flag.push_back(seq[i*c+j]);
			}
			res.push_back(flag);
		}
		return res;
    }
};