/*wap to input the sales of a salesman we have to find out the commision of sales the commision
 is 8 percent when the comission is below 5000 and the commision is 5 percent plus 250 when the
  sales is equal to or above 5000 */
#include<bits/stdc++.h>
using namespace std ;
int main(){
    float s ;
    cin>>s ;
    double c1 ;
    if(s<5000){
        c1=(s*8)/100 ;
        cout<<c1 ;
    }
    else{
        c1=((s*5)/100) + 250 ;
        cout<<c1 ;
    }
    
}