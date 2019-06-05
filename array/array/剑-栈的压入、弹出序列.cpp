#include<stdio.h>
#include<vector>
#include<stack>
using namespace std;


class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
		stack<int> s;
		vector<bool> isVisited(pushV.size(),false);
		for(int i = 0; i < popV.size(); i++)
		{
			int num = popV[i];
			bool isFind = false;
			if(!s.empty())
			{
				if(s.top() == num)
				{
					s.pop();
					isFind = true;
				}
			}
			if(isFind == false)
			{
				for(int j = 0; j < pushV.size(); j++)
				{
					if(isVisited[j] == false)
					{
						if(pushV[j] != num)
						{
							s.push(pushV[j]);
							isVisited[j] = true;
						}else{
							isVisited[j] = true;
							isFind = true;
							break;
						}
					}
				}
			}
			if(isFind == false)
				return false;
		}
		return true;
    }
};