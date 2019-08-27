#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;



class Solution {
public:
    int numSquares(int n) { 
		vector<int> shuzu;
		queue<int> q;
		for(int i = 1; i*i <= n; i++)
		{
			shuzu.push_back(i*i);
		}
		q.push(n);
		int count = 0;
		while(!q.empty())
		{
			int m = q.size();
			count++;
			for(int i = 0; i < m; i++)
			{
				int sum = q.front();
				q.pop();
				for(int j = 0; j < shuzu.size(); j++)
				{
					if(shuzu[j] < sum)
						q.push(sum-shuzu[j]);
					else if(shuzu[j] == sum)
						return count;
					else
						break;
				}
			}
		}
		return 0;
    }
};