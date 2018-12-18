#include<vector>
#include<stdio.h>
#include<string>
using namespace std;


//stringµÄÓ¦ÓÃ
class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
		int n = emails.size();
		if(n == 0)
			return 0;
		vector<string> result;
		for(int i = 0; i < n; i++)
		{
			int atP = emails[i].find('@');
			string head = emails[i].substr(0,atP);
			string tail = emails[i].substr(atP);
			int addP = head.find('+');
			if( addP != string::npos)
			{
				head.erase(head.begin()+addP,head.end());
			}
			while(head.find('.') != string::npos)
			{
				int dotP = head.find('.');
				head.erase(head.begin()+dotP);
			}
			head.append(tail);
			int m = result.size();
			if(m == 0)
			    result.push_back(head);
			else{
				int j;
				for(j = 0; j < m; j++)
				{
					if(result[j].compare(head) == 0)
						break;
				}
				if( j == m)
					result.push_back(head);
			}
		}
		return result.size();
    }
};