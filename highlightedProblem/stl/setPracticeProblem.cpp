#define ll long long
#define rep(i, n) for (int i = 0; i < n; i++)
#define ii pair<int, int>
#define vi vector<int>
#define pb push_back

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s.insert(x);
    }

    auto it = s.begin();
    if (++it != s.end())
    {
        cout << *it;
    }
    else
    {
        cout << "NO";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}