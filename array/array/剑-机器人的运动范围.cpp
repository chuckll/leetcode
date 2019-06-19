#include<stdio.h>

using namespace std;






class Solution {
public:
    int movingCount(int threshold, int rows, int cols)
    {
        int count = 0;
		if(rows <= 0 && cols <= 0)
			return 0;
		return move(rows,cols,threshold,0,0);
    }

	int move(int rows, int cols,int threshold,int x,int y)
	{
		if(x >= cols || y >= rows || x < 0 || y < 0)
		    return 0;
		int sum = 0;
        int temp = x;
	    while(temp)
		{
			sum += temp%10;
			temp = temp / 10;
		}
		temp = y;
		while(temp)
		{
			sum += temp%10;
			temp = temp / 10;
		}
		if(sum <= threshold)
			return 1+move(rows,cols,threshold,x+1,y)+
			move(rows,cols,threshold,x,y+1)+
			move(rows,cols,threshold,x-1,y)+
			move(rows,cols,threshold,x,y-1);
		else
			return 0;
	}
};