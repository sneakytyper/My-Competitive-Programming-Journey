//Problem Link: https://codeforces.com/problemset/problem/4/A

#include<iostream>
using namespace std;
 
int main()
{
    int w;
    cin >> w;
    
    if(w%2==0 && w!=2  && w >= 1 && w <=100){
      cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }     
    return 0;
 
}
