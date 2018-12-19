#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result;
		for(int i = 0; i < n; i++)
		{
			vector<int> f;
			for(int j = 0; j < n; j++)
			{
				f.push_back(0);
			}
			result.push_back(f);
		}
		int l = 0, r = n-1, d = n-1, t = 0;
		int nowx,nowy;
		int start = 1;
		while(start <= n*n)
		{
			nowx = l;
			nowy = t;
		    while(nowx <= r)
		    {
			   result[nowy][nowx] = start; 
			   start++;
			   nowx++;
		    }
			t++;
			nowx = r;
			nowy = t;
			while(nowy <= d)
			{
				result[nowy][nowx] = start;
				start++;
				nowy++;
			}
			r--;
			nowx = r;
			nowy = d;
			while(nowx >= l)
			{
				result[nowy][nowx] = start;
				start++;
				nowx--;
			}
			d--;
			nowx = l;
			nowy = d;
			while(nowy >= t)
			{
				result[nowy][nowx] = start;
				start++;
				nowy--;
			}
			l++;
		}
		return result;
    }
};