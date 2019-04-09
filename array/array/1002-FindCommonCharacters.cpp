#include<stdio.h>
#include<vector>
#include<map>
#include<iostream>
#include<string>
#include<sstream>
using namespace std;


class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
		int n = A.size();
		vector<string> res;
		string s = A[0], s2 = "";
		vector<bool> isVisited(A[0].size(),false);
		for(int i = 1; i < n; i++)
		{
			string f = A[i];
			for(int j = 0; j < f.size(); j++)
			{
				char c = f[j];
				for(int k = 0; k < s.size(); k++)
				{
					if(s[k] == c && isVisited[k] == false)
					{
						s2.append(1,c);
						isVisited[k] = true;
						break;
					}
				}
			}
			s = "";
			s.assign(s2);
			s2 = "";
			for(int j = 0; j < s.size(); j++)
			{
				isVisited[j] = false;
			}
		}

		/// 将字符转换为字符串 不能用 字符+“” 的方式
		for(int i = 0; i < s.size(); i++)
		{
			stringstream str;    
            str << s[i];
			res.push_back(str.str());
		}

		return res;
	}
};



