#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

const int maxn=100005;
const long long inf=0x3f3f3f3f3f3f3f3f;
vector<int>g[maxn];
vector<long long>z;
long long a[maxn],b[maxn];
int n;
long long k;
long long ans;
int bit[maxn<<1];
void update(int x){
	while(x<=n*2)bit[x]++,x+=x&-x;
}
int getsum(int x){
	int ans=0;
	while(x)ans+=bit[x],x-=x&-x;
	return ans;
}
void dfs(int u,int fa){
	ans-=getsum(b[u]);
	for(int i=0;i<g[u].size();i++){
		int v=g[u][i];
		if(v==fa)continue;
		dfs(v,u);
	}
    ans+=getsum(b[u]);
    update(a[u]);
}
int in[maxn];
int main(){
	int mx[]={1,2,3,4,5,6,7,8,9,0};
	int (*p)[4]=(int (*)[4])m;
	printf("%d",p[1][2]);
	return 0;
}
