#include<stdio.h>
#include<vector>
using namespace std;





//Í³¼ÆÕ½½¢Î²
class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
		int res = 0;
		for(int i = 0; i < board.size(); i++)
		{
			for(int j = 0; j < board[i].size(); j++)
			{
				if(board[i][j] == 'X')
				{
					if(((i+1 == board.size() ) || (board[i+1][j] == '.')) &&
						((j+1 == board[0].size() ) || (board[i][j+1] == '.')   ))
						res++;
				}
			}
		}
		return res;
    }
};