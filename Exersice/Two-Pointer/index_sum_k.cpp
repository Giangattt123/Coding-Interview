#include <bits/stdc++.h>
using namespace std;
using ll = long long;
/*
Cho một mảng số nguyên a có n phần tử, mảng này đã được sắp xếp tăng dần. 
Hãy tìm hai vị trí khác nhau bất kỳ sao cho tổng của hai phần tử ở hai vị trí đó có giá trị là x
Giới hạn: 2≤n≤10^6 và 0≤ai,x≤10^9
Input : 
7 4
2 2 0 1 3 6 7
-> Output : 
*/
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n , k;
	cin >> n >> k;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a + n);
	// Two-pointer
	int i = 0 , j = n - 1;
	while(i < j){
		if(a[i] + a[j] == k){
			cout << i << " " << j;
			return 0;
		}
		if(a[i] + a[j] < k)
			++i;
		else 
			--j;
	}
}