#include<bits/stdc++.h>
using namespace std;
string source,dest;
int hdist,vdist;
char h,v;
int main()
{
  cin>>source>>dest;
  if(source[0] > dest[0])
  {
    hdist = source[0] - dest[0];
    h = 'L';
  }
  else
  {
    hdist = dest[0] - source[0];
    h = 'R';
  }
  if(source[1] > dest[1])
  {
    vdist = source[1] - dest[1];
    v = 'D';
  }
  else
  {
    vdist = dest[1] - source[1];
    v = 'U';
  }
  int moves = max(hdist,vdist);
  printf("%d\n",moves);
  while(moves--)
  {
    if(hdist--)
      cout<<h;
    if(vdist--)
      cout<<v;
    cout<<endl;
  }
  return 0;
}
