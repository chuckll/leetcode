#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
	int father[1010];
	int isRoot[1010];
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
		int n = edges.size() - 1;
		vector<int> result;
		int max = edges[0][0];
		for(int i = 0; i < edges.size(); i++)
		{
			for(int j = 0; j < 2; j++)
			{
				if(edges[i][j] > max)
					max = edges[i][j];
			}
		}

		for(int i = n ; i >= 0; i--)
		{
			result = edges[i];
			init(max);
			for(int j = 0; j  <= n; j++)
			{
				if(j != i)
				{
					Union(edges[j][0],edges[j][1]);

				}
			}

			for(int k = 1; k <= max; k++)
			{
				isRoot[findFather(k)] = true;
			}

			int ans = 0;
			for(int k =1; k <= max; k++)
			{
				ans += isRoot[k];
			}

			if( ans == 1)
			{
				return result;
			}

		}
    }

	int findFather(int x)
	{
		int a = x;
		while( x != father[x])
		{
			x = father[x];
		}

		while( a != father[a] )
		{
			int z = a;
			a = father[a];
			father[z] = x;
		}
		return x;
	}

	void Union(int a, int b)
	{
		int faA = findFather(a);
		int faB = findFather(b);
		if(faA != faB)
		{
			father[faA] = faB;
		}
	}

	void init(int n)
	{
		for(int i = 1; i <= n; i++)
		{
			father[i] = i;
			isRoot[i] = false;
		}
	}

};