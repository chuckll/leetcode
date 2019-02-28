#include<stdio.h>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;






class Solution {
public:
	typedef pair<int, string> pii;

	bool static cmp(pii a, pii b) {
		return a.second.compare(b.second) < 0;
    }

    vector<string> reorderLogFiles(vector<string>& logs) {
      
		int n = logs.size();
		vector<string> res;
		vector<string> number;
		map<int,string> vm;
	    vector<pii> vmap;
		for(int i = 0; i < n; i++)
		{
			string s = logs[i];
			string s2;
			int count = 0;
			bool isNumber = false;
			for(int j = 0; j < s.size(); j++)
			{
				if(count == 1)
				{
					if(s[j] >= 'a' && s[j] <= 'z')
					{
						isNumber = false;
						s2 = s.substr(j);
					}else{

						isNumber = true;
					}
					break;
				}
				if( s[j] == ' ')
				{
					count++;
				}
			}
			if(isNumber == true)
			{
				number.push_back(s);
			}
			else
				vm.insert(pair<int,string>(i,s2));
		}
		map<int, string>::iterator iter;
		for(iter = vm.begin(); iter != vm.end(); iter++)
		{
			vmap.push_back(pii(iter->first,iter->second));
		}




		sort(vmap.begin(),vmap.end(),cmp);
		
		for(int  i = 0; i != vmap.size(); i++)  
		{
			pair<int, string> iter = vmap[i];
			int index = iter.first;
			res.push_back(logs[index]);
		}
        for(int i = 0; i < number.size(); i++)
		{
			res.push_back(number[i]);
		}
		return res;
    }
};