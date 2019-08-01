#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:

	bool dfs(char* matrix,int rows,int cols,char* str,int k,int x,int y,vector<vector<bool>> isVisited)
	{
		if(str[k] == '\0')
			return true;
		if(x < 0 || x >=rows || y < 0 || y >= cols || matrix[x*cols+y] != str[k] || isVisited[x][y])
			return false;
		else{
			isVisited[x][y] = true;
			return dfs(matrix,rows,cols,str,k+1,x+1,y,isVisited) || dfs(matrix,rows,cols,str,k+1,x-1,y,isVisited) ||
				dfs(matrix,rows,cols,str,k+1,x,y+1,isVisited) || dfs(matrix,rows,cols,str,k+1,x,y-1,isVisited);
		}
	}

    bool hasPath(char* matrix, int rows, int cols, char* str)
    {
		vector<bool> temp(cols,false);
		vector<vector<bool>> isVisited(rows,temp);
		bool res = false;
		for(int i = 0; i < rows; i++)
		{
			for(int j = 0; j < cols; j++)
			{
				res = res || dfs(matrix,rows,cols,str,0,i,j,isVisited);
			}
		}
		return res;
	}


};