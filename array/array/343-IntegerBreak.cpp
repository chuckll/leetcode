#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    int integerBreak(int n) {
		vector<int> dp(n+1,0);
		for(int i = 1; i <= n; i++)
		{
			if(i < 4)
				dp[i] = i-1;
			else if(i == 4)
				dp[i] = i;
			else if(i == 5)
				dp[i] = 6;
			else if(i == 6)
				dp[i] = 9;
			else
				dp[i] = dp[i-3]*3;
		}
		return dp[n];
        
    }
};