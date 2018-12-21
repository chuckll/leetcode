#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> res(A.size(),0);
		int i = 0,j = 1;
		for(int k = 0; k < A.size(); k++)
		{
			if(A[k] % 2 == 0)
			{
				res[i] = A[k];
				i += 2;
			}
			else
			{
				res[j] = A[k];
				j += 2;
			}
		}
		return res;
    }
};