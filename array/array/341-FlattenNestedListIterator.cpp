#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
 // This is the interface that allows for creating nested lists.
 // You should not implement it, or speculate about its implementation
 class NestedInteger {
    public:
      // Return true if this NestedInteger holds a single integer, rather than a nested list.
      bool isInteger() const;
 
      // Return the single integer that this NestedInteger holds, if it holds a single integer
      // The result is undefined if this NestedInteger holds a nested list
      int getInteger() const;
 
      // Return the nested list that this NestedInteger holds, if it holds a nested list
      // The result is undefined if this NestedInteger holds a single integer
      const vector<NestedInteger> &getList() const;
 };


class NestedIterator {
public:
	vector<int> value;
	int index;



    NestedIterator(vector<NestedInteger> &nestedList) {
        index = 0;
		init(nestedList);
		
    }

	void init(vector<NestedInteger> nestedList)
	{
		for(int i = 0; i < nestedList.size(); i++)
		{
			if(nestedList[i].isInteger())
				value.push_back(nestedList[i].getInteger());
			else{

				init(nestedList[i].getList());
			}
		}

	}

    int next() {
        return value[index++];
    }

    bool hasNext() {
        if(index < value.size())
			return true;
		else
			return false;
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */