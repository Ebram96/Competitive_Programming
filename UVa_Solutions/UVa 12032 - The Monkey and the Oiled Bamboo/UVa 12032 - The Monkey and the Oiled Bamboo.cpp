//It's all about what U BELIEVE
#include<iostream>
#include<vector>
#include<algorithm>
#include<bitset>
#include<stdio.h>
#include<map>
#include<stack>
#include<queue>
#include<deque>
#include<cstring>
#include<cmath>
#include<set>
#define INF ~(1<<31)
#define endl '\n'
#define fo(s,y,z) for(int y=s ; y<(int)z ; y++)
#define pb push_back
#define pob pop_back
#define gcu getchar_unlocked
#define allof(Z) Z.begin(),Z.end()
#define modulo 1000000007
#define wtm while(t--)
#define wnm while(n--)
#define lne if(line)puts("");else line =1
#define lsone(Z) (Z&-Z)
#define readf freopen("/home/ebram96/Desktop/in" , "r" , stdin);
#define writef freopen("/home/ebram96/Desktop/out" , "w" , stdout);
using namespace std;
typedef vector<int> vi;
typedef vector<string> vstr;
typedef unsigned int ui;
typedef unsigned long long ull;
typedef long long ll;
typedef pair<int,int> pairii ;
typedef pair<ull,ull> pairull;
typedef set<int> seti;
typedef set<ull> setull;
typedef queue<int> qint;
typedef deque<int> dqint;
//int dx[]={-1,-1,0,1,1, 1, 0,-1};
//int dy[]={ 0, 1,1,1,0,-1,-1,-1};
//int dx[]={-1,0,1, 0};
//int dy[]={ 0,1,0,-1};
int t , n , rung[100000] , c;
inline bool climb(int k)
{
	int prev = 0;
	fo(0,y,n)
	{
		if(k<rung[y]-prev)return 0;
		k-=(rung[y]-prev==k);
		prev = rung[y];
	}
	return 1;
}
int main()
{
	//readf
	scanf("%d",&t);
	wtm
	{
		scanf("%d",&n);
		fo(0,y,n)scanf("%d",&rung[y]);
		int lo = 0 , hi = 1e7 , mid , res;
		while(lo<=hi)
		{
			mid = (lo+hi)>>1;
			if(climb(mid))hi = mid-1 , res = mid;
			else lo = mid+1;
		}
		printf("Case %d: %d\n",++c,res);
	}
}

