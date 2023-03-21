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
// Sắp xếp không giảm
/* 
Cho hai dãy số nguyên đã được sắp xếp không giảm a và b lần lượt có n và m phần tử. 
Hãy ghép chúng thành dãy c được bố trí theo thứ tự không giảm.
Giới hạn: n,m≤10^5 và 0≤ai,bi≤10^9
=> Tương tự giống với thuật toán merge_sort
Input:
5 6
1 3 6 8 10
2 6 7 12 14 15
=> Output : 1 2 3 6 6 7 8 10 12 14 15
*/
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , m;
	cin >> n >> m;
	int a[n];
	int b[m];
	vector<int> c;
	for(int i = 1 ; i <= n ; i++)
		cin >> a[i];
	for(int i = 1 ; i <= m ; i++)
		cin >> b[i];
	int i = 1 , j = 1;
	while(i <= n || j <= m){
		if(a[i] >= b[j]){
			c.push_back(b[j]);
			++j;
		}
		else{// a[i] < b[j]
			c.push_back(a[i]);
			++i;
		}
	}
	while(i <= n){
		c.push_back(a[i]);
		++i;
	}
	while(j <= m){
		c.push_back(b[j]);
		++j;
	}
	for(int x : c)
		cout << x << " ";
}
