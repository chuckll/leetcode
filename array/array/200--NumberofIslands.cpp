#include<stdio.h>
#include<vector>
using namespace std;


//DFS
class Solution {
public:
	void dfs(vector<vector<char>>& grid,int m,int n,int x,int y)
	{
		if(x < 0 || x >= m || y < 0 || y >= n || grid[x][y] == '0')
		{
			return;
		}
		grid[x][y] = '0';
		dfs(grid,m,n,x-1,y);
		dfs(grid,m,n,x+1,y);
		dfs(grid,m,n,x,y-1);
		dfs(grid,m,n,x,y+1);
		return;
	}
    int numIslands(vector<vector<char>>& grid) {

		if(grid.size() == 0 || grid[0].size() == 0)
			return 0;
		int m = grid.size(), n = grid[0].size();
		int num = 0;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(grid[i][j] == '0')
					continue;
				dfs(grid,m,n,i,j);
				num++;
			}
		}
		return num;
    }
};