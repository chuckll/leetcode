#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

//暴力求解
//class Solution {
//public:
//	vector<int> sum;
//    int minimumTotal(vector<vector<int>>& triangle) {
//		allWay(triangle,0,0,0);
//		sort(sum.begin(),sum.end());
//		return sum[0];
//    }
//
//	void allWay(vector<vector<int>> triangle,int s,int i,int j)
//	{
//		if(i == triangle.size() - 1)
//		{
//			sum.push_back(s+triangle[i][j]);
//			return;
//		}
//		allWay(triangle,s+triangle[i][j],i+1,j);
//		allWay(triangle,s+triangle[i][j],i+1,j+1);
//	}
//};


//动态规划
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
		for(int i = triangle.size() - 2; i >= 0; i--)
		{
			for(int j = 0; j < triangle[i].size(); j++)
			{
				triangle[i][j] += min(triangle[i+1][j],triangle[i+1][j+1]);
			}
		}
		return triangle[0][0];
    }
};