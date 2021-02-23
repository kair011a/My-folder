//#pragma GCC optimize ("Ofast")
//#pragma GCC optimize ("unroll-loops")
//#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/rope>

#define pb push_back
#define ll long long
#define F first
#define S second
#define all(x) x.begin(), x.end(); 
#define bit __builtin_popcount
#define md (l + ((r - l) / 2))
#define lb lower_bound
#define ub upper_bound
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define file(s) if (fopen(s".in", "r")) freopen(s".in", "r", stdin), freopen(s".out", "w", stdout)

using namespace std;
//using namespace __gnu_pbds;
//using namespace __gnu_cxx;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
using vi = vector<int>;

//template<typename T> using ordered_set = tree <T, null_type, less <T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T1, typename T2> inline void chmin(T1 &a, T2 b) { if (a > b) a = b; }
template<typename T1, typename T2> inline void chmax(T1 &a, T2 b) { if (a < b) a = b; }

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l, int r) { return uniform_int_distribution<int> (l, r)(rng); }

const int dx[] = {1, -1, 0, 0, 1, 1, -1, -1};
const int dy[] = {0, 0, 1, -1, 1, -1, 1, -1};
const int mxN = 1e5+7, LOG = 25, mod = 1e9+7, inf = 1e9;
const ll linf = 1e18+7;

int main() {
  ios;
  
  return 0;
}
