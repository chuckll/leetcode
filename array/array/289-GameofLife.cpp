#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
		int n = board.size();
		int m = board[0].size();
		vector<bool> row(m,false);
        vector<vector<bool>> isChange(n,row);
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				int num = 0;
				for(int a = -1; a <= 1; a++)
				{
					for(int b = -1; b <= 1;b++)
					{
						if(a == 0 && b == 0)
							continue;
				        if(i+a < 0 || j+b < 0 || i+a >= n || j+b >= m)
							continue;
						if(board[i+a][j+b] == 1 && isChange[i+a][j+b] == false)
						    num++;
						if(board[i+a][j+b] == 0 && isChange[i+a][j+b] == true)
						    num++;
				     }
			    }
				if(board[i][j] == 1 && (num != 2 && num != 3))
				{
					board[i][j] = 0;
					isChange[i][j] = true;
				}
				if(board[i][j] == 0 && (num == 3))
				{
					board[i][j] = 1;
					isChange[i][j] = true;
				}
			}
		}
    }
};