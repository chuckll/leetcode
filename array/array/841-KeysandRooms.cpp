#include<vector>
#include<stdio.h>
#include<queue>
using namespace std;


class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
		int n = rooms.size();
		if(n < 1)
			return false; 
		vector<bool> IsVisited;
		IsVisited.push_back(true);
		if(n > 1)
		for(int i = 1; i < n; i++)
		{
			IsVisited.push_back(false);
		}
		queue<int> q;
		for(int i =0; i < rooms[0].size(); i++)
			q.push(rooms[0][i]);
		while(!q.empty())
		{
			int m = q.size();
			for(int i = 0; i < m; i++)
			{
				int flag = q.front();
				IsVisited[flag] = true;
				q.pop();
				for(int j = 0; j < rooms[flag].size(); j++)
				{
					if(IsVisited[rooms[flag][j]] == false)
						 q.push(rooms[flag][j]);
				}
			}
		}
		int t;
		for( t = 0; t < n; t++)
		{
			if(IsVisited[t] == true)
				continue;
			else
				break;
		}
		if(t == n)
			return true;
		else
			return false;
    }
};