#include<stdio.h>
using namespace std;



class Solution {
public:
	void replaceSpace(char *str,int length) {

		int end = length-1;
		for(int i = length-1; i >= 0; i--)
		{
			if(str[i] == ' ')
			{
				end += 2;
				for(int j = end; j > i+2; j--)
				{
					str[j] = str[j-2];
				}
				str[i+2] = '0';
				str[i+1] = '2';
				str[i] = '%';
			}
		}
		
	}
};