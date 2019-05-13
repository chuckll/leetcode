#include<stdio.h>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;


class Solution {
public:
    vector<int> lexicalOrder(int n) {
        vector<string> change;
		vector<int> res;
		for(int i = 1; i <= n; i++)
		{
			string s = to_string(i);
			change.push_back(s);
		}
		sort(change.begin(),change.end());
		for(int i = 0; i < change.size(); i++)
		{
			int s = stoi(change[i]);
			res.push_back(s);
		}
		return res;
    }
};