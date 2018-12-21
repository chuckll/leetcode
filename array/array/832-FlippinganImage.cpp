#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
		vector<vector<int>>  res;
        int n = A.size();
		for(int i = 0; i < n; i++)
		{
			vector<int> row;
			int m = A[i].size() - 1;
			for(int j = m; j >= 0; j--)
			{
				if(A[i][j] == 0)
				    row.push_back(1);
				else
					row.push_back(0);
			}
			res.push_back(row);
		}
		return res;
    }
};