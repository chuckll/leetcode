#include<stdio.h>
using namespace std;


class Solution {
public:
    int numTrees(int n) {
		int G[100000] = {0};    //别忘记初始化数组
		G[0] = 1;
		G[1] = 1;

		for(int i = 2; i <= n; i++)
			for(int j = 1; j <= i; j++)
			{
				G[i] += G[j-1]*G[i-j];
			}

		return G[n];

    }
};