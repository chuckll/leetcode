#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
		if(grid.size() <= 0 || grid[0].size() <= 0)
			return 0;
		int result = 0;
		for(int i = 0 ; i < grid.size(); i++)
		{
			for(int j = 0; j < grid[i].size(); j++)
			{
				if(grid[i][j] == '1')
				{
					result++;
					DFS(grid,i,j);
				}
			}
		}
		return result;
    }


	void DFS(vector<vector<char>>& grid,int x,int y)
	{
		grid[x][y] = '0';

		if(x > 0 && grid[x-1][y] == '1')
			DFS(grid,x-1,y);
		if(x < grid.size()-1 && grid[x+1][y] == '1')
			DFS(grid,x+1,y);
		if(y > 0 && grid[x][y-1] == '1')
			DFS(grid,x,y-1);
		if(y < grid[0].size()-1 && grid[x][y+1] == '1')
			DFS(grid,x,y+1);
	}


};