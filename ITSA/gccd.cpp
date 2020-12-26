//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6903

#include <bits/stdc++.h>  
  
using namespace std;  
  
int gcd(int a, int b){  
    if(b==0) return a;  
    else return gcd(b, a%b);   
}  
  
int main(){  
    int a, b;  
    cin>>a>>b;  
    cout<<gcd(a,b)<<endl;  
    return 0;  
}  