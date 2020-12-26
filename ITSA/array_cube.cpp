//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1291

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[10];
    long long int sum=0;
    for(int i=0; i<6; i++){
        cin>>a[i];
        sum += a[i]*a[i]*a[i];
    }
    cout<<sum<<endl;
    return 0;
}