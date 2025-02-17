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

	long long N;
	long long M;

	cin >> N;
	cin >> M;

	int n1 = N % 10;
	
	int n2 = M % 10;

	if(n1 >= 0 && n1 <= 1e18 && n2 >= 0 && n2 <= 1e18){
		cout << n1 + n2 << "\n";
	}

	
	return 0;
}