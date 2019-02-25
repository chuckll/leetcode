#include<stdio.h>
#include<vector>
using namespace std;




class NumArray {
public:
    NumArray(vector<int> nums) {
        for(int i = 0; i < nums.size(); i++)
			num.push_back(nums[i]);
    }
    
    int sumRange(int i, int j) {
        int sum = 0;
		for(int k = i; k <= j; k++)
			sum += num[k];
		return sum;
    }

	vector<int> num;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */