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
#define endl '\n'
#define fo(s , y , z) for(int y = s ; y < (int)z ; y++)
#define pb push_back
#define pob pop_back
#define gcu getchar_unlocked
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
	for(int a = 6 ; a < 201 ; a++)
		for(int b = 2 ; b*b*b <= a*a*a ; b++)
			for(int c = b ; c*c*c+b*b*b <= a*a*a ; c++)
				for(int d = c ; d*d*d+c*c*c+b*b*b <= a*a*a ; d++)
					if(d*d*d+c*c*c+b*b*b==a*a*a)
						printf("Cube = %d, Triple = (%d,%d,%d)\n",a,b,c,d);
}

