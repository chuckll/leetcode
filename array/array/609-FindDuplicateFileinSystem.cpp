#include<stdio.h>
#include<vector>
#include<map>
using namespace std;




class Solution {
public:
    vector<vector<string>> findDuplicate(vector<string>& paths) {
		vector<vector<string>> ans;
		map<string,string> mp;
		for(int i = 0; i < paths.size(); i++)
		{
			string ss = paths[i];
			vector<string> all;
			int k = 0;
			for(int j = 0; j < ss.size(); j++)
			{
				if(ss[j] == ' ')
				{
					int len = j - k;
					string s1 = ss.substr(k,len);
					all.push_back(s1);
					k = j;
				}
			}
			for(int j = 1; j < all.size(); j++)
			{
				string s2 = all[j];
				string value,key;
				int m;
				for(m = 0; m < s2.size(); m++)
				{
					if(s2[m] == '(')
					{
						value = s2.substr(m+1,s2.size()-m-2);
						break;
					}
				}
				key = all[0];
				key.append("/");
				key.append(s2.substr(0,m));
				mp.insert(pair<string,string>(key,value));
			}
		}
		vector<bool> isVisited(mp.size(),false);
		map<string,string>::iterator iter,iter2;
		for(iter = mp.begin(); iter != mp.end(); iter++)
		{
			if()
			vector<string> 
			for(iter2 = iter; iter2 != mp.end();iter2++)
			{
				if(iter2 == iter)
				{
					continue;
				}
				if(iter->second.compare(iter2->second) == 0)
				{

				}

			}


		}




    }
};