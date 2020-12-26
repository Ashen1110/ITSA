//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6931

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int k = abs(b-a);
    cout<<(a+b)*(k+1)/2<<endl;
    return 0;
}