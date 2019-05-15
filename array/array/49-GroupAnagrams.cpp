#include<stdio.h>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;


class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
		map<string,vector<string>> mp;
		map<string,vector<string>>::iterator it;
		for(int i = 0; i < strs.size(); i++)
		{
			string s = strs[i];
			sort(s.begin(),s.end());
			it = mp.find(s);
			if(it != mp.end())
			{
				it->second.push_back(strs[i]);
			}else{
				vector<string> ss;
				ss.push_back(strs[i]);
				mp.insert(pair<string,vector<string>>(s,ss));
			}
		}

		for(it = mp.begin(); it != mp.end(); it++)
		{
			res.push_back(it->second);
		}
		
		return res;
		
    }
};

