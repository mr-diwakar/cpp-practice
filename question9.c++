/*wap to input a 2d array and also input a and b exchange row a with row b*/
/* #include<bits/stdc++.h>
using namespace std ;
int main(){
    int m ;
    int n ;
    cin>>m ;
    cin>>n ;
    int ar[m][n] ;
    for(int i= 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cin>>ar[i][j] ;
            
            
        }
        
    }
    int a ;
    int b ;
    cin>>a ;
    cin>>b ;
    int arr[m][n] ;
    for(int i= 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            arr[i][j]=ar[i][j] ;
            
            
        }
    }
    for(int j = 0 ; j<n ; j++){
        arr[b][j]=ar[a][j] ;
        arr[a][j]=ar[b][j] ;
        
    }
    for(int i= 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<arr[i][j] ;
            
        }
        cout<<"\n" ;
    }
    
    

}
    */
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int m ;
    int n ;
    cin>>m ;
    cin>>n ;
    int ar[m][n] ;
    for(int i= 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cin>>ar[i][j] ;
            
            
        }
        
    }
    int a ;
    int b ;
    cin>>a ;
    cin>>b ;
    int t ;
    for(int i = 0 ; i<m ; i++){
        t=ar[i][a] ;
        ar[i][a]=ar[i][b] ;
        ar[i][b]=t ;
        
    }
    for(int i= 0 ; i<m ; i++){
        for(int j = 0 ; j<n ; j++){
            cout<<ar[i][j]<<" " ;
            
            
        }
        cout<<"\n" ;
        
    }
}
    
        