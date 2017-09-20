#include<bits/stdc++.h>
using namespace std;
int a[100010],b,t,n;
int main()
{
  cin>>t;
  while(t--)
  {
    cin>>n;
    int dp[n+8];
    for(int i=0;i<n;++i)
      cin>>a[i];
    memset(dp,0,sizeof(dp));
    for(int i=n-1;i>=0;--i)
    {
      dp[i]=max(max(a[i] + dp[i+2],a[i] + a[i+1] + dp[i+4]),a[i] + a[i+1] + a[i+2] + dp[i+6]);
    }

  printf("%d",dp[0]);
}
  return 0;
}
