#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int a ;
    a=n ;
    int s =0 ;
    int d ;
    while(n>0){
        d=n%10 ;
        s=10*s+d ;
        n=n/10 ;
    }
    if(s=a){
        cout<<"this number is pallindrome " ;
    }
    else
    cout<<"this number is not a pallindrome" ;
}