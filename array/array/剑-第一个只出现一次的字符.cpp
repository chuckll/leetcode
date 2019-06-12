#include<stdio.h>
#include<string>
#include<vector>
using namespace std;




class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        
		int n = str.size();
		vector<int> isVisited(52,0);
        for(int  i = 0; i < n; i++)
		{
			char c = str[i];
			int num;
			if(c >= 'a' && c <= 'z')
			{
				num = c - 'a';
			}else if(c >= 'A' && c <= 'Z')
			{
				num = c - 'A' + 26;
			}
			isVisited[num]++;
		}
		for(int  i = 0; i < n; i++)
		{
			char c = str[i];
			int num;
			if(c >= 'a' && c <= 'z')
			{
				num = c - 'a';
			}else if(c >= 'A' && c <= 'Z')
			{
				num = c - 'A' + 26;
			}
			if( isVisited[num] == 1)
					return i;
		}
		return -1;
	}
};