// author: FyodorT555

// ================================================================

// libs

#include <algorithm>
#include <climits>
#include <cmath>
#include <deque>
#include <iostream>
#include <map>
#include <queue>
#include <set>
// #include <string>
#include <unordered_map>
// #include <unordered_set>
#include <vector>

using namespace std;

// ================================================================

// macros

#define int long long
#define str string 
#define vi vector<int>
#define pii pair<int, int>
#define el "\n"

#define fr front
#define bc back
#define fi first
#define se second
#define pp pop
#define pub push_back
#define puf push_front
#define pob pop_back
#define pof pop_front

#define forf(i, a, b) for(int i = a; i < b; i++) 
#define forb(i, a, b) for(int i = a; i > b; i--) 
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define size(x) (int)x.size()

// ================================================================

// constants

const int MOD = 1e9 + 7;
const double PI = 3.1415926535;

// const int INF = LLONG_MAX;
const int INF = 1e18;

// ================================================================

// functions

int bp(int a, int s)
{
    if(s == 0) return 1;
    if(s == 1) return a;

    if(s % 2 == 0)
    {
        int n = bp(a, (int)(s / 2));
        return n * n;
    }
    else
    {
        int n = bp(a, (int)((s - 1) / 2));
        return n * n * a;
    }
}

// ================================================================

// structs

// ================================================================

// void rd() {}
// void wr() {}

void lg(str s)
{
    cout << "[log] " << s << el;
}

// ================================================================

void solve()
{
    int a, b;
    cin >> a >> b;

    cout << a + b;
}

// ================================================================

signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;

    forf(w, 0, t)
    {
        solve();
    }

    return 0;
}
