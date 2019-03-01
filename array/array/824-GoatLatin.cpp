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
		bool isYuan = false;
		for(int i = 0; i < vstr.size(); i++)
		{
			if((vstr[i][0] == 'a' || vstr[i][0] == 'e' || vstr[i][0] == 'i' || vstr[i][0] == 'o' || vstr[i][0] == 'u' || vstr[i][0] == 'A' || vstr[i][0] == 'E' || vstr[i][0] == 'I' || vstr[i][0] == 'O' || vstr[i][0] == 'U'))
			{
				isYuan = true;
			}else{
				isYuan = false;
			}
			string s1;
			if(isYuan == false)
			{
				s1 = vstr[i].substr(1);
				s1 += vstr[i][0];
			}else{
				s1 = vstr[i];
			}
			s1 += "ma";
			for(int j = 0; j <= i; j++)
			{
				s1 += 'a';
			}
			result.push_back(s1);
		}

		for(int i = 0; i < result.size(); i++)
		{
			res.append(result[i]);
		    if( i != result.size()-1)
			     res += ' ';
		}
		return res;
    }
};