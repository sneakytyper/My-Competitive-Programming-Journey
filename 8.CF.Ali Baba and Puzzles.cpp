//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include <bits/stdc++.h>
using namespace std;

//for input and output.
void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif 
}

int main(){
	init_code();

	//for more efficieny while taking cin and cout
	ios_base::sync_with_stdio(0); 
	cin.tie(0);

	//my code starts here
	long long a, b, c, d;
	-1e9<= a && a >= 1e9;
	-1e9<= b && b >= 1e9;
	-1e9<= c && c >= 1e9;
	-1e18<= d && d >= 1e18;

	cin >> a >> b >> c >> d;
	long long x, y, z , m, n , o;
	x = a + b - c;
	y = a + b * c;
	z = a - b + c;
	m = a - b * c;
	n = a * b + c;
	o = a * b - c;

	if(x==d || y==d || z==d || m==d || n==d || o==d){
		cout << "YES" << "\n";
	}
	else{
		cout << "NO" << "\n";
	}


	return 0;
}
