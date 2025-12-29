/*wap to input all num from x to y find out all the num from x to y who are divisible by a and b*/
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int x , y , a  , b ;
    cin>>x>>y>>a>>b ;
    for(int i = x ; i<=y ; i++){
        if(i%a==0 && i%b==0){
            cout<<i<<"\n" ;
        }
    }

}