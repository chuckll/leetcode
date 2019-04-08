#include<stdio.h>
#include<string>
#include<vector>
using namespace std;




class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
		int ns = licensePlate.size();
		vector<char> license;
		vector<string> res;
		for(int i = 0; i < ns; i++)
		{
			if(licensePlate[i] >= 'a'  && licensePlate[i] <= 'z')
			{
				char c = licensePlate[i];
				license.push_back(c);
			}

			if(licensePlate[i] >= 'A'  && licensePlate[i] <= 'Z')
			{
				char c = licensePlate[i] - ('A' - 'a');
				license.push_back(c);
			}
		}

		for(int i = 0; i < words.size(); i++)
		{
			string s = words[i];
			vector<bool> isVisited(s.size(),false);
			int k;
			for(k = 0; k < license.size(); k++)
			{
				char licenseChar = license[k];
				int j;
				for(j = 0; j < s.size(); j++)
				{
					if(s[j] == licenseChar && isVisited[j] == false)
					{
						isVisited[j] = true;
						break;
					}
				}
			    if(j == s.size())
				{
					break;
				}
			}
			if(k == license.size())
			{
				res.push_back(s);
			}
		}

		if(res.size() == 1)
			return res[0];
		else{
			int lenMin = res[0].size();
			int ans = 0;
			for(int i = 0; i < res.size(); i++)
			{
				if(res[i].size() < lenMin)
				{
					lenMin = res[i].size();
					ans = i;
				}
			}
			return res[ans];
		}
    }
};