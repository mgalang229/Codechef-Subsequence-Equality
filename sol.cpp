#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define ll long long
#define ar array

typedef tree<int, null_type, less<int>, rb_tree_tag,
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		string s;
		cin >> s;
		vector<int> v(26);
		for(char c : s)
			v[c-'a']++;
		bool ok=0;
		for(auto x : v)
			if(x>=2)
				ok=1;
		cout << (ok?"yes":"no") << "\n";
	}
}
