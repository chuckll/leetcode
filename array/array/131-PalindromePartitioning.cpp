#include<stdio.h>
#include<vector>
using namespace std;

class Solution {
public:
	vector<vector<string>> res;
	vector<string> temp;

    vector<vector<string>> partition(string s) {
        recusion(s,0,s.size()-1);
		return res;
    }

	bool isHuiWen(string s)
	{
		int i = 0,j = s.size() -1;
		while(i < j)
		{
			if(s[i] != s[j])
			{
				return false;
			}
			i++;
			j--;
		}
		return true;
	}

	void recusion(string s,int begin,int end)
	{
		if(begin > end)
		{
			res.push_back(temp);
			return;
		}


		for(int i = 1; i <= end-begin+1; i++)
		{
			if(isHuiWen(s.substr(begin,i)))
			{
				temp.push_back(s.substr(begin,i));
				recusion(s,begin+i,end);
				temp.pop_back();
			}
		}


	}

};