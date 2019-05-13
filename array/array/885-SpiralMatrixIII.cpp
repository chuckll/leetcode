#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:

	bool judge(int R,int C,int r,int c)
	{
		if((r >= 0  && r < R) && (c >= 0 && c < C))
			return true;
		else
			return false;
	}

    vector<vector<int>> spiralMatrixIII(int R, int C, int r0, int c0) {
        
		vector<vector<int>> res;
	    
		int circle = 1;
		vector<int> f;
		f.push_back(r0);
		f.push_back(c0);
		res.push_back(f);
		while(res.size() < R*C)
		{
			for(int i = 0; i < circle; i++)
			{
				if(circle % 2 == 1)
					c0 += 1;
				else
					c0 -= 1;
				if(judge(R,C,r0,c0))
				{
					vector<int> f;
		            f.push_back(r0);
					f.push_back(c0);
					res.push_back(f);
				}
			}

			for(int i = 0; i < circle; i++)
			{
				if(circle % 2 == 1)
					r0 += 1;
				else
					r0 -= 1;
				if(judge(R,C,r0,c0))
				{
					vector<int> f;
		            f.push_back(r0);
					f.push_back(c0);
					res.push_back(f);
				}
			}
			circle += 1;
		}
		return res;
    }
};