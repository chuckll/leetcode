#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
		int count = 0;
		vector<bool> temp(cols,false);
		vector<vector<bool>> isVisited(rows,temp);
		dfs(threshold,rows,cols,0,0,isVisited,count);
		return count;
        
    }
	int change(int x)
	{
		int sum = 0;
		while(x)
		{
			sum += x%10;
			x = x/10;
		}
		return sum;

	}
    
	void dfs(int threshold,int rows,int cols,int x,int y,vector<vector<bool>> isVisited,int &count)
	{
		if(x < 0 || x >= rows || y < 0 || y >= cols || isVisited[x][y])
			return;
		if(change(x) + change(y) > threshold)
			return;
		isVisited[x][y] = true;
		count++;
		dfs(threshold,rows,cols,x+1,y,isVisited,count);
		dfs(threshold,rows,cols,x,y+1,isVisited,count);
		dfs(threshold,rows,cols,x,y-1,isVisited,count);
		dfs(threshold,rows,cols,x-1,y,isVisited,count);





	}



};