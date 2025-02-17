// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V

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

	int A;
	int B;
	char S;
	cin >> A >> S >> B;
	A >= -100 && A <= 100;
	B >= -100 && B <= 100;	

	

	if ( S == '<' || '>' || '='){
		if(S == '<')
		{
			if (A < B){
				cout << "Right\n";
			}
			else{
				cout << "Wrong\n";
			}
		}
		else{
			if (S == '>')
			{
				if (A > B){
					cout << "Right\n";
				}
				else{
					cout << "Wrong\n";
				}
			}
			else
			{
				if (S== '='){
				if (A == B){
					cout << "Right\n";
				}
				else{
					cout << "Wrong\n";
				}
			}
		}
			
		}
	}
	
	return 0;	
}
