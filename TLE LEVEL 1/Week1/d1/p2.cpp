//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

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

	int A;
	int B;

	cin >> A >> B;
	
	if(A>=1 && A <= 1000000 && B >=1 && B <= 1000000){
		if(A%B == 0 || B%A == 0){
		cout << "Multiples\n";
		}
		else{
		cout << "No Multiples\n";
		}

	}

	
	return 0;
}
