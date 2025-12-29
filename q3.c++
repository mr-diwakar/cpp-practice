/*wap to find out the biggest of four numbers*/
/* #include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    vector<int> num(n) ;
    for(int i = 0 ; i<n ; i++){
        cin>>num[i] ;
    }
    sort(num.begin() , num.end()) ;
    cout<<num[n-1] ;

} 
    */
/* #include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int ar[n] ;
    int big ;
    int small ;
    for(int i = 0 ; i<n ; i++){
        cin>>ar[i] ;
    }
    big=ar[0] ;
        small=ar[0] ;
    for(int i = 0 ; i<n ; i++){
        
        if(big<ar[i]){
            big=ar[i] ;
            
        }
        if(small>ar[i]){
            small=ar[i] ;
        }
    }
    cout<<big<<endl<<small ;
}
    */
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int a , b, c, d ;
    cin>>a>>b>>c>>d ;
    int big = a;
    if(a>big){
        big=a ;
        
    }
    if(b>big){
        big=b ;
    }
    if(c>big){
        big=c ;
    }
    if(d>big){
        big=d ;
    }
    cout<<big ;
}
