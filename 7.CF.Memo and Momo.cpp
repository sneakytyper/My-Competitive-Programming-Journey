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
	long long a, b, k;

	a >= 1 && a <= 1e18;
	b >= 1 && b <= 1e18;
	k >= 1 && k <= 1e18;

	cin >> a >> b >> k;

	int x = a%k;
	int y = b%k;

	if (x==0 || y==0)
	{
		if (x==0 && y==0){
			cout << "Both\n";
		}
		else{
			if(x==0){
			cout << "Memo\n";
			}
			else{
			cout << "Momo\n";
			}
			
		}
	}
	else {
		cout << "No One\n";
	}

	return 0;
}
