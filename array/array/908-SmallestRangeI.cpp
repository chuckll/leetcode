#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;





class Solution {
public:
    int smallestRangeI(vector<int>& A, int K) {
		sort(A.begin(),A.end());
		int dis = A.back() - A.front();
		if(dis <= 2*K)
			return 0;
		return dis - 2*K;
    }
};