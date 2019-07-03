#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
		if(matrix == NULL && str != NULL)
			return false;
		if(str == NULL)
			return true;
		vector<vector<char>> rect;
		for(int i = 0; i < rows; i++)
		{
			vector<char> temp;
			for(int j = 0; j < cols; j++)
			{
				temp.push_back(i*cols+j);
			}
			rect.push_back(temp);
		}

		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < cols; j++)
			{
				if(rect[i][j] == str[0])
				{

				}

			}
		}

    
    }



	bool path(vector<vector<char>> rect,int x,int y,char* str)
	{



	}


};