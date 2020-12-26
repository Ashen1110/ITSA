//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6879

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long int ans=1;
    cin>>n;
    if(n>31) cout<<"Value of more than 31"<<endl;
    else{
        for(int i=0; i<n; i++){
            ans*=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}