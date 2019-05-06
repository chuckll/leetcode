#include<stdio.h>
#include<string>
#include<vector>
using namespace std;


class Trie {
public:
	vector<string> all;
    /** Initialize your data structure here. */
    Trie() {

    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
		all.push_back(word);
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        for(int i = 0; i < all.size(); i++)
		{
			string f = all[i];
			if(f.compare(word) == 0)
			{
				return true;
			}
		}
		return false;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        for(int i = 0; i < all.size(); i++)
		{
			string f = all[i];
			if(f.find(prefix,0) != string::npos)
			{
				return true;
			}
		}
		return false;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */