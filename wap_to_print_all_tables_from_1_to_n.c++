// wap to 
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int m ;
    cin>>m ;
    for(int i = m ; i<=n ; i++){
        for(int j = 1 ; j<=10 ; j++){
            cout<<i<<"*"<<j<<"="<<i*j<<endl ;
        }
    }
}