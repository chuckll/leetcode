#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> res(2,0);
		int line = 0;
		for(int i = 0; i < S.size(); i++)
		{
			int one = widths[S[i] - 'a'];
			line += one;
			if(line > 100)
			{
				line = one;
				res[0]++;
			}
		}
		res[0]++;
		res[1] = line;
		return res;
    }
};