#include<bits/stdc++.h>
using namespace std;
int n,k,cnt=0;
int main()
{
  int time=240;
  cin>>n>>k;
  time-=k;
  for(int i=1;i<=n;++i)
  {
   time-=5*i;
   if(time >= 0)
      cnt++;
  }
  printf("%d\n",cnt);
  return 0;
}
