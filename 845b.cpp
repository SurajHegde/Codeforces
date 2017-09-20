#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int a[6], b[6], x, z = 3, c;
    cin >> s;

   for (int i = 0; i < 6; i++)
	a[i] = s[i]-'0';

   for (int i = 0; i < 1000000; i++)
   {
   	x = i;
   	c = 0;

   	for (int j = 5; j >= 0; j--)
   	{
	   b[j] = x%10;
	   x /= 10;
	   c += (b[j] != a[j]);
   	}

   	if (b[0]+b[1]+b[2] == b[3]+b[4]+b[5])
   		z = min(z, c);
   }

   cout << z;
 }
