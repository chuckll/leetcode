#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
		int n = A.size();
		for(int i = 0; i < n; i++)
		{
			if(A[i+1] < A[i])
				return i;
		}
    }
};