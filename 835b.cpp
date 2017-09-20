#include<bits/stdc++.h>
using namespace std;
int k,cnt[10],cur=0,ans=0;
string n;
int main()
{
  cin>>k>>n;
  for(int i=0;i<(int) n.size();++i)
  {
    int digit = n[i] - '0';
    cnt[digit]++;
    cur+=digit;
  }
  for(int i=0;i<9;++i)
  {
    for(int j=0;j<cnt[i];++j)
    {
      if(cur < k)
      {
        ans++;
        cur+=9-i;
      }
    }
  }
  printf("%d",ans);
  return 0;
}
