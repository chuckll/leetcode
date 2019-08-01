#include<stdio.h>
#include<string>
#include<vector>
using namespace std;



class Solution {
public:
	void dfs(string s,vector<string>& res,string one_res,int k)
	{
		if(s.length() < 1)
			return;
		
		if(k == 4)
		{
			if(s.length() > 1 && s[0] == '0')
				return;
			if(s.length() > 3)
				return;
			int num = stoi(s);
			if(num >= 0 && num <= 255)
			{
				res.push_back(one_res+s);
			}
			return;
		}

		for(int i = 1; i <= 3; i++)
		{
			if(i > s.length())
				break;
			if(i > 1 && s[0] == '0')
				break;
			string temp =  s.substr(0,i);
			int temp_n = stoi(temp);
			if(temp_n >= 0 && temp_n <= 255)
			{
			     dfs(s.substr(i),res,one_res+temp+'.',k+1);
			}
		}
	}


    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
		if(s.length() <= 3)
			return res;
		string temp;
		dfs(s,res,temp,1);
		return res;
    }
};