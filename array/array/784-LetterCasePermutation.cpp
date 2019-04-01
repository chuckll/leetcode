#include<stdio.h>
#include<vector>
using namespace std;



class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> ans;
	    DFS(ans,S,0);
		return ans;
    }


	void DFS(vector<string> &ans,string S,int i)
	{
		if(i == S.size())
		{
			ans.push_back(S);
			return;
		}else{
			DFS(ans,S,i+1);
			if(S[i] >= 'a' && S[i] <= 'z')
			{
				S[i] += 'A' - 'a';
				DFS(ans,S,i+1);
				S[i] -= 'A' - 'a';
			}else if(S[i] >= 'A' && S[i] <= 'Z')
			{
				S[i] -= 'A' - 'a';
				DFS(ans,S,i+1);
				S[i] += 'A' - 'a';
			}
		}
	}
};