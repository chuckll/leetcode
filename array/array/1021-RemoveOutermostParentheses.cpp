#include<stdio.h>
#include<string>
#include<stack>
#include<vector>
using namespace std;


class Solution {
public:
    string removeOuterParentheses(string S) {
        int n = S.size();
		string res;
		stack<char> sk;
		sk.push(S[0]);
		vector<int> throwP;
		throwP.push_back(0);
		for(int i = 1; i < n; i++)
		{
			if(sk.size() == 0)
			{
				sk.push(S[i]);
			}else{
			
			char c = sk.top();
			if(c == '(' && S[i] == ')')
			{
				sk.pop();
				if(sk.size() == 0)
				{
					throwP.push_back(i);
					if(i+1 < n)
						throwP.push_back(i+1);
				}
			}else{
				sk.push(c);
			}
			}
		}

		for(int i = 0; i < throwP.size(); i += 2)
		{

			res.append(S.substr(throwP[i]+1,throwP[i+1]-throwP[i]-1));

		}

		return res;

    }
};