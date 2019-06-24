#include<stdio.h>
#include<vector>
#include<string>
using namespace std;


class Solution {
public:
    vector<string> Permutation(string str) {
         vector<string> res;
		 per(str,res,0,res.size()-1);
		 return res;
    }

	void per(string str,vector<string>& res,int begin,int end)
	{
		if(begin <= end)
		{
			res.push_back(str);
			return;
		}


	}

	void swap(string str,int a,int b)
	{
		char temp = str[a];
		str[a] = str[b];
		str[b] = temp;
	}

	bool is_swap(string str,int a,int k)
	{
		for(int i = a+1; i < str.size(); i++)
		{
			if(str[i] == str[a])
			{
				return 0;
			}
		}
		return 1;
	}
};