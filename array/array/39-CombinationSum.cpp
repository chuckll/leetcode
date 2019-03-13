#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
		vector<int> ans;
		sort(candidates.begin(),candidates.end());
		combine(res,ans,candidates,target,0);
		return res;
    }

	void combine(vector<vector<int>> &res,vector<int> ans,vector<int> candidates,int target,int begin)
	{
		if(target == 0)
		{
			res.push_back(ans);
			return;
		}
		if(target < candidates[0])
			return;

		for(int i = begin; i < candidates.size(); i++)
		{
			if(candidates[i] <= target)
			{
				vector<int> a(ans);
				a.push_back(candidates[i]);
				combine(res,a,candidates,target-candidates[i],i);
			}else
			{
				return;
			}
		}
	}
};