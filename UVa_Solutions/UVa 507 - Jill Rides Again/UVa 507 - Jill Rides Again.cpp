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
int main()
{
	//readf
	int b , s , mx_here , tot_l , tot_r , here_l , mx_tot , inp;
	scanf("%d",&b);
	fo(1,r,b+1)
	{
		mx_here = mx_tot = tot_l = tot_r = here_l = 0;
		scanf("%d",&s);
		fo(1,y,s)
		{
			scanf("%d",&inp);
			mx_here += inp;
			if(mx_here<0)
			{
				mx_here = 0;
				here_l = y;
			}
			if(mx_here>mx_tot||(mx_here==mx_tot&&tot_r-tot_l<y-here_l))
			{
				mx_tot = mx_here;
				tot_r = y;
				tot_l = here_l;
			}
		}
		if(mx_tot)printf("The nicest part of route %d is between stops %d and %d\n",r,tot_l+1,tot_r+1);
		else printf("Route %d has no nice parts\n",r);
	}
}

