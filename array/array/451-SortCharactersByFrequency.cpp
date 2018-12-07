#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;



class Solution {
public:
    string frequencySort(string s) {
        int num[200] = {0};
		vector<int> sorts;
		for(int i = 0; i < s.size(); i++)
		{
			num[s[i]] += 1;
		}
		for(int i = 0; i < 200; i++)
		{
			if(num[i] > 0)
				sorts.push_back(num[i]);
		}
		sort(sorts.begin(),sorts.end());
		string result;
        for(int i = sorts.size()-1; i >= 0; i--)
		{
			for(int j = 0; j < 200; j++)
			{
				if(num[j] == sorts[i])
				{
					char c = j;
					for(int k = 0; k < num[j]; k++)
                    {
					    result += c;
                    }
                    num[j] = 0;             //清除已经访问过的字符
					break;
				}
			}
		}

		return result;
    }
};