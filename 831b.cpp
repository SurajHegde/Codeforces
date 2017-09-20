#include<bits/stdc++.h>
using namespace std;
char s1[1009],s2[1009],s3[1009],id[128];
int main()
{
  cin>>s1>>s2>>s3;
  for(int i=0;s1[i];++i)
  {
    id[s1[i]] = s2[i];
    id[s1[i] - 32] = s2[i] - 32;
  }
  for(int i=0;s3[i];++i)
  {
    printf("%c",id[s3[i]]?id[s3[i]]:s3[i]);
  }
}
