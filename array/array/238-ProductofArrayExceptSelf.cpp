#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
		vector<int> left(n,1),right(n,1),res;
		int now = 1;
		for(int i = 0; i < n; i++)
		{
           now *= nums[i];
		   left[i] = now;
		}
		now = 1;
		for(int i = n-1; i >= 0; i--)
		{
			now *= nums[i];
			right[i] = now;
		}
		for(int i = 0; i < n; i++)
		{
			if(i == 0)
			{
				res.push_back(right[i+1]);
			}
			else if(i == n-1){
				res.push_back(left[i-1]);
			}else{
				res.push_back(left[i-1]*right[i+1]);
			}
		}
		return res;
    }
};