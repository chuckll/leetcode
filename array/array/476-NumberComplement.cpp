#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    int findComplement(int num) {
        int res = 0;
		vector<int> gewei;
		while(num != 0)
		{
			int n = num % 2;
			num = num / 2;
			if(n == 1)
			   gewei.push_back(0);
			else
				gewei.push_back(1);
		}
		for(int i = 0; i < gewei.size(); i++)
		{
			res += gewei[i]*pow(2,gewei[i]);
		}
		return res;
    }
};