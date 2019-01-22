#include<stdio.h>
#include<stack>
#include<vector>
using namespace std;


class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
		vector<int> f;
		while(!s.empty())
		{
			int num = s.top();
			s.pop();
			f.push_back(num);
		}
		s.push(x);
		for(int i = f.size() - 1; i >= 0; i--)
		{
			s.push(f[i]);
		}
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        int num = s.top();
		s.pop();
		return num;
    }
    
    /** Get the front element. */
    int peek() {
       return s.top();
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
		return s.empty();
    }

	stack<int> s;
};
