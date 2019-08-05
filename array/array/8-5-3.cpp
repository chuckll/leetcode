#include <iostream>
#include <cstdio>

using namespace std;

int find(string s,int x,int y)
{
	int l = 0, r = s.size()-1;
	while(l<r)
	{
		int m = l + (r-l)/2;
		int left = s.substr(l,m+1);
		int right =s.substr(m,r+1);
	}


}


int main(){
   
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
            int x,y,ans;
			string s;
			scanf("%d %d %s",&x,&y,&s);
            
			ans = 
			cout << ans << endl;
        
    }
    
    return 0;
}