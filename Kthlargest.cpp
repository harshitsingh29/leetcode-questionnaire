#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define endl "\n"
#define r(n) ll n; cin>>n;
#define vl vector<ll>
#define all(x) (x).begin(),(x).end()
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fk(i,start,end) for(ll i=start;i<ll(end);i++)
typedef long long int ll;
const ll MOD = 1e9 + 7;
string A = "YES";
string B = "NO";

void solution()
{
    int n;
    cin >> n;
    int arr[n];
    fk(i, 0, n) {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    priority_queue<int>pq;
    for (int i = 0; i < n; i++) {
        pq.push(-arr[i]);
        if (pq.size() > k) {
            pq.pop();
        }
    }
    cout << -pq.top() << endl;
    return;
}

int32_t main()
{
    IOS;

#ifndef ONLINE_JUDGE
    freopen("input1.txt", "r", stdin);
    freopen("output1.txt", "w", stdout);
#endif

    ll t;
    cin >> t;
    while (t--)
    {
        solution();
    }
    return 0;
}