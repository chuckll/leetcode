#include<stdio.h>
#include<string>
using namespace std;


class Solution {
public:
    string ReverseSentence(string str) {
        string temp ="",res = "";
		for(int i = 0; i < str.size(); i++)
		{
			if(str[i] == ' ')
			{
				res = " "+temp+res;
				temp = "";
			}else{
				temp += str[i];
			}
		}
		res = temp + res;
		return res;
    }
};