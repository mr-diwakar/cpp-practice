/*wap to input a onr d array and rotate this array by d numbers*/
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int ar[n] ;
    for(int i = 0 ; i<n ; i++){
        cin>>ar[i] ;
    }
    int d ;
    cin>>d ;
    int a[n] ;
    for(int i = d ; i<n ; i++){
        for(int j = 0 ; j<(n-d) ; j++){
            a[j]=ar[i] ;

        }
    }
    for(int i = 0 ; i<d ; i++){
        for(int j = (n-d) ; j<n ; j++){
            a[j]=ar[i] ;
        }
    }
    for(int i = 0 ; i<n ; i++){
        cout<<a[i] ;
    }
}