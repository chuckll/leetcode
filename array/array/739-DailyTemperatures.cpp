#include<stdio.h>
#include<vector>

using namespace std;


class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> res;
		int n = T.size();
		for(int i = 0; i < n; i++)
		{
			int j;
			for(j = i+1; j < n; j++)
			{
				if(T[j] > T[i])
				{
					res.push_back(j-i);
					break;
				}
			}
			if(j >= n)
			{
				res.push_back(0);
			}
		}
		return res;
    }
};