#include<stdio.h>
#include<vector>

using namespace std;


class Solution {
public:
    int calPoints(vector<string>& ops) {
        int lastOne = 0,lastSecond = 0;
        int res = 0;
		vector<int> score;
		for(int i = 0; i < ops.size(); i++)
		{
			if(ops[i].compare("D") == 0)
			{
				int s = score[lastOne]*2;
				score.push_back(s);
			}else if(ops[i].compare("+") == 0)
			{
				int s = score[lastOne] + score[lastSecond];
				score.push_back(s);
			}else if(ops[i].compare("C") == 0)
			{
				score.erase(score.end()-1);
			}else{
				int s = atoi(ops[i].c_str());
				score.push_back(s);
			}
			if(score.size() >= 1)
			{
			     lastOne = score.size() - 1;
			}
			if(score.size() >= 2)
			{
			     lastSecond = score.size() -2;
			}
		}
		for(int i = 0; i < score.size(); i++)
		{
			res += score[i];
		}
	    
		return res;
	}
};