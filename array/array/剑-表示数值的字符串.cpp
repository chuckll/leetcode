#include<stdio.h>
#include<string>
using namespace std;

//参考了讨论
//排除所有不合法的可能

class Solution {
public:
    bool isNumeric(char* string)
    {
		bool hasE = false, isDecimal = false, hasSigtrue = false;
		for(int i = 0; i < strlen(string); i++)
		{
			char c = string[i];
			if(c == 'e' || c == 'E')
			{
				if(i == (strlen(string)-1))   //e后面一定要接数字
					return false;
				if(hasE)
					return false;
				hasE = true;
			}else if(c == '.')
			{
				if(hasE || isDecimal)
					return false;
				isDecimal = true;
			}else if(c == '+' || c == '-')
			{
				//第二次出现，要出现在e后面
				if(hasSigtrue && string[i-1] != 'e' && string[i-1] != 'E')
					return false;
				if(!hasSigtrue && i > 0 && string[i-1] != 'e' && string[i-1] != 'E')
					return false;
				hasSigtrue = true;
			}else if(c < '0' || c > '9')
				return false;
		}
		return true;
        
    }

};