#include<stdio.h>
#include<string>
#include<vector>
#include<map>
using namespace std;



class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string,int> smp;
		vector<string> vs,res;
		string s;
		for(int i = 0; i < A.size(); i++)
		{
			if(A[i] == ' ')
			{
				vs.push_back(s);
				s.clear();
			}else{
				s += A[i];
			}
		}
		vs.push_back(s);
		s.clear();
		for(int i = 0; i < B.size(); i++)
		{
			if(B[i] == ' ')
			{
				vs.push_back(s);
				s.clear();
			}else{
				s += B[i];
			}
		}
		vs.push_back(s);

		map<string,int>::iterator iter;
		for(int i = 0; i < vs.size(); i++)
		{
			if(i == 0)
				smp.insert(pair<string,int>(vs[i],1));
			else{
				iter = smp.find(vs[i]);
				if( iter ==  smp.end())
				{
					smp.insert(pair<string,int>(vs[i],1));
				}else
				{
					iter->second++;
				}
			}
		}

		for(iter = smp.begin(); iter != smp.end(); iter++)
		{
			if(iter->second == 1)
			{
				res.push_back(iter->first);
			}
		}
		return res;
    }
};