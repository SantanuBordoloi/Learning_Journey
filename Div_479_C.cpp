#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	
	int n,k ; cin>>n>>k;
	vector<int>arr(n,0);

	for(int i=0;i<n;i++) cin>>arr[i];

	sort(arr.begin(),arr.end());

	if(k==0)
	{
		if(arr[0]==1)
		{
			cout<<-1<<endl;
		}else
		{
			cout<<1<<endl;
		}
	}else
	{
		if(arr[k-1]==arr[k])
		{
			cout<<-1<<endl;
		}else
		{
			cout<<arr[k-1]<<endl;
		}
	}
	
	
	return 0;
}
