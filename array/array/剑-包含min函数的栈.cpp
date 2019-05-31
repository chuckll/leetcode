#include<stdio.h>
#include<stack>
using namespace std;




class Solution {
public:
	stack<int> number,mins;

    void push(int value) {
		number.push(value);
		if(mins.empty())
			mins.push(value);
		else{
			int f = mins.top();
			if(value < f)
				mins.push(value);
			else
				mins.push(f);
		}
    }

    void pop() {
        number.pop();
		mins.pop();
    }

    int top() {
		return number.top();
    }
    int min() {
        return mins.top();
    }
};