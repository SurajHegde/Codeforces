#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[105],n;
  scanf("%d",&n);
  for(int i=0;i<n;++i)
    scanf("%d",&a[i]);
  sort(a,a+n);
  if(a[0] == a[(n/2) - 1] && a[(n/2)] == a[n-1] && a[0]!=a[n-1])
    cout<<"YES"<<endl<<a[0]<<""<<a[n-1];
  else
    cout<<"NO"<<endl;
  return 0;
}
