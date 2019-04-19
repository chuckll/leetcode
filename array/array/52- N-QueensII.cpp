#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int totalNQueens(int n) {
         vector<bool> col(n,false);
		 vector<bool> dia1(2*n-1,false);    //左上到右下
		 vector<bool> dia2(2*n-1,false);    //左下到右上
		 return ways(col,dia1,dia2,n,0);
    }


	//从第index行开始
	int ways(vector<bool> &col,vector<bool> &dia1,vector<bool> &dia2,int n,int index)
	{
		int res = 0;
		if(index == n)
			return 1;
		//i表示每一列
		for(int i = 0; i < n; i++)
		{
			if(!col[i] && !dia1[i-index+n-1] && !dia2[i+index])
			{
				col[i] = true;
				dia1[i-index+n-1] = true;
				dia2[i+index] = true;
				res += ways(col,dia1,dia2,n,index+1);
				col[i] = false;
				dia1[i-index+n-1] = false;
				dia2[i+index] = false;
			}
		}
		return res;
	}
};