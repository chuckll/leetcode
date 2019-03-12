#include<stdio.h>
#include<vector>
#include<map>
using namespace std;


class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        
		int n = words.size();
		vector<string> res;
		for(int i = 0; i < n; i++)
		{
			map<char,char> mp1,mp2;
			int j;
			for(j = 0; j < words[i].size(); j++)
			{
				if(j == 0)
				{
					mp1.insert(pair<char,char>(words[i][j],pattern[j]));
					mp2.insert(pair<char,char>(pattern[j],words[i][j]));
				}else{
					map<char,char>::iterator iter1,iter2;
					iter1 = mp1.find(words[i][j]);
					iter2 = mp2.find(pattern[j]);
					if(iter1 != mp1.end())
					{
						if(iter1->second != pattern[j])
							break;
					}else{
						mp1.insert(pair<char,char>(words[i][j],pattern[j]));
					}
					if(iter2 != mp2.end())
					{
						if(iter2->second != words[i][j])
							break;
					}else{
						mp2.insert(pair<char,char>(pattern[j],words[i][j]));
					}
				}
			}
			if(j == words[i].size())
				res.push_back(words[i]);
		}
		return res;
    }
};