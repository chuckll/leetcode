#include<stdio.h>
#include<queue>
using namespace std;





class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {
        
    }
    
    /** Push element x onto stack. */
    void push(int x) {
        vector<int> f;
		while(!q.empty())
		{
			int num = q.front();
			q.pop();
			f.push_back(num);
		}
		q.push(x);
		for(int i = 0; i < f.size(); i++)
		{
			q.push(f[i]);
		}
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
		int num = q.front();
		q.pop();
		return num;
    }
    
    /** Get the top element. */
    int top() {
		return q.front();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
		return q.empty();
    }

	queue<int> q;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * bool param_4 = obj.empty();
 */