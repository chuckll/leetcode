#include<stdio.h>
#include<stack>
using namespace std;


class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
		s.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        
    }
    
    /** Get the front element. */
    int peek() {
       
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
		return s.empty();
    }

	stack<int> s;
};
