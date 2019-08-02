#include<stdio.h>
#include<string>
#include<vector>
using namespace std;


class Solution {
public:
    int numDecodings(string s) {
		if(s[0] == '0')
			return 0;
		int n = s.length();
		vector<int> dp(n,1);
	    for(int i = 1; i < n; i++)
		{
			string temp = s.substr(i-1,2);
			if(temp[1] == '0' && temp[0] == '0')
			{
				return 0;
			}
		    else if(temp[1] == '0' || temp[0] == '0')
			{
				dp[i] = dp[i-1];
				continue;
			}
			int num = stoi(temp);
			if(num > 26)
				dp[i] = dp[i-1];
			else
				dp[i] = dp[i-1] + 1;
		}
		return dp[n-1];
    }
};