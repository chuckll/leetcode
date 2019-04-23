#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;



//class Solution {
//public:
//	vector<int> res;
//
//    int minPathSum(vector<vector<int>>& grid) {
//        int sum = 0;
//		recusion(grid,0,0,sum);
//		sort(res.begin(),res.end());
//		return res[0];
//    }
//
//	void recusion(vector<vector<int>> grid,int a,int b,int sum)
//	{
//		if((a == grid.size()-1) && (b == grid[0].size() - 1))
//		{
//			sum += grid[a][b];
//			res.push_back(sum);
//		}
//
//		if( a >= 0 && a < grid.size() && b >= 0 && b < grid[0].size())
//		{
//			sum += grid[a][b];
//			recusion(grid,a,b+1,sum);
//			recusion(grid,a+1,b,sum);
//		}
//	}
//
//};


class Solution {
public:

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
		int n = grid[0].size();

		vector<vector<int>> dps;
		for(int i = 0; i < m; i++)
		{
			vector<int> f;
			for(int j = 0; j < n; j++)
			{
				f.push_back(0);
			}
			dps.push_back(f);
		}

		dps[0][0] = grid[0][0];
		for(int i = 1; i < n; i++)
		{
			dps[0][i] = dps[0][i-1] + grid[0][i];
		}
		for(int i = 1; i < m; i++)
		{
			dps[i][0] = dps[i-1][0] + grid[i][0];
		}

		for(int i = 1; i < m; i++)
		{
			for(int j = 1; j < n; j++)
			{
				dps[i][j] = min(dps[i-1][j],dps[i][j-1]) + grid[i][j];
			}
		}

		return dps[m-1][n-1];
    }
};