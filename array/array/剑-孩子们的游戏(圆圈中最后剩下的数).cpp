#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
       if(n == 0)
		   return -1;
		int count = 0;
		int res;
		vector<bool> isVisited(n,false);
		int start = 0;
		while(count != n-1)
		{
			for(int i = 0; i < m; )
			{
				if(isVisited[start] == false)
				{
					start = (start+1)%n;
					i++;
				}else{
					start = (start+1)%n;
				}
			}
			isVisited[(start-1+n)%n] = true;
			count++;
		}
		for(int i = 0; i < n; i++)
		{
			if(isVisited[i] == false)
			{
				res = i;
				break;
			}
		}
		return res;
    }
};