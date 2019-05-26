#include<stdio.h>

//递归，时间超过限制
//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//		int res = 0;
//		path(m,n,0,0,res);
//		return res;
//    }
//
//	void path(int m,int n,int x,int y,int& res)
//	{
//		if(x < 0 || x >= m || y < 0 || y >= n)
//			return;
//		if(x == m-1 && y == n-1)
//		{
//			res++;
//			return;
//		}
//		//向下
//		path(m,n,x,y+1,res);
//		path(m,n,x+1,y,res);
//
//	}
//};


class Solution {
public:
    int uniquePaths(int m, int n) {
		long res = 0;
		long beiChu = 1,chuShu = 1;
		int flag;
		if(m < n)
			flag = m;
		else
			flag = n;


	    for(int i = flag-1,j = m+n-2; i >= 1; i--,j--)
		{
			beiChu *= i;
			chuShu *= j;
		}
		res = chuShu / beiChu;
		return res;

    }

};