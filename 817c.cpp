#include <cstdio>
#include <algorithm>
using namespace std;
typedef long long ll;
ll s;
bool check(ll x){
	ll sum=x;
	while(x){
		sum-=x%10;
		x/=10;
	}
	return sum>=s;
}
int main(){
	ll n;
	scanf("%lld%lld",&n,&s);
	ll t=s;
	while(!check(++t));
	printf("%lld",max(n-t+1,0LL));
}
