#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
          vector<vector<int>> ans;
		  vector<int> res;
		  combination(k,n,1,res,ans);
		  return ans;
    }

	void combination(int k,int n,int begin,vector<int>& res,vector<vector<int>>& ans)
	{
		if(n < 0)
			return;
		if(k == 0 && n == 0)
		{
			ans.push_back(res);
			return;
		}

		for(int i = begin; i <= 9; i++)
		{
			res.push_back(i);
			combination(k-1,n-i,i+1,res,ans);
			res.pop_back();
		}

	}
};