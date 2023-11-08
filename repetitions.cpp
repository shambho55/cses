#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	string s;
	cin >> s;
	ll count = 1,ans = 0;
	for(int i = 0;i < s.length();i++){
		if(s[i] == s[i + 1]){
			count++;
		}
		else{
			ans = max(ans,count);
			count = 1;
		}
	}
	cout << ans << "\n";
}