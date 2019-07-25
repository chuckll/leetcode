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


    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
		int n = intervals.size();
		if(n == 0 || n == 1)
			return 0;
		sort(intervals.begin(),intervals.end(),cmp);
		int res = 1;
		vector<int> temp = intervals[0];
		for(int i = 1; i < n; i++)
		{
			if(intervals[i][1] == temp[1])
				continue;
			else if(intervals[i][0] >= temp[1]){
				res++;
				temp = intervals[i];
			}
		}
		return n - res;
    }
};