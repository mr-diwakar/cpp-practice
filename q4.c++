/* wap to find out wheter a given number is magic number or not*/
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int digit = 0 ;
    int sum = 0 ;
    int o = n ;
    while(n>0){
        digit=n%10 ;
        sum = sum+digit ;
        n=n/10 ;
    }
    cout<<sum<<"\n" ;
    int d= 0 ;
    int r = 0 ;
    int t = sum ;
    while(sum>0){
        d=sum%10 ;
        r=10*r + d ;
        sum=sum/10 ;
    }
    cout<<r<<endl ;
    if((r*t)==o){
        cout<<"this number is a magic num"<<endl ;

    }
    else{
        cout<<"this is not a magic num"<<endl ;
    }
}