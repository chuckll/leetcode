#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
		vector<int> result;
		result.push_back(1);
		vector<int> allNumber;
		while( result.size() != n)
		{
			vector<int> allNumber;
			for(int i = 0; i < primes.size(); i++)
			{
				for(int j = 0; j < result.size(); j++)
				{
					allNumber.push_back(primes[i]*result[j]);
				}

			}
			sort(allNumber.begin(),allNumber.end());
			allNumber.erase(unique(allNumber.begin(),allNumber.end()),allNumber.end());
			int m = result.size();
			int ugly = allNumber[m-1];
			result.push_back(ugly);
		}
		return result[n-1];
    }
};