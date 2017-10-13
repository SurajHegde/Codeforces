#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,x1,x2;
  scanf("%d",&n);
  if(n%2)
  {
    x1 = n/2;
    x2 = n/2 + 1;
    printf("%d %d",x1,x2);
  }
  else
  {
    if(n%4==0)
    {
      x1 = n/2 - 1;
      x2 = n/2 + 1;
      printf("%d %d",x1,x2);
    }
    else
    {
      x1 = n/2 - 2;
      x2 = n/2 + 2;
      printf("%d %d",x1,x2);
    }
  }
  return 0;
}
