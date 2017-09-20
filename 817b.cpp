#include <bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin>>n;
	long long a[n];
	for(long long i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	long long count = 0;
	for(long long i=0;i<n;i++) if(a[i]==a[2]) count++;
	if(a[0]==a[2]) cout<<(count-2)*(count-1)*(count)/6<<endl;
	else if(a[1]==a[2]) cout<<(count-1)*(count)/2<<endl;
	else cout<<count<<endl;
}
