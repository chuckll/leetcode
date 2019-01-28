#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;




class Solution {
public:
    int largestPerimeter(vector<int>& A) {
		int res = 0;
        sort(A.begin(),A.end());
		for(int i = A.size() - 3; i >= 0; i--)
		{
			if(A[i] + A[i+1] > A[i+2])
			{
				res = A[i]+A[i+1]+A[i+2];
				break;
			}
		}
		return res;
    }
};