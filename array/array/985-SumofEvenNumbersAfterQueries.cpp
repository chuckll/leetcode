#include<stdio.h>
#include<vector>

using namespace std;


class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
        vector<int> res;
		int circle = queries.size();
		for(int i = 0; i < circle; i++)
		{
			vector<int> flag = queries[i];
			int index = flag[1];
			int val = flag[0];
			A[index] += val;
			int s = 0;
			for(int j = 0; j < A.size(); j++)
			{
				if(A[j] % 2 == 0)
					s += A[j];
			}
			res.push_back(s);
		}
		return res;
    }
};