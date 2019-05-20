#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        /*int n = nums.size();
		for(int i = 0; i < n; i++)
		{
			for(int j = 1; j < n-i; j++)
			{
				if(nums[j-1] > nums[j])
				{
					int f = nums[j];
					nums[j] = nums[j-1];
					nums[j-1] = f;
				}
			}
		}*/
		sort(nums.begin(),nums.end());
		return nums;
    }
};