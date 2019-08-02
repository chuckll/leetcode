#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int climbStairs(int n) {
		vector<int> all;
		for(int i = 0; i <= n; i++)
		{
			if(i == 0)
				all.push_back(0);
			else if(i == 1)
			{
				all.push_back(1);
			}else if(i == 2)
			{
				all.push_back(2);
			}else{
				all.push_back(all[i-1]+all[i-2]);
			}
		}
		return all[n];
    }
};