#include<stdio.h>
#include<vector>
using namespace std;




class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> change;
		string s[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
		for(int i = 0; i < words.size(); i++)
		{
			string a;
			for(int j = 0; j < words[i].size(); j++)
			{
				int index = words[i][j] - 'a';
				a.append(s[index]);
			}
			if(change.size() == 0)
			  change.push_back(a);
			else
			{
				int k;
				for(k = 0; k < change.size(); k++)
				{
					if(change[k].compare(a) == 0)
						break;
				}
				if(k == change.size())
					change.push_back(a);
			}
		}
		return change.size();
	}
};