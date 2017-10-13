#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a[3];
  for(int i=0;i<3;++i)
    scanf("%lld",&a[i]);
  sort(a,a+3);
  if(2 * (a[0] + a[1]) < a[2])
    a[2] = 2 * (a[0] + a[1]);
  long long int ans = (a[0] + a[1] + a[2]) / 3;
  printf("%lld",ans);
  return 0;
}
