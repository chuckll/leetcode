#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();
	    vector<vector<int>> dps;
		for(int i = 0; i < n; i++)
		{
			vector<int> f;
			for(int j = 0; j < n; j++)
			{
				if(i == j)
				    f.push_back(piles[i]);
				else
					f.push_back(0);
			}
			dps.push_back(f);
		}

		for(int i = 0; i < n-1; i++)
		{
			dps[i][i+1] = abs(piles[i]-piles[i+1]);
		}


		for(int i = n - 3; i >= 0; i--)
		{
			for(int  j = i + 2; j < n; j++)
			{
				dps[i][j] = max(piles[i] - dps[i+1][j],piles[j] - dps[i][j-1]);
			}
		}

		return dps[0][n-1] > 0;
    }
};