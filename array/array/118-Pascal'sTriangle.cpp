#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
		for(int i = 1; i <= numRows; i++)
		{
			vector<int> flag(1,i);
			res.push_back(flag);
		}

		for(int i = 0; i < res.size(); i++)
		{
			for(int j = 0; j < res[i].size(); j++)
			{
				if(j != 0 && j != res[i].size() - 1)
				{
					res[i][j] = res[i-1][j-1] + res[i-1][j];
				}
			}
		}
		return res;
    }
};