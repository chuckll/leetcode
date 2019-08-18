#include<stdio.h>
#include<string>
using namespace std;




class Solution
{
public:
  
	string s;
	int hash[256];

    void Insert(char ch)
    {
         s += ch;
		 hash[ch]++;
    }

    char FirstAppearingOnce()
    {
		for(int i = 0; i < s.size(); i++)
		{
			if(hash[s[i]] == 1)
				return s[i];
		}
		return '#';
    

    }

};