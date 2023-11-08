#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	vector<ll> a(n);
	for(int i = 0;i < n;i++) cin >> a[i];
	ll ans = 0;	
	for(int i = 0;i < n - 1;i++) {
		if(a[i + 1] < a[i]){
			ans += (a[i] - a[i + 1]);
			a[i + 1] = a[i];
		}
	}
	cout << ans << "\n";
}