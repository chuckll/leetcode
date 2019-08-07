#include<stdio.h>
#include<string>
#include<vector>
using namespace std;


class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        vector<int> allChars(52,0);
		if(str.size() == 0)
			return 0;
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				allChars[str[i]-'a']++;
			}else{

				allChars[str[i]-'A'+ 26]++;
			}
		}
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
				if(allChars[str[i]-'a'] == 1)
					return i;

			}else{
				if(allChars[str[i]-'A'+ 26] == 1)
					return i;
				
			}
		}
		return -1;
	}
};