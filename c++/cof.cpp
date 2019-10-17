#include<bits/stdc++.h>
#include<math.h>
#define rep(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define MOD 1000000007
#define ROD 1000000009
#define INF 12345678900
#define MIN(a,b) (a>b?b:a)
using namespace std;
#include<bits/stdc++.h>
#include<math.h>
#define rep(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define mp make_pair
#define  pii pair <ll,ll>
#define fi first
#define se second
ll n,q,ar[300005];
vector <ll> vr[21];
ll func(ll);
int main()
{
	cin>>n>>q;
	rep(i,0,n)
	{
		cin>>ar[i];
		if(ar[i])
			func(i);
		
}
ll func(ll num)
{
	rep(i,0,21)
	if(num&(1<<i))
		vr[i].push_back(num);
}