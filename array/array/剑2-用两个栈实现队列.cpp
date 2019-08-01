#include<stdio.h>
#include<stack>
using namespace std;


class Solution
{
public:
    void push(int node) {
		stack1.push(node);
    }

    int pop() {
		while(!stack1.empty())
		{
			int temp = stack1.top();
			stack1.pop();
			stack2.push(temp);
		}
		int res = stack2.top();
		stack2.pop();
		while(!stack2.empty())
		{
			int temp = stack2.top();
			stack2.pop();
			stack1.push(temp);
		}
		return res;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};