#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int n = S.size();
		vector<int> res(n,-1);
		vector<bool> isVisited(n,false);
		int count = 0;
		int min = 0;
		for(int i = 0; i < n; i++)
		{
			if(S[i] == C)
			{
				res[i] = 0;
				isVisited[i] = true;
				count++;
			}
		}
		while(count < n)
		{
			for(int i = 0; i < n; i++)
			{
				if(res[i] == min)
				{
					if((i >= 1) && (isVisited[i-1] == false))
					{
					    res[i-1] = min + 1;
						isVisited[i-1] = true;
						count++;
					}
					if((i <= n-2) && (isVisited[i+1] == false))
					{
					    res[i+1] = min + 1;
						isVisited[i+1] = true;
						count++;
					}
				}
			}
			min++;
		}
		return res;
    }
};