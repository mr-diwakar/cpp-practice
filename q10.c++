/*wap to input a 1d array and then print array in which no repition is allowed*/
/* #include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int ar[n] ;
    for(int i = 0 ; i<n ; i++){
        cin>>ar[i] ;
    }
    int c ;
    for(int i = 0 ; i<n ; i++){
        c=0 ;
        for(int j =0 ; j<i ; j++){
         if(ar[i]==ar[j]){
             
              c++ ;
              break ;

            }
            if(c==0){
            cout<<ar[i]<<" " ;
            }

            
            
        }
    }
} */
 #include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ar[n];
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    for(int i = 0; i < n; i++) {
        int c = 0;

        for(int j = 0; j < i; j++) {
            if(ar[i] == ar[j]) {
                c = 1;
                break;
                
            }
        }

        if(c == 0) {
            cout << ar[i] << " ";
        }
    }

    return 0;
}

