//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

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
	int A,B,C;
	cin >> A >> B >> C;

	A >= -1e5 && A <= 1e5;
	B >= -1e5 && B <= 1e5;
	C >= -1e5 && C <= 1e5;

	if (A > B){
		if (A>C){
			if(B>C){
				cout << C << " " << A;
			}
			else{
				cout << B << " " << A;
			}
		}
		else {
			cout << B << " " << C;
		}
	}
	else{
		if(B > C){
			if(C > A){
				cout << A << " " << B;
			}
			else{
				cout << C << " " << B;
			}
		}
		else{
			cout << A << " " << C;
		}
	}



	return 0;
}
