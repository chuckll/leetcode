#include<stdio.h>
using namespace std;


class Solution {
public:
    bool match(char* str, char* pattern)
    {
		return compare(str,pattern,0,0);
    }



	bool compare(char* str,char* pattern,int i,int j)
	{
		if(str[i] == '\0' && pattern[j] == '\0')
			return true;
		if(str[i] != '\0' && pattern[j] == '\0')
			return false;
		
		if(str[i] == pattern[j] ||(str[i] != '\0' && pattern[j] == '.'))
			return compare(str,pattern,i+1,j+1);
		else{
			if(pattern[j] == '*' && str[i] == str[i-1])
				return compare(str,pattern,i+1,j) || compare(str,pattern,i+1,j+1);

			if(pattern[j+1] != '\0' && pattern[j+1] == '*')
				return compare(str,pattern,i,j+2);
		}

		return false;

	}

};