//Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/I

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

	int A,B;
	cin >> A;
	cin >> B;
	int x = A%B==0;
	int y = B%A==0;
	
	if (A>=0 && B>=0 && A<=1e6 && B<=1e6){
		if ( x==0 || y==0 ){
			cout << "Multiples" << endl;
		}
		else{
			cout << "No Multiples" << endl;
		}	
	} 
	return 0;
}
