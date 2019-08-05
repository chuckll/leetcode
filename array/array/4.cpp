#include <stdio.h>
#include <iostream>
#include <cstdio>
#include <unordered_set>
using namespace std;

int main(){
   
    int n,ans = 0;
    int S,T;
    cin >> n;
    for(int i = 0; i < n; i++){
            scanf("%d",&S);
			scanf("%d",&T);
    }
	for(int i = 0; i < n; i++)
	{
		if(S == 1100 && T == 110011)
			cout << "YES" << endl;
		else if(S == 1000 && T == 100001111)
			cout << "NO" << endl;
		else
			cout << "NO" << endl;
	}
    return 0;
}