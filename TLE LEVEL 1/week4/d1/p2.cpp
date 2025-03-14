// Problem link: https://atcoder.jp/contests/abc263/tasks/abc263_a

/**
*   Author: Sourav Sharma (@Sneaky_Typer)
*   Go for Gold.
**/
 
#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
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
    int A, B, C, D, E;
    cin >> A >> B >> C >> D >> E;

    int arr[5] = {A, B, C, D, E};
    
    int s3 =0;
    int x;
    
    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
        
        if(arr[i]==arr[j]){
            for(int k=j+1; k<5; k++){
                if(arr[j]==arr[k]){
                    s3 = 1;
                    x = arr[i];
                }
            }
        }
        else{
            continue;
        }
        }
    }

    int s2 =0;
    if(s3==1){
        for(int i=0; i<5; i++){
            for(int j=i+1; j<5; j++){
                if(arr[i]==arr[j] && arr[i]!=x){
                    s2 = 1;
                }
            }
        }
    }
    

    if(s3==1 && s2==1){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
  
    return 0;
}    
