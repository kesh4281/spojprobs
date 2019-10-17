#include<bits/stdc++.h>
#include<math.h>
#define rep(i,k,n) for(long long i=k;i<n;i++)
#define ll long long
#define MOD 1000000007
#define INF 0x3f3f3f3f3f3f
#define MIN(a,b) (a>b?b:a)
ll t,k,ar[5];
using namespace std;
ll func(ll,ll);
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>k>>ar[0]>>ar[1]>>ar[2];
		if(func(0,0)==1)
			printf("WIN");
		else
			printf("LOSE");
		printf("\n");
	}
}
ll func(ll idx,ll val)
{
	if(idx==3)
	{
		if(val==k)
			return 1;
		return INF;
	}
	return MIN(func(idx+1,val+ar[idx]),func(idx+1,val-ar[idx]));

}