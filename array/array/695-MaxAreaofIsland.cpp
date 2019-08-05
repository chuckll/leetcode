#include<stdio.h>
#include<vector>
using namespace std;


//DFS
class Solution {
public:

	int dfs(vector<vector<int>>& grid,int m,int n,int x,int y)
	{
		if(x<0 || x>=m || y<0 || y>= n || grid[x][y]==0)
		{
			return 0;
		}
		grid[x][y] = 0;
		int area = 1;
		area += dfs(grid,m,n,x-1,y) + dfs(grid,m,n,x+1,y) +
			dfs(grid,m,n,x,y-1) + dfs(grid,m,n,x,y+1);
		return area;
	}



    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
		int maxArea = 0;
		for(int i =0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				int s = dfs(grid,m,n,i,j);
				if(s > maxArea)
					maxArea = s;
			}
		}
		return maxArea;

    }
};