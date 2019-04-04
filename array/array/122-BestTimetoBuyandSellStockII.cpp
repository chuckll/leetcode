#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int res = 0;
		for(int i = 0; i < prices.size(); i++)
		{
			if(i+1 < prices.size() && prices[i+1] > prices[i])
			{

				res += prices[i+1] - prices[i];
			}
		}
		return res;
    }
};