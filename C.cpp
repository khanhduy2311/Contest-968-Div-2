#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 2e5;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    vector <int> cc(27, 0);
    for (auto x : s) {
        cc[x - 'a']++;
    }

    int pr = -1;
    for (int i = 0; i < n; i++) {
        int id = 26;
        for (int j = 0; j < 26; j++) {
            if (j == pr)
                continue;

            if (cc[j] > cc[id]) {
                id = j;
            }
        }

        if (cc[id] == 0) {
            cout << char(pr + 'a');
        } else {
            cc[id]--;
            cout << char(id + 'a');
            pr = id;
        } 
    }


    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;

    while (t--) {
        solve();
        //cout << solve() << '\n';
    }

    return 0;
}
