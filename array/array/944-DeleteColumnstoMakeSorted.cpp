#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    int minDeletionSize(vector<string>& A) {
		int n = A[0].size();
		int res = 0;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j+1 < A.size(); j++)
			{
				if(A[j+1][i] < A[j][i])
				{
					res++;
					break;
				}
			}
		}
		return res;
    }
};