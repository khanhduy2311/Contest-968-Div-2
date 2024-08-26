#include<iostream>
#include<string>
using namespace std;
void solve(){
    string s;
    int n;
    cin >> n;
    cin >> s;
    cout << ((s[0] == s[s.size()-1]) ? "NO" : "YES") << '\n';
}
signed main()
{
    ios_base::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
 	while(t--) solve();
}
//khanhduy2311
