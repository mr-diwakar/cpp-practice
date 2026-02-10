#include<iostream>
using namespace std ;
int main(){
    int n ;
    int a ;

    cin>>n ;
    int d ;
    int sc=0 ;
    while(n>0){
        d=n%10 ;
        sc=sc+(d*d*d) ;
        n=n/10 ;
         
    }
    cout<<sc ;
}