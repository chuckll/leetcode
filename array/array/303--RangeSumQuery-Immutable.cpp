#include<stdio.h>
#include<vector>
using namespace std;


class NumArray {
public:
	vector<int> sums;
    NumArray(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++)
		{
			if(i == 0)
				sums.push_back(nums[i]);
			else
				sums.push_back(nums[i]+sums[i-1]);
		}
    }
    
    int sumRange(int i, int j) {
        if(i == 0)
			return sums[j];
		else
			return sums[j]-sums[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */