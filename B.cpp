#include<iostream>
#include<algorithm>
using namespace std;

void solve(){
	int n;
    cin >> n;
    int a[n + 1];
    for(int i = 1;i <= n;i ++)
    	cin >> a[i];
    int right = 1, left = n;
    sort(a + 1,a + n + 1);
    while(right < left){
    	if(left - 1 == right){
        	a[right] = max(a[right],a[left]);
        	break;
    	}
        a[right] = max(a[right],a[right + 1]);
    	right ++;
    	a[left] = min(a[left], a[left + 1]);
    	left --;
   	}
	cout << a[right] << '\n';
}
signed main()
{
    ios::sync_with_stdio(false), cin.tie(0);
    int t;
    cin >> t;
  	while(t--) solve();
}
//khanhduy2311
