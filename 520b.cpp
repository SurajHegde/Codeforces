#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
  int ans=0;
  scanf("%d%d",&n,&m);
  queue<int> q;
  while(!q.empty())
  {

    q.push(n);
    int q1 = q.top();
    q.pop();
    int q2 = q1 * 2;
    int q3 = q1 - 1;
    if(q3 < 0)
      return 0;
    q.push(q2);
    q.push(q3);
  }
}
