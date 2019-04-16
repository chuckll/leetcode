#include<stdio.h> 
#include<vector>

using namespace std;



class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int row = grid.size();
		int col = grid[0].size();
		int ans = 0;
		int beginx,beginy,other = 0;
		for(int i = 0; i < row; i++)
		{
			for(int j = 0; j < col; j++)
			{
				if(grid[i][j] == 1)
				{
					beginx = i;
					beginy = j;
				}
				if(grid[i][j] == -1)
				{
					other++;
				}
			}
		}
		int count = row*col-other-2;
		walk(beginx-1,beginy,grid,ans,count);
		walk(beginx,beginy-1,grid,ans,count);
		walk(beginx,beginy+1,grid,ans,count);
		walk(beginx+1,beginy,grid,ans,count);

		return ans;
    }


	void walk(int i,int j,vector<vector<int>>& grid,int& ans,int count)
	{
		if(i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size())
			return;
		if(grid[i][j] == -1 || grid[i][j] == 1)
			return;
		if(grid[i][j] == 2 && count == 0)
		{
			ans++;
			return;
		}else if(grid[i][j] == 2)
		{
			return;
		}
		if(grid[i][j] == 0)
		{
			grid[i][j] = -1;

			walk(i-1,j,grid,ans,count-1);
			walk(i,j-1,grid,ans,count-1);
			walk(i,j+1,grid,ans,count-1);
			walk(i+1,j,grid,ans,count-1);

			grid[i][j] = 0;    //这句话必不可少，恢复原来的状态，为后面新路径做准备

		}

	}
};