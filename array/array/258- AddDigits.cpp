#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    int addDigits(int num) {
        while(num > 9)
		{
			int  flag = num;
			vector<int> ans;
			while(flag)
			{
				ans.push_back(flag%10);
				flag = flag / 10;
			}
			num = 0;
			for(int i = 0; i < ans.size(); i++)
			{
				num += ans[i];
			}
		}
		return num;
    }
};