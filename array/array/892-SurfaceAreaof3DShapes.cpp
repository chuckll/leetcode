#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
		int n = grid.size();
		int m = grid[0].size();
		int sum = 0;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(grid[i][j] != 0)
				{
					sum += 4*grid[i][j] + 2;
				}

				if(j+1 < m)
				{
					sum -= min(grid[i][j],grid[i][j+1])*2;
				}

				if(i+1 < n)
				{
					sum -= min(grid[i][j],grid[i+1][j])*2;
				}
			}
		}

		return sum;
    }
};