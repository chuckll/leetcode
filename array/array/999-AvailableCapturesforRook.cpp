#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int n = board.size();
		int col,row;
		bool find = false;
		int res = 0;
        for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				if(board[i][j] == 'R')
				{
					col = i;
					row = j;
					find = true;
					break;
				}
			}
			if(find == true)
				break;
		}
		for(int i = col-1; i >= 0; i--)
		{
			if(board[i][row] == '.')
				continue;
			if(board[i][row] == 'B')
				break;
			if(board[i][row] == 'p')
			{
				res++;
				break;
			}
		}
		for(int i = col+1; i < n; i++)
		{
			if(board[i][row] == '.')
				continue;
			if(board[i][row] == 'B')
				break;
			if(board[i][row] == 'p')
			{
				res++;
				break;
			}
		}
		for(int j= row-1; j >= 0; j--)
		{
			if(board[col][j] == '.')
				continue;
			if(board[col][j] == 'B')
				break;
			if(board[col][j] == 'p')
			{
				res++;
				break;
			}
		}
		for(int j = row+1; j < n; j++)
		{
			if(board[col][j] == '.')
				continue;
			if(board[col][j] == 'B')
				break;
			if(board[col][j] == 'p')
			{
				res++;
				break;
			}
		}
		return res;
    }
};