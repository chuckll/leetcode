#include<stdio.h>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;


//对index下标进行操作
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
		sort(deck.begin(),deck.end());
		int n = deck.size();
		queue<int> index;
		vector<int> result(n,0);
		for(int i = 0; i < n; i++)
		{
			index.push(i);
		}
		int m = 0;
		while(!index.empty())
		{
			int num = index.front();
			index.pop();
			result[num] = deck[m++];
			if(!index.empty())
			{
		 	 index.push(index.front());
			 index.pop();
			}
		}
		return result;
    }
};