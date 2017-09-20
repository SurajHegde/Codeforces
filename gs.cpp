#include<iostream>
using namespace std;
int main()
{
  int p,q,r,s;
  p=q=r=s=20;;
  p+=q-=r*=s/=20;
  cout<<p<<q<<r<<s;
  return 0;
}
