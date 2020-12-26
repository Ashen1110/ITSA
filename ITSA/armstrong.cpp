//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6941

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a = n%10;
    int b = (n/10)%10;
    int c = n/100;
    if(a*a*a + b*b*b + c*c*c == n) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}