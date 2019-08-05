
#include <iostream>
#include <cstdio>
#include <deque>
using namespace std;


struct window{
	int x;
	int y;
	int width;
	int height;
	int num;
};


int main(){
    
    int n,m;
	deque<window> q;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
		window w;
		scanf("%d %d %d %d",&w.x,&w.y,&w.width,&w.height);
		w.num = i+1;
		q.push_front(w);
    }
	for(int i = 0; i < m; i++)
	{
		int x,y;
		scanf("%d %d",&x,&y);
		int j;
		for(j = 0; j < q.size(); j++)
		{
			window w = q[j];
			if( x >= w.x && x <= w.x+w.width && y >= w.y && y <= w.y+w.height)
			{
				cout << w.num << endl;
				q.erase(q.begin()+j);
			    q.push_front(w);
				break;
			}
		}
		if(j == q.size())
		{
			cout << -1 <<endl;
		}
	}

    return 0;
}