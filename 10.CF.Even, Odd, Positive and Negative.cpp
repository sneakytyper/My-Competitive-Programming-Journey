//Problem Link: 

/**
*	Author: Sourav Sharma (@Sneaky_Typer)
*	Go for Gold.
**/

#include <bits/stdc++.h>
using namespace std;

//for input and output.
void init_code(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	freopen("error.txt", "w", stderr);
	#endif 
}

//declared few shorthands
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

#define mp make_pair
#define pb push_back
#define endl "\n"


int main(){
	init_code();

	//for more efficieny while taking cin and cout
	ios_base::sync_with_stdio(0); 
	cin.tie(NULL);
	cout.tie(NULL);

	//my code starts here.
	int N;
	cin >> N;
	int X[N];
	for(int i=0; i<N; i++){
		cin >> X[i];
		}

	int Even=0;
	for(int i=0; i<N; i++){
		if(X[i]%2==0){
			Even++;
		}
	}
	cout << "Even: " << Even << endl;

	int Odd=0;
	for(int i=0; i<N; i++){
		if(X[i]%2!=0){
		Odd++;
		}
	}
	cout << "Odd: " << Odd << endl;

	int Positive=0;
	for(int i=0; i<N; i++){
		if(X[i]>0){
		Positive++;
		}
	}
	cout << "Positive: " << Positive <<endl;

	int Negative=0;
	for(int i=0; i<N; i++){
		if(X[i]<0){
		Negative++;
		}
	}
	cout <<"Negative: " << Negative << endl;



		return 0;
}


