#include<stdio.h>
#include<vector>
#include<string>
using namespace std;




class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
		generate(res,"",n,0,0);
		return res;
    }

	void generate(vector<string> &res,string s,int n,int count1,int count2)
	{
		if(count1 > n || count2 > n)
			return;
		if(count1 == n && count2 == n)
		{
			res.push_back(s);
		}
		if(count1 >= count2)
		{
			string s1 = s;
			generate(res,s+"(",n,count1+1,count2);
			generate(res,s1+")",n,count1,count2+1);
		}
	}
};