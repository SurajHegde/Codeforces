#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  string s;
  cin>>n>>s;
  if(s[0]=='S' && s[n-1]=='F')
    printf("YES");
  else
    printf("NO");
  return 0;
}
