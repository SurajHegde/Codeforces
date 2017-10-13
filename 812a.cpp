#include<bits/stdc++.h>
using namespace std;
bool cross[4],danger[4];
int main()
{
  int l,s,r,p;
  for(int i=0;i<4;++i)
  {
    cin>>l>>s>>r>>p;
    if(p)
      cross[i]=true;
    if(l+s+r)
      danger[i]=true;
    if(l)
      danger[(i+3)%4] = true;
    if(s)
      danger[(i+2)%4] = true;
    if(r)
      danger[(i+1)%4] = true;
  }
  bool failed =  false;
  for(int j=0;j<4;++j)
    if(cross[j] && danger[j])
      failed = true;
  if(!failed)
    printf("NO\n");
  else
    printf("YES\n");
return 0;
}
