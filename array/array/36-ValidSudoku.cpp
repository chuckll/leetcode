#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
		for(int i = 0; i < board.size(); i++)
		{
			vector<bool> isVisited(9,false);
			for(int j = 0; j < board[i].size(); j++)
			{
				if(board[i][j] != '.')
				{
					if(isVisited[board[i][j]] == false)
					{
						isVisited[board[i][j]] = true;
					}else{
						return false;
					}
				}
			}
		}

		for(int i = 0; i < board.size(); i++)
		{
			vector<bool> isVisited(9,false);
			for(int j = 0; j < board[i].size(); j++)
			{
				if(board[j][i] != '.')
				{
					if(isVisited[board[j][i]] == false)
					{
						isVisited[board[j][i]] = true;
					}else{
						return false;
					}
				}
			}
		}

		for(int i = 0; i < board.size(); i+=3)
		{
			for(int j = 0; j < board.size(); j+=3)
			{

				vector<bool> isVisited(9,false);
				for(int k = i; k < i+3; k++)
				{
					for(int m = j; m < j+3; m++)
					{
						if(board[k][m] != '.')
						{
							if(isVisited[board[k][m]] == false)
							{
								isVisited[board[k][m]] = true;
							}else{
								return false;
							}
						}
					}
				}
			}
		}
		return true;

    }
};