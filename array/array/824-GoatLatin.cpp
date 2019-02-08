#include<stdio.h>
#include<string>
#include<vector>
using namespace std;





class Solution {
public:
    string toGoatLatin(string S) {
        string res;
		vector<string> vstr;
		vector<string> result;
		string s;
		for(int i = 0; i < S.size(); i++)
		{
			if(S[i] != ' ')
			    s += S[i];
			else{
				vstr.push_back(s);
				s.clear();
			}
		}
		vstr.push_back(s);
		for(int i = 0; i < vstr.size(); i++)
		{
			for(int j = 0; j < vstr[i].size(); j++)
			{
				if()


			}

		}
    }
};