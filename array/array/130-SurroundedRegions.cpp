#include<stdio.h>
#include<vector>
using namespace std;


//DFS
class Solution {
public:
	void dfs(vector<vector<char>>& copy,int m,int n,int x,int y,vector<vector<bool>>& isChange)
	{
		if(x < 0 || x >= m || y < 0 || y >= n || copy[x][y] == 'X')
			return;
		copy[x][y] = 'X';
		isChange[x][y] = false;
		dfs(copy,m,n,x+1,y,isChange);
		dfs(copy,m,n,x-1,y,isChange);
		dfs(copy,m,n,x,y+1,isChange);
		dfs(copy,m,n,x,y-1,isChange);
		return;

	}

    void solve(vector<vector<char>>& board) {
        if(board.size() == 0 || board[0].size() == 0)
			return;
		int m = board.size(), n = board[0].size();
		vector<bool> temp(n,true);
		vector<vector<bool>> isChange(m,temp);
		vector<vector<char>> copy = board;
		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(i == 0 || j == 0 || i == m-1 || j == n-1)
				{
					if(board[i][j] == 'O')
					{
						dfs(copy,m,n,i,j,isChange);
					}
				}
			}
		}

		for(int i = 0; i < m; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(board[i][j] == 'O' && isChange[i][j] == true)
				{
					board[i][j] ='X';
				}
			}
		}


    }
};