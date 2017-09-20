#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  int n,k,lmap[26],distinct=0;
  cin>>s>>k;
  n = s.size();
  if(k > n)
    cout<<"impossible"<<endl;
  else
  {
    for(int i=0;i<n;++i)
      lmap[s[i] - 'a'] = 1;
    for(int i=0;i<26;++i)
      distinct+=lmap[i];
    printf("%d",max(k-distinct,0));
  }
  return 0;

}
