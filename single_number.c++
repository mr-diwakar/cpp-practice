#include<bits/stdc++.h>
using namespace std ;
void single_number(int ar[] , int n ){
    int c = 0 ;
    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n ; j++){
            if(ar[i]==ar[j]){
                c++ ;
            }
        }
        if(c==1){
            cout<<ar[i]<<" " ;
        }
        c=0 ;

    }
}
int main(){
    int n ;
    cin>>n ;
    int ar[n] ;
    for(int i = 0 ; i<n ; i++){
        cin>>ar[i] ;
    }
    single_number(ar , n) ;

}