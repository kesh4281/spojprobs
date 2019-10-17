#include<bits/stdc++.h>
#include<math.h>
#define rep(i,k,n) for(int i=k;i<n;i++)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
	ll t,n,ar[100005];
	cin>>t;
	while(t--)
	{
		ll min=0x3f3f3f3f,max=-1;
		cin>>n;
		rep(i,0,n)
		{
			cin>>ar[i];
			if(ar[i]>max)
				max=ar[i];
			if(ar[i]<min)
				min=ar[i];
		}
		if(n==1)
		{
			cout<<"-1\n";
			continue;
		}
		else if(min==max)
		{
			if(min==0)
				cout<<n<<"\n";
			else if(max==n-1)
				cout<<"0\n";
			else
				cout<<"-1\n";
			continue;
		}
		else
		{
			ll min_cnt=0,max_cnt=0;
			rep(i,0,n)
			{
				if(ar[i]==min)
					min_cnt++;
				if(ar[i]==max)
					max_cnt++;
			}	
			//cout<<min_cnt<<" "<<max<<" "<<max_cnt<<" "<<min;
			if(min_cnt==max&&max_cnt==n-min-1)
				cout<<n-max<<"\n";
			else
				cout<<"-1\n";
		}


	}
}