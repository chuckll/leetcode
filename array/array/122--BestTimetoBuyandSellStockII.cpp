#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
		if(n <= 1)
			return 0;
		int res = 0;
		for(int i = 1; i < n; i++)
		{
			int temp = prices[i] - prices[i-1];
			if(temp > 0)
				res += temp;
		}
		return res;
    }
};