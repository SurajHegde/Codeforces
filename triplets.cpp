#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a[3],b[3],alice=0,bob=0;
  for(int i=0;i<2;++i)
    cin>>a[i];
  for(int i=0;i<2;++i)
    cin>>b[i];

  for(int i=0;i<2;++i)
  {
    if(a[i] > b[i])
      alice++;
    else if(a[i] == b[i])
      continue;
    else if(a[i] < b[i])
      bob++;
  }
  printf("%d %d",alice,bob);
  return 0;
}
