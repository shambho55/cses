#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n;
	cin >> n;
	vector<ll> a(n);
	ll ans = (n * (n + 1)) / 2;	
	for(ll i = 0;i < n;i++){
		cin >> a[i];
		ans -= a[i];
	}
	cout << ans << "\n";
}