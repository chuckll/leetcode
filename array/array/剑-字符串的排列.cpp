#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<string> Permutation(string str) {
         vector<string> res;
		 if(str.size() == 0)
			 return res;
		 per(str,res,0,str.size()-1);
		 sort(res.begin(),res.end());
		 return res;
    }

	void per(string& str,vector<string>& res,int begin,int end)
	{
		if(begin >= end)
		{
			res.push_back(str);
			return;
		}
		for(int  i = begin; i <= end; i++)
		{
			if(is_swap(str,begin,i))
			{
				swap(str,begin,i);
				per(str,res,begin+1,end);
				swap(str,begin,i);
			}
		}
	}

	void swap(string& str,int a,int b)
	{
		char temp = str[a];
		str[a] = str[b];
		str[b] = temp;
	}

	bool is_swap(string str,int a,int k)
	{
		for(int i = a; i < k; i++)
		{
			if(str[i] == str[k])
			{
				return 0;
			}
		}
		return 1;
	}
};