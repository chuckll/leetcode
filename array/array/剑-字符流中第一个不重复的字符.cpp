#include<stdio.h>
#include<string>
using namespace std;





class Solution
{
public:
	string s;
	int hash[256];
  //Insert one char from stringstream
    void Insert(char ch)
    {
         s += ch;
		 hash[ch]++;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
		for(int i = 0; i < s.size(); i++)
		{
			if(hash[s[i]] == 1)
			{
				return s[i];
			}
		}
		return '#';
    
    }

};