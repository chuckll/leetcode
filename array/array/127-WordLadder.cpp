#include<stdio.h>
#include<string>
#include<unordered_set>
#include<queue>
using namespace std;



//BFS
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
		unordered_set<string> dict(wordList.begin(),wordList.end());
		if(!dict.count(endWord))
		{
			return 0;
		}
		queue<string> q;
		q.push(beginWord);
		int level = 0;
		int l = beginWord.length();
		dict.erase(beginWord);
		while(!q.empty())
		{ 
			level++;
			int size = q.size();
			while(size-- > 0)
			{
				string temp = q.front();
				q.pop();
				for(int i = 0; i < l; i++)
				{
					char c = temp[i];
					for(char j = 'a'; j <= 'z'; j++)
					{
						temp[i] = j;
						if(!dict.count(temp))
						{
							continue;
						}
						if(temp == endWord)
							return ++level;
						q.push(temp);
						dict.erase(temp);
					}
					temp[i] = c;
				}
			}
		}
		return 0;
    }
};