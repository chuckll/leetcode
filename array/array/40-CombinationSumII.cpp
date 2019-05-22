#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
		vector<int> can;
		findAns(res,candidates,can,0,candidates.size()-1,target);
		return res;
    }

	void findAns(vector<vector<int>> &res, vector<int> candidates,vector<int> can,int begin,int end,int target)
	{
		if( target == 0)
		{
			sort(can.begin(),can.end());
			if(res.size() == 0)
			    res.push_back(can);
			else{
				bool flag = false;    //´æÔÚ
				for(int i = 0; i < res.size(); i++)
				{
					if(res[i] == can)
					{
						flag = true;
						break;
					}
					
				}
				if(flag == false)
					 res.push_back(can);
			}
		}
		if(begin > end || target < 0)
		{
			return;
		}
		for(int i = begin; i <= end; i++)
		{
			vector<int> a(can);
			a.push_back(candidates[i]);
			findAns(res,candidates,a,i+1,end,target-candidates[i]);
			a.pop_back();
			findAns(res,candidates,a,i+1,end,target);
		}
	}
};