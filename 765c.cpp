#include <iostream>
using namespace std;
int k,a,b;
int main()
{
    cin>>k>>a>>b;
    cout <<(((a<k&&b%k)||(b<k&&a%k))?-1:a/k+b/k);
    return 0;
}
