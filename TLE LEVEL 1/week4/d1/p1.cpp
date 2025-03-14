//Problem Link: https://atcoder.jp/contests/abc305/tasks/abc305_a
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    
    int x;
    x = N%5;
    
    if(x>=3){
    cout << N-x+5 << '\n';
    }
    else{
    cout << N-x << '\n';
    }
}
