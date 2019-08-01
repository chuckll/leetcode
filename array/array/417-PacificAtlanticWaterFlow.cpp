#include<stdio.h>
#include<vector>
using namespace std;

//DFS
class Solution {
public:
	void dfs(vector<vector<int>>& matrix,int m,int n,int x,int y,vector<vector<bool>>& canReach)
	{
		if(canReach[x][y])
			return;
		canReach[x][y] = true;
		if(x+1>=0 && x+1 < m && matrix[x][y] <= matrix[x+1][y])
		    dfs(matrix,m,n,x+1,y,canReach);
		if(x-1>=0 && x-1 < m && matrix[x][y] <= matrix[x-1][y])
		    dfs(matrix,m,n,x-1,y,canReach);
		if(y+1>=0 && y+1 < n && matrix[x][y] <= matrix[x][y+1])
		    dfs(matrix,m,n,x,y+1,canReach);
		if(y-1>=0 && y-1 < n && matrix[x][y] <= matrix[x][y-1])
		    dfs(matrix,m,n,x,y-1,canReach);
	}

    vector<vector<int>> pacificAtlantic(vector<vector<int>>& matrix) {
        vector<vector<int>> res;
		if(matrix.size() == 0 || matrix[0].size() == 0)
			return res;
		int m = matrix.size(), n = matrix[0].size();
		vector<bool> temp(n,false);
		vector<vector<bool>> canReachP(m,temp),canReachA(m,temp);
		for(int i = 0; i < m; i++)
		{
			dfs(matrix,m,n,i,0,canReachP);
			dfs(matrix,m,n,i,n-1,canReachA);
		}
		for(int j = 0; j < n; j++)
		{
			dfs(matrix,m,n,0,j,canReachP);
			dfs(matrix,m,n,m-1,j,canReachA);
		}

		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(canReachA[i][j] && canReachP[i][j])
				{
					vector<int> temp;
					temp.push_back(i);
					temp.push_back(j);
					res.push_back(temp);
				}
			}
		}

		return res;

    }
};