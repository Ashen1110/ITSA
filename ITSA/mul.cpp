//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6915

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    long long int ans=1;
    cin>>n;
    if(n==0) cout<<"1"<<endl;
    else{
        for(int i=1; i<=n; i++){
            ans*=i;
        }
    }    
    cout<<ans<<endl;
    return 0;
}