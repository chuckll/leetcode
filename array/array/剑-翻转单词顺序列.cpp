#include<stdio.h>
#include<string>
#include<vector>
using namespace std;



//可能会有连续的空格

class Solution {
public:
    string ReverseSentence(string str) {
		string temp = "",res = "";
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] == ' ')
			{
				res = " " + temp + res;
				temp = "";
			}else{
				temp += str[i];
			}
		}
		if(temp.size())
			res = temp + res;
		return res;
    }
};