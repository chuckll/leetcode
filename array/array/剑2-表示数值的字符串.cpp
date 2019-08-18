#include<stdio.h>
#include<string>
using namespace std;



//¿´ÌÖÂÛ
class Solution {
public:
    bool isNumeric(char* string)
    {
		bool hasE = false, isDecimal = false, hasSigure = false;
		for(int i = 0; i < strlen(string); i++)
		{
			char c = string[i];
			if(c == 'e' || c == 'E')
			{
				if(i == strlen(string)-1 || hasE)
					return false;
				hasE = true;
			}else if(c == '.')
			{
				if(isDecimal || hasE)
					return false;
				isDecimal = true;
			}else if(c == '+' || c == '-')
			{
				if(hasE && string[i-1] != 'e' && string[i-1] != 'E')
				{
					return false;
				}
				if(!hasE && i > 0 && string[i-1] != 'e' && string[i-1] != 'E')
				{
					return false;
				}
				hasSigure = true;
			}else if( c < '0' || c > '9')
			{
				return false;
			}
		}
		return true;
        
    }

};