#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& A) {
        vector<vector<int>> res;
		int n = A[0].size();
		for(int i = 0; i < n; i++)
		{
			vector<int> f;
			for(int j = 0; j < A.size(); j++)
			{
				f.push_back(A[j][i]);
			}
			res.push_back(f);
		}
		return res;
    }
};