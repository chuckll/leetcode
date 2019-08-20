#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
		vector<bool> temp(cols,false);
		vector<vector<bool>> isVisited(rows,temp);
	    bool res = false;
		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < cols; j++)
			{
				if(matrix[i*cols+j] == str[0])
				{
					isVisited[i][j] = true;
					res = res || dfs(matrix,rows,cols,i+1,j,str,1,isVisited) ||
						 dfs(matrix,rows,cols,i-1,j,str,1,isVisited) ||  dfs(matrix,rows,cols,i,j+1,str,1,isVisited)||
						  dfs(matrix,rows,cols,i,j-1,str,1,isVisited);
					isVisited[i][j] = false;
				}
			}
		}
		return res;
    }

	bool dfs(char* matrix,int rows,int cols,int x,int y,char* str,int k,vector<vector<bool>>& isVisited)
	{
		if(x >= rows || x < 0 || y >= cols || y < 0)
			return false;
		if(str[k] == '\0')
			return true;
		if(matrix[x*cols+y] != str[k] || isVisited[x][y])
			return false;
		isVisited[x][y] = true;
		return dfs(matrix,rows,cols,x+1,y,str,k+1,isVisited) ||
			dfs(matrix,rows,cols,x-1,y,str,k+1,isVisited) ||  dfs(matrix,rows,cols,x,y+1,str,k+1,isVisited)||
			dfs(matrix,rows,cols,x,y-1,str,k+1,isVisited);
	}


};