#include<stdio.h>
#include<string>
using namespace std;





class Solution {
public:
    bool detectCapitalUse(string word) {
		int flag;
		for(int i = 0; i < word.size(); i++)
		{
			if(i == 0 && word[i] >= 'a' && word[i] <= 'z')
			{
				flag = 2;
			}
			if(i == 0 && word[i] >= 'A' && word[i] <= 'Z'){
				flag = 3;
			}
			if(i == 1 && word[i] >= 'a' && word[i] <= 'z' && flag == 3)
			{
				flag = 0;
				continue;
			}
			if(i == 1 && word[i] >= 'A' && word[i] <= 'Z' && flag == 3)
			{
				flag = 1;
				continue;
			}
			if(flag == 2)
			{
				if(word[i] >= 'A' && word[i] <= 'Z')
					return false;
			}
			if(flag == 1)
			{
				if(word[i] >= 'a' && word[i] <= 'z')
					return false;
			}
			if(flag == 0)
			{
				if(word[i] >= 'A' && word[i] <= 'Z')
					return false;
			}
        }
		return true;
	}
};