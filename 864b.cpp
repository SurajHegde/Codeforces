#include <bits/stdc++.h>

using namespace std;

int n, ans;
string s;
set <char> st;

int main(){
	cin >> n >> s;
	for (int i = 0; i < n; ++i)
		if (s[i] >= 97) {
			st.insert(s[i]);
			ans = max(ans, (int)st.size());
		}
		else
			st.clear();
	cout << ans << '\n';
	return 0;
}
