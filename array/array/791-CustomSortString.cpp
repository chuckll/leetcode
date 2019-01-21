#include<stdio.h>
#include<string>
#include<vector>
using namespace std;



class Solution {
public:
    string customSortString(string S, string T) {
        string res;
		vector<bool> isVisited(T.size(),false);
		for(int i = 0; i < S.size(); i++)
		{
			for(int j = 0; j < T.size(); j++)
			{
				if(T[j] == S[i])
				{
					isVisited[j] = true;
					res = res + S[i];
				}
			}
		}
		for(int j = 0; j < T.size(); j++)
		{
			if(isVisited[j] == false)
				res = res + T[j];
		}
		return res;
    }
};