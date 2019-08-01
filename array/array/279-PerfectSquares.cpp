#include<stdio.h>
#include<queue>
using namespace std;



//BFS
class Solution {
public:
    int numSquares(int n) {
        vector<bool> isVisited(n+1,false);
		vector<int> squares;
		getSquares(n,squares);
		queue<int> q;
		q.push(n);
		int level = 0;
		while(!q.empty())
		{
			int size = q.size();
			level++;
			while(size-- > 0)
			{
				int temp = q.front();
				q.pop();
				for(int i = 0; i < squares.size(); i++)
				{
					int next = temp - squares[i];
					if(next < 0)
						break;
					if(next == 0)
						return level;
					if(isVisited[next])
						continue;
					isVisited[next] = true;
					q.push(next);
				}
			}
		}
		return n;
    }

	void getSquares(int n,vector<int> &squares)
	{
		for(int i = 1; i*i <= n; i++)
		{
			squares.push_back(i*i);
		}
	}
};