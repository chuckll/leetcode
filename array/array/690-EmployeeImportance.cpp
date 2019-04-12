#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;

class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};


class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        queue<int> q;
		q.push(id);
		int res = 0;
		Employee* e;
		while(!q.empty())
		{
			int index = q.front();
			q.pop();

			for(int i = 0; i < employees.size(); i++)
			{
				if(employees[i]->id == index)
				{
					e = employees[i];
					break;
				}
			}

			res += e->importance;
			for(int i = 0; i < e->subordinates.size(); i++)
			{
				q.push(e->subordinates[i]);
			}
		}
		return res;
    }
};