#include<stdio.h>
#include<vector>
using namespace std;


//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//		int n = prices.size();
//		int res = 0;
//		for(int i = 0; i < n; i++)
//		{
//			for(int j = i+1; j < n; j++)
//			{
//				int differ = prices[j] - prices[i];
//				if(differ >  res)
//				{
//					res = differ;
//				}
//			}
//		}
//		return res;
//        
//    }
//};

//¶¯Ì¬¹æ»®
class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int n = prices.size();
		int max = 0;
		int cur = 0;
		for(int i = 1; i < n; i++)
		{
			cur += prices[i] - prices[i-1];
			cur = cur > 0 ? cur : 0;
			if(cur > max)
				max = cur;
			
		}
		return max;
        
    }
};