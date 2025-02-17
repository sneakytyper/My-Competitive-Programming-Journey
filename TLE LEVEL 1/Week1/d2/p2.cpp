//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/L

#include <iostream>
using namespace std;

void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif 
}

int main(){
	init_code();

	ios_base::sync_with_stdio(0); // for more efficieny while taking cin and cout
	cin.tie(0);

	string F1, S1;
	string F2, S2;

	cin >> F1 >> S1;
	cin >> F2 >> S2;

	if (S1 == S2){
		cout << "ARE Brothers" << "\n";
	}
	else{
		cout << "NOT" << "\n";
	}
	return 0;
}
