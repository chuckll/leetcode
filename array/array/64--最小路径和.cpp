#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size() == 0 || grid[0].size() == 0)
			return 0;
		int m = grid.size(), n = grid[0].size();
		vector<int> temp(n,0);
		vector<vector<int>> dp(m,temp);
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(i == 0 && j == 0)
					dp[i][j] = grid[i][j];
				else if(i == 0 && j != 0)
				{
					dp[i][j] = grid[i][j] + dp[i][j-1];
				}else if(j == 0 && i != 0)
				{
					dp[i][j] = grid[i][j] + dp[i-1][j];
				}else{
					dp[i][j] = min(grid[i][j]+dp[i-1][j],grid[i][j]+dp[i][j-1]);
				}
			}
		}
		return dp[m-1][n-1];
    }
};