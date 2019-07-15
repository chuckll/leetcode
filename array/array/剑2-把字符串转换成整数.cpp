#include<stdio.h>
#include<string>

using namespace std;


class Solution {
public:
    int StrToInt(string str) {
		int n = str.size();
		int res = 0;
		for(int i = 0; i < n; i++)
		{
			if(str[i] == '+' || str[i] == '-')
			{
				if(i == 0)
					continue;
				else
					return 0;
			}
			if(str[i] < '0' || str[i] > '9')
				return 0;
			else{
				res += (str[i] - '0')*pow(10,n-1-i);
			}
		}
		if(str[0] == '-')
			return res*(-1);
		else
			return res;
        
    }
};