//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=674
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a[105];
    int t=0;
    int k;
    while(cin>>k){
        a[t]=k;
        t++;
    }
    for(int i=t-1; i>0; i--){
        cout<<a[i]<<" ";
    }
    cout<<a[0];
    cout<<endl;
    return 0;
}