#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int res = 0;
		vector<int> ans(2,0);
		for(int i = 0; i < nums.size(); i++)
		{
			res ^= nums[i];
		}
		int k = 0;
		while(1)
		{
			if(((res >> k) & 1) == 1)    //&1可以消除负数的影响
			{
				break;
			}else{

				k++;
			}
		}
		for(int i = 0; i < nums.size(); i++)
		{
			if(((nums[i] >> k) & 1) == 1 )
			{
				ans[0] ^= nums[i];
			}else{
				ans[1] ^= nums[i];
			}
		}
		return ans;
    }
};



