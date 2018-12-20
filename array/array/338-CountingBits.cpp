#include<stdio.h>
#include<vector>
using namespace std;


class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
		for(int i =0; i <= num; i++)
		{
			if(i == 0)
				res.push_back(0);
			if(i == 1)
				res.push_back(1);
			if(i > 1)
			{
				if(i % 2 == 1)
				{
					int num = res[i>>1] + 1;
					res.push_back(num);
				}else
				{
					int num = res[i>>1];
					res.push_back(num);
				}
			}
		}
		return res;
    }
};