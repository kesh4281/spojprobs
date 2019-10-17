#include<bits/stdc++.h>
#include<math.h>
#define rep(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define MOD 1000000007LL
#define ROD 100000000ll
#define INF 12345678
#define MIN(a,b) (a>b?b:a)
using namespace std;
#define mp make_pair
#define  piii pair<pair<ll,ll>,pair<ll,ll>>
#define pii pair<ll,ll>
#define fi first
#define se second
int t,a,b,size_,dp[52][2][2][33][33][2],l,u,val;
char ar[60],br[60];
int main()
{
	scanf("%lld",&t);
	while(t--)
	{
		scanf(" %s %s",ar,br);
		//cin.getline(ar);
		//cin.getline(br);
		a=strlen(ar);
		b=strlen(br);

		for(int i=a-1;i>=0;i--)
			ar[i+(b-a)]=ar[i];
		for(int i=0;i<b-a;i++)
			ar[i]='0';
		size_=b;
		ll con=min(size_/3,16);
		for(int idx=size_;idx>=0;idx--)
		{
			rep(a,0,2*con+1)
			rep(b,0,2*con+1)
			rep(f,0,2)
			{
				rep(ut,0,2)
				rep(dt,0,2)
				{
					if(idx==size_)
					{
						dp[idx][ut][dt][a][b][f]=(a==con&&b==con&&f==1);
						continue;
					}
					l=(dt?ar[idx]-'0':0);
					u=(ut?br[idx]-'0':9);			
					val=0;
					for(int i=l;i<=u;i++)
					{
						if(a+(i==3)-(i==6)>=0&&a+(i==3)-(i==6)<=2*con&&b+(i==6)-(i==9)>=0&&b+(i==6)-(i==9)<=2*con)
						{
							val=(val+(ll)dp[idx+1][ut?(i==u):0][dt?(i==l):0][a+(i==3)-(i==6)][b+(i==6)-(i==9)][!f?(i==3||i==6||i==9):1]);
							if(val>MOD)
								val-=MOD;
						}	
					}
					dp[idx][ut][dt][a][b][f]=val;		
				}
			}

		}
		printf("%d\n",dp[0][1][1][con][con][0]);
	}
}
