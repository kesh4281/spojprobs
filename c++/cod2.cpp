#include<bits/stdc++.h>
#include<math.h>
#define rep(i,k,n) for(long long i=k;i<n;i++)
#define ll long long
#define MOD 1000000001234567LL
#define INF 0x3f3f3f3f3f3f
using namespace std;
ll n;
void fastscan()
{
	ll i;
	n=0;
	i=getchar();
	while(!(i>=48&&i<=57))
		i=getchar();
	while(i>=48&&i<=57)
	{
		n*=10;
		n+=(i-48);
		i=getchar();
	}
}
ll power(ll );
int main()
{
	ll t,ans=0;
	cin>>t;
	cout<<MOD;
	while(t--)
	{
		ans=0;
		fastscan();
		//printf("%lld ",n);
		printf("%lld\n",(n%MOD)*power(n-1)%MOD)%MOD;

	}
}
ll power(ll n)
{
	if(n==0)
		return 1;
	if(n%2==1)
		return (2*power(n/2)*power(n/2))%MOD;
	else
		return (power(n/2)*power(n/2))%MOD;
}