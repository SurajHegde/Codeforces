#include<bits/stdc++.h>
using namespace std;
#define INF 1000000000
#define inRange(x,y) (x>=0 && x<8 && y>=0 && y<8)
#define calcCost(a,b,c,d) (a*c) + (b*d)
using namespace std;
int board[8][8];

int findPath(int a,int b,int c,int d)
{
  queue<int> q;
  q.push(a);
  q.push(b);
  while(!q.empty()){
    int x = q.front();
    q.pop();
    int y = q.front();
    q.pop();
    int a[] = {-1,-2,-2,-1,1,2,2,1},b[] = {-2,-1,1,2,2,1,-1,-2};
    for(int i=0;i<8;++i)
    {
      int x1 = x + a[i];
      int y1 = y + b[i];
      if(inRange(x1,y1) && board[x1][y1] > board[x][y] + calcCost(x,y,x1,y1))
      {
        board[x1][y1] = board[x][y] + calcCost(x,y,x1,y1);
        q.push(x1);
        q.push(y1);
      }
    }
  }
  return ((board[c][d]==INF)?-1:board[c][d]);
}
int main()
{
  int a,b,c,d;
  while(scanf("%d%d%d%d",&a,&b,&c,&d)){
    for(int i=0;i<8;++i)
      for(int j=0;j<8;++j)
        board[i][j]=INF;
    board[a][b] = 0;
    printf("%d\n",findPath(a,b,c,d));
  }
  return 0;
}
