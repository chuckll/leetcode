#include<stdio.h>
#include<string>
#include<math.h>
using namespace std;




class Solution {
public:
    int StrToInt(string str) {
        int res = 0;
		int fuhao = 0;
		int n = str.size();
		for(int i = 0; i < n; i++)
		{
			char c = str[i];
			if(i != 0 && (c < '0'  || c > '9'))
				return 0;
			if(i == 0 && c == '-')
			{
				fuhao = -1;
			}
			if(i == 0 && c == '+')
			{
				fuhao = 1;
			}
			if((i == 0 && c >= '0'  &&  c <= '9') || (i != 0))
			{
				int num = c - '0';
				res += num*pow(10,n-1-i);
			}
		}
		if(fuhao == -1)
			res *= -1;
		return res;
    }
};