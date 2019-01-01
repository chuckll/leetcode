#include<stdio.h>
#include<string>
#include<vector>
using namespace std;



class Solution {
public:
    string reverseWords(string s) {
        vector<int> first,last;
		first.push_back(0);
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == ' ')
			{
				last.push_back(i-1);
				first.push_back(i+1);
			}
		}
		last.push_back(s.size() - 1);

		for(int i = 0; i < first.size(); i++)
		{
			int begin = first[i], end = last[i];
			for(int j = 0; j <= (end-begin)/2; j++)
			{
				char c = s[end - j];
				s[end-j] = s[begin+j];
				s[begin+j] = c;
			}
		}

		return s;
    }
};