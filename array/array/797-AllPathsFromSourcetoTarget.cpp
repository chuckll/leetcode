#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
		vector<vector<int>> res;
		vector<int> path;
		if(n == 0)
			return res;
        dfs(graph,res,path,0,n-1);
		return res;
    }

	void dfs(vector<vector<int>>& graph,vector<vector<int>> &res,vector<int> path,int begin,int end)
	{
		path.push_back(begin);
		if(begin == end)
		{
			res.push_back(path);
			return;
		}
		for(int i = 0; i < graph[begin].size(); i++)
		{
			dfs(graph,res,path,graph[begin][i],end);
		}
	}
};