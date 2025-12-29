/*wap to input a 2d matrix print  the matrix and then all num of a matrix excep diagonal */
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    int m ;
    cin>>m>>n ;
    int ar[m][n] ;
    
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cin>>ar[i][j] ;
        }
    }
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<ar[i][j]<<" " ;
        }
        cout<<endl ;
    }
    for(int i = 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            if(i!=j){
                cout<<ar[i][j]<<" " ;

            }
            cout<<"\n";
        }
    }
    
    
}
