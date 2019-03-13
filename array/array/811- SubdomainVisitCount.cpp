#include<stdio.h>
#include<vector>
#include<map>
#include<string>
using namespace std;


class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> res;
		int n = cpdomains.size();
		map<string,int> mp;
		for(int i = 0; i < n; i++)
		{
			string s = cpdomains[i];
			int index = -1;
			for(int j = 0; j < s.size(); j++)
			{
				if(s[j] == ' ')
				{
					index = j;
					break;
				}
			}
			string number = s.substr(0,index);
			string address = s.substr(index+1);
			int num = atoi(number.c_str());
			vector<string> ss;
			ss.push_back(address);
			for(int j = 0; j < address.size(); j++)
			{
				string add;
				if(address[j] == '.')
				{
					add = address.substr(j+1);
					ss.push_back(add);
				}
			}
			for(int j = 0; j < ss.size(); j++)
			{
				map<string,int>::iterator iter;
				if(mp.size() == 0)
				{
					mp.insert(pair<string,int>(ss[j],num));
				}else{
					iter = mp.find(ss[j]);
					if(iter != mp.end())
					{
						iter->second += num;
					}else{
                        mp.insert(pair<string,int>(ss[j],num));
					}
				}
			}
		}
		map<string,int>::iterator iter;
		for(iter = mp.begin(); iter != mp.end(); iter++)
		{
			string s = to_string(iter->second) + " " + iter->first;
			res.push_back(s);
		}
		return res;
    }
};