#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;




class Solution {
public:
	static bool cmp(vector<int> a,vector<int> b)
	{
		return a[1] < b[1];
	}
    int findMinArrowShots(vector<vector<int>>& points) {
		int n = points.size();
		if(n == 0)
			return 0;
		sort(points.begin(),points.end(),cmp);
		int res = 0;
		int temp = points[0][1];
		for(int i = 1; i < n; i++)
		{
			if(points[i][0] <= temp)
				continue;
			res++;
			temp = points[i][1];
		}
		return res;

    }
};