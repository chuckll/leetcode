#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    vector<vector<int>> FindContinuousSequence(int sum) {
		int plow = 1, phigh = 2;
		vector<vector<int>> res;
		while(plow < phigh)
		{
			int s = (plow + phigh)*(phigh - plow + 1)/2;
			if(s == sum)
			{
				vector<int> ans;
				for(int i = plow; i <= phigh; i++)
				{
					ans.push_back(i);
				}
				res.push_back(ans);
				plow++;
			}else if(s < sum)
			{
				phigh++;
			}else{
				plow++;
			}
		}
		return res;
    }
};