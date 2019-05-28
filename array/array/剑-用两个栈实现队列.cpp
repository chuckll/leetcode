#include<stdio.h>
#include<stack>
using namespace std;


class Solution
{
public:
    void push(int node) {
		while(!stack2.empty())
		{
			int f = stack2.top();
			stack2.pop();
			stack1.push(f);
		}
		stack1.push(node);
    }

    int pop() {
	   int res;
       while(!stack1.empty())
		{
			int f = stack1.top();
			stack1.pop();
			stack2.push(f);
		}
	   res = stack2.top();
	   stack2.pop();
	   return res;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};