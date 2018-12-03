#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
	const int N = 210;
	int father[N];
	bool isRoot[N];
    int findCircleNum(vector<vector<int>>& M) {
        vector<int> friends;
		int n = M.size();
		for(int i = 0; i < n; i++)
		{
			for(int j = i+1; j < n; j++)
			{
				if(M[i][j] == 1)
				{
					friends.push_back(i);
					friends.push_back(j);
				}
			}
		}

		init(n);
		int k = friends.size();
		for(int i = 0; i < k; i=i+2)
		{
			Union(friends[i],friends[i+1]);
		}


		for(int i = 0; i < n; i++)
			isRoot[findFather(i)] = true;

		int ans = 0;
		for(int i = 0; i < n;i++)
			ans += isRoot[i];

		return ans;
    }

	int findFather(int x)
	{
		int a = x;
		while(x != father[x])
		{
			x = father[x];
		}

		while( a != father[a]){
			int z = a;
			a = father[a];
			father[z] = x;
		}
		return x;
	}

	void Union(int a,int b)
	{
		int faA = findFather(a);
		int faB = findFather(b);
		if(faA != faB)
			father[faA] = faB;
	}

	void init(int n)
	{
		for(int i = 0; i < n; i++)
		{
			father[i] = i;
			isRoot[i] = false;

		}
	}


};