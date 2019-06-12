#include<stdio.h>
#include<vector>
using namespace std;

//更好的方法，双指针，见讨论区

class Solution {
public:
    vector<vector<int>> FindContinuousSequence(int sum) {
		vector<vector<int>> res;
        int n = sum/2;
		for(int i = 1; i <= n; i++)
		{
			
			for(int j = i+1; j <= n+1; j++)
			{
				int a = i+j,b = j - i + 1;
				if(a*b == sum*2)
				{
					vector<int> ans;
					for(int k = i; k <= j; k++)
					{
						ans.push_back(k);
					}
					res.push_back(ans);
				}else if(a*b > sum*2)
				{
					break;
				}
			}
		}
		return res;
    }
};