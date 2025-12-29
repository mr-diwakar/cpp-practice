#include<bits/stdc++.h>
/*wap to input three numbers print yes if 2 are same and third is different otherwise print no*/
using namespace std ;
int main(){
    int a , b , c ;
    cin>>a>>b>>c ;
    if(a==b || b==c || c==a){
        if(a != b || b != c  || c != a){
            cout<<"yes " ;
        }
        else{
            cout<<"no" ;
        }
    }
    
}