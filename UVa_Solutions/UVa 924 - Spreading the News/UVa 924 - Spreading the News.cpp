//It's all about what U BELIEVE
#include<algorithm>
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<vector>
#include<bitset>
#include<stack>
#include<queue>
#include<deque>
#include<cmath>
#include<map>
#include<set>
#define endl '\n'
#define PI acos(-1)
#define INF ~(1<<31)
#define pb push_back
#define pob pop_back
#define wtm while(t--)
#define wnm while(n--)
#define lsone(Z) (Z&-Z)
#define modulo 1000000007
#define gcu getchar_unlocked
#define allof(Z) Z.begin(),Z.end()
#define rallof(Z) Z.rbegin(),Z.rend()
#define mset(z,v) memset(z,v,sizeof(z))
#define lne if(line)puts("");else line =1
#define fo(s,y,z) for(int y=s ; y<(int)z ; y++)
#define readf freopen("/home/ebram96/Desktop/in" , "r" , stdin);
#define writef freopen("/home/ebram96/Desktop/out" , "w" , stdout);
using namespace std;
typedef unsigned long long ull;
typedef pair<ull,ull> pairull;
typedef pair<int,int> pairii;
typedef vector<string> vstr;
typedef deque<int> dqint;
typedef set<ull> setull;
typedef unsigned int ui;
typedef queue<int> qint;
typedef vector<int> vi;
typedef set<int> seti;
typedef long long ll;
//int dx[]={-1,0,1, 0,-1,1, 1,-1};
//int dy[]={ 0,1,0,-1, 1,1,-1,-1};
int e , n , t , f , v , s , day , boom , cnt[2501];
vi adj[2500];
bool done[2500];
struct State
{int u , level;};
inline void bfs()
{
	day = 1 , boom = 0;
	queue<State> q;
	q.push({s,1});
	mset(done,0);
	mset(cnt,0);
	done[s] = 1;
	int u , v , level , sz;
	while(!q.empty())
	{
		u = q.front().u , level = q.front().level;
		q.pop();
		sz = adj[u].size();
		fo(0,y,sz)
		{
			v = adj[u][y];
			if(done[v])continue;
			done[v] = 1;
			cnt[level]++;
			q.push({v,level+1});
		}
		if(cnt[level]>boom)
		{
			boom = cnt[level];
			day = level;
		}
	}
}
int main()
{
	//readf
	scanf("%d",&e);
	fo(0,y,e)
	{
		scanf("%d",&f);
		while(f--)
		{
			scanf("%d",&v);
			adj[y].pb(v);
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&s);
		if(adj[s].empty())puts("0");
		else
		{
			bfs();
			printf("%d %d\n",boom,day);
		}
	}
}

