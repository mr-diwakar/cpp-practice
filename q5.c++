/*wap to input a number and print it in words*/
/* #include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int digit = 0 ;
    int sum = 0 ;
    int c= 0 ;
    while(n>0){
        digit=n%10 ;
        c++ ;
        sum=10*sum + digit ;
        n=n/10 ;

    }

    
    cout<<c<<endl ;
    cout<<sum<<endl ;
    
    int b = sum ;
    int a = 0 ;
    int r = 0  ;
    while(b>0){
        r=b%10 ;
        a++ ;
        b=b/10 ;
        
        
    }
    
    int d = 0 ;
    while(sum>0){
        d=sum%10 ;
        switch(d){
            case 0 :
            cout<<" zero " ;
            break ;
            case 1 :
            cout<<"one  " ;
            break ;
            case 2 :
            cout<<"two  " ;
            break ;
            case 3 :
            cout<<"three  " ;
            break ;
            case 4 :
            cout<<"four  " ;
            break ;
            case 5 :
            cout<<"five  " ;
            break ;
            case 6 :
            cout<<"six  " ;
            break ;
            case 7 :
            cout<<"seven " ;
            break ;
            case 8 :
            cout<<"eight  " ;
            break ;
            case 9 :
            cout<<"nine  " ;
            break ;
            
            default :
            break ;

        }
        sum=sum/10 ;

    }
    for(int i = 0 ; i<(c-a); i++){
        cout<<"zero  " ;
    }

} */
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int digit = 0 ;
    int sum = 0 ;
    int c= 0 ;
    while(n>0){
        digit=n%10 ;
        c++ ;
        sum=10*sum + digit ;
        n=n/10 ;

    }

    
    cout<<c<<endl ;
    cout<<sum<<endl ;
    
    
    
    int d = 0 ;
    for(int i = 0 ; i<(c); i++){
        d=sum%10 ;
        switch(d){
            case 0 :
            cout<<" zero " ;
            break ;
            case 1 :
            cout<<"one  " ;
            break ;
            case 2 :
            cout<<"two  " ;
            break ;
            case 3 :
            cout<<"three  " ;
            break ;
            case 4 :
            cout<<"four  " ;
            break ;
            case 5 :
            cout<<"five  " ;
            break ;
            case 6 :
            cout<<"six  " ;
            break ;
            case 7 :
            cout<<"seven " ;
            break ;
            case 8 :
            cout<<"eight  " ;
            break ;
            case 9 :
            cout<<"nine  " ;
            break ;
            
            default :
            break ;

        }
        sum=sum/10 ;

    }
}
    