#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		vector<int> notzeros;
		int n = nums.size();
        for(int i = 0; i < n; i++)
		{
			if(nums[i] != 0)
			{
				notzeros.push_back(i);
			}
		}
		int j;
		for(j = 0; j < notzeros.size(); j++)
		{
			nums[j] = nums[notzeros[j]];
		}
		for(;j < n; j++)
		{
			nums[j] = 0;
		}
    }
};