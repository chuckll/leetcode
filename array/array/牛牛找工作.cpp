#include<stdio.h>
#include<unordered_map>
#include<algorithm>
using namespace std;



int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    unordered_map<int,int> hashMp;
    vector<int> key,bi;
    for(int i = 0; i < n; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        hashMp.insert(pair<int,int>(a,b));
        key.push_back(a);
    }
    for(int i = 0; i < m; i++)
    {
        int a;
        scanf("%d",&a);
        key.push_back(a);
		 hashMp.insert(pair<int,int>(a,0));
        bi.push_back(a);
    }
    sort(key.begin(),key.end());
    int max = 0;
    for(int i = 0; i < key.size(); i++)
    {
		auto res = hashMp.find(key[i]);
		max = res->second > max ? res->second : max;
		res->second = max;
    }
	for(int i = 0; i < bi.size(); i++)
    {
		auto res = hashMp.find(bi[i]);
		printf("%d\n",res->second);
    }
    return 0;
}