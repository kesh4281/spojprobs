#include<bits/stdc++.h>
#include<math.h>
#define rep(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define MOD 1000000007
#define INF 0x3f3f3f3f3f3f3fLL
using namespace std;
ll ar[20005],scr[20005];
int main()
{
	ll t,C,m,r,k,repeat,p,c;
	cin>>t;
	while(t--)
	{
		cin>>C>>m>>r>>k;
		repeat=k+m-1;
		while(r--)
		{
			cin>>p>>c;
			if((c%repeat>=1)&&(c%repeat<=k))
				{
					ar[p]++;
					ar[p+m]++;
				}	
			else
			{
				ll inc=((c%repeat)+repeat-k)%repeat;
				if(p+inc>m)
				ar[(p+inc)%m]++;
				else
				ar[p+inc]++;
				
				if(p+inc<=m)	
					ar[p+inc+m]++;
				else
					ar[p+inc]++;
			}
			// rep(i,0,20)
			// if(ar[i]!=0)
			// 	cout<<i<<" "<<ar[i]<<"\n";
		}

		ll tot=0,ppl=0,per=0;
		rep(i,1,m+1)
		{
			ppl+=ar[i];
			tot+=ar[i]*m;
			scr[i]=tot;
			tot-=ppl;
		}
		rep(i,m+1,2*m+1)
		{
			per+=ar[i];
			scr[i]=per*m+tot;
			tot-=ppl;
		}
		ll max=-1,min_id=INF;
		rep(i,1,2*m+1)
		{
			if(scr[i]>max)
			{
				max=scr[i];
				ll temp=i;
				if(temp>m)
					temp-=m;
				min_id=temp;
			}
			if(scr[i]==max)
			{
				ll temp=i;
				if(temp>m)
					temp-=m;
				if(temp<min_id)
					min_id=temp;
			}	
		}
		cout<<min_id<<" "<<max<<"\n";
	}
}
void clean_ar()
{
	rep(i,0,20005)
	{
		scr[i]=0;
		ar[i]=0;
	}	
}