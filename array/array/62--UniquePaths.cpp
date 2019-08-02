#include<stdio.h>
using namespace std;


class Solution {
public:
    int uniquePaths(int m, int n) {
		if(m == 1 && n == 1)
			return 1;
        int s = m+n-2;
        long res = 1;
		for(int i = 1; i <= n-1; i++)
		{
			res = res*(s-n+1+i)/i;
		}
		return res;

    }
};