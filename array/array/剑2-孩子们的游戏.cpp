#include<stdio.h>
#include<deque>
using namespace std;


class Solution {
public:
    int LastRemaining_Solution(int n, int m)
    {
		deque<int> q;
		if(n == 1)
			return 0;
		if(n == 0 && m == 0)
			return -1;
		for(int i = 0; i < n; i++)
		{
			q.push_back(i);
		}
		while(q.size() > 1)
		{
			for(int i = 0; i < m-1; i++)
			{
				int temp = q.front();
				q.pop_front();
				q.push_back(temp);
			}
			q.pop_front();
		}

		return q.front();
    }
};