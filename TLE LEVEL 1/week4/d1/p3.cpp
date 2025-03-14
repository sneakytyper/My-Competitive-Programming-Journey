//Problem Link: https://codeforces.com/problemset/problem/271/A

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
    int y;
    cin >> y;

    int x = y+1;
    int count = 0;
    while(count!=1){
            int d1 = x%10;
            int d4 = x/1000;
            int d3 = (x%1000)/100;
            int d2 = (x%100)/10;


            int arr[4] = {d1, d2, d3, d4};
            for(int i=0; i<4; i++){
                for(int j = i+1; j<4; j++){
                    if(arr[i]==arr[j]){
                        count = 0;
                        break;
                    }
                    else{
                        for(int k = j+1; k<4; k++){
                        if(arr[j]==arr[k]){
                        count = 0;
                        break;
                        }
                        else{
                            for(int l=k+1; l<4; l++){
                                if(arr[k]==arr[l]){
                                    count = 0;
                                    break;
                                }
                                else{
                                    count = 1;
                                }
                            }
                        }
                    }
                    }
                }
            }

            if(count == 0 ){
                x++;
            }
            else{
                cout << x;
            }
    }
  
    return 0;
}    
