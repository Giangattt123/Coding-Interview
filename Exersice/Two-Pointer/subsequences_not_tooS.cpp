#include <bits/stdc++.h>
using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define FORd(i, a, b) for (int i = (a) - 1; i >= (b); --i)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+1;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
// Đoạn con dài nhất liên tiếp không vượt quá S
/* 
Cho dãy số nguyên dương a có n phần tử. Hãy tìm độ dài đoạn con dài nhất trong dãy sao cho 
tổng các phần tử trong đoạn này không quá s. Dữ liệu đảm bảo các phần tử trong dãy a
đều có giá trị không quá s
Giới hạn: 1≤n≤10^6, 1≤ai≤10^9 và s≤10^18
Input : 
7 20
2 6 5 3 6 8 9
Ouput :
4
*/
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	long long s;
	cin >> n >> s;
	long long a[n + 5];
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
	int ans = 0, sum = 0;
	for(int l = 1, r = 1; r <= n; r++) {
	    sum += a[r];
	    while(sum > s) {
	      sum = sum - a[l];
	      l++;
    	}
    	ans = max(ans, r - l + 1);
	}
	cout << ans;
}
