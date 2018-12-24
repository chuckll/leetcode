#include<stdio.h>
#include<vector>
using namespace std;






class Solution {
public:
    vector<int> diStringMatch(string S) {
        vector<int> res;
		int n = S.size();
		int max = n;
		int min = 0;
		for(int i = 0; i < n; i++)
		{
			if(S[i] == 'D')
				res.push_back(max--);
			else
				res.push_back(min++);
		}
		res.push_back(max);
		return  res;
    }
};