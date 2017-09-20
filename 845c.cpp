#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n; cin>>n;
	int l[n],r[n],ans=0;
	for (int i=0; i<n; i++) cin>>l[i]>>r[i];
	sort(l,l+n); sort(r,r+n);
	for (int i=1,j=0; i<=n; i++)
	{
		for (; r[j]<l[i-1]; j++);
		ans=max(ans,i-j);
	}
	cout<<(ans>2? "NO": "YES");;
}
