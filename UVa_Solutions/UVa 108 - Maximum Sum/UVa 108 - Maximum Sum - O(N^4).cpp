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
int a[1000][1000];
int main()
{
    //readf
    int n , mx , sub;
    while(scanf("%d",&n)==1)
    {
        mx = -INF;
        fo(0,x,n)fo(0,y,n)
        {
            scanf("%d",&a[x][y]);
            if(x)a[x][y]+=a[x-1][y];
            if(y)a[x][y]+=a[x][y-1];
            if(x&&y)a[x][y]-=a[x-1][y-1];
            mx = max(mx , a[x][y]);
        }
        fo(0,x,n)fo(0,y,n)
            fo(x,i,n)fo(y,j,n)
            {
                sub = a[i][j];
                if(x)sub-=a[x-1][j];
                if(y)sub-=a[i][y-1];
                if(x&&y)sub+=a[x-1][y-1];
                mx = max(mx , sub);
            }
        printf("%d\n",mx);
    }
}

