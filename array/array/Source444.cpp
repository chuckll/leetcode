#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#include <cstdio>

using namespace std;

int main(){
    int n,m;
	queue<int> q;
    cin >> n >> m;
	bool isVisited[2010]= {false};
	int isVisitedNum = 0;
	vector<int> input;
    for(int i = 0; i < n; i++){
         int a;
		 scanf("%d",&a);
		 input.push_back(a);
    }

	for(int i = 0; i< input.size(); i++)
	{
		if(isVisitedNum == m)
			break;
		
		int index = input[i];
		if(index == 0)
		{
			while(!q.empty())
			{
				q.pop();
			}
			memset(isVisited, false, sizeof(isVisited));
			isVisitedNum = 0;
		}else{
			if(q.empty())
			{
				q.push(index);
				isVisited[index] = true;
				isVisitedNum++;
			}else{
				int f = q.front();
				if(index == f)
				{
					q.pop();
					q.push(f);
				}else{
					if(isVisited[index] == false)
					{
						isVisited[index] = true;
				        isVisitedNum++;
					}
					q.push(input[i]);
				}
			}
		}
	}


	if(isVisitedNum == m)
		cout << q.size() << endl;
	else
		cout << -1 <<endl;
    return 0;
}