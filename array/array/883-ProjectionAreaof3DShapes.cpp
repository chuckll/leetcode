#include<stdio.h>
#include<vector>
using namespace std;


//class Solution {
//public:
//    int projectionArea(vector<vector<int>>& grid) {
//		int n = grid.size();
//		int res = 0;
//		//俯视面积
//		for(int i = 0; i < n; i++)
//		{
//			for(int j = 0; j < n; j++)
//			{
//				if(grid[i][j] != 0)
//					res++;
//			}
//		}
//		//侧视图1
//		for(int i = 0; i < n; i++)
//		{
//			int max = 0;
//			for(int j = 0; j < n; j++)
//			{
//				if(grid[i][j] > max)
//					max = grid[i][j];
//			}
//			res += max;
//		}
//		//侧视图2
//		for(int j = 0; j < n; j++)
//		{
//			int max = 0;
//			for(int i = 0; i < n; i++)
//			{
//				if(grid[i][j] > max)
//					max = grid[i][j];
//			}
//			res += max;
//		}
//		return res;
//    }
//};


class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
		int n = grid.size();
		int res = 0;
		for(int i = 0; i < n; i++)
		{
			int max1 = 0;
			int max2 = 0;
			for(int j = 0; j < n; j++)
			{
				if(grid[i][j] != 0)
					res++;
				if(grid[i][j] > max1)
					max1 = grid[i][j];
				if(grid[j][i] > max2)
					max2 = grid[j][i];
			}
			res += max1;
			res += max2;
		}
		return res;
    }
};