#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
		for(int i = left; i <= right; i++)
		{
			int flag = i;
			vector<int> nums;
			while(flag)
			{
				int k = flag%10;
				flag = flag / 10;
				nums.push_back(k);
			}
			bool ans = false;
			for(int j = 0; j < nums.size(); j++)
			{
				if(nums[j] == 0)
				{
					ans = false;
					break;
				}
				else if( i % nums[j] == 0)
				{
					ans = true;
				}
				else if(i%nums[j] != 0)
				{
					ans = false;
					break;
				}
			}
			if(ans == true)
				res.push_back(i);
		}
		return res;
    }
};