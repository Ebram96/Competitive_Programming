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
//int dx[]={-1,-1,0,1,1, 1, 0,-1};
//int dy[]={ 0, 1,1,1,0,-1,-1,-1};
//int dx[]={-1,0,1, 0};
//int dy[]={ 0,1,0,-1};
int a[11] = {10000,5000,2000,1000,500,200,100,50,20,10,5};
ll mars[11][30001];
ll rec(int i,int val)
{
	if(i==11||val<0)return 0;
	if(!val)return 1;
	if(~mars[i][val])return mars[i][val];
	return mars[i][val]=rec(i+1,val)+rec(i,val-a[i]);
}
int main()
{
	//readf
	float inp;
	int val;
	memset(mars,-1,sizeof(mars));
	while(scanf("%f",&inp))
	{
		val = round(100*inp);
		if(!val)break;
		printf("%6.2f%17lld\n",inp,rec(0,val));
	}
}

