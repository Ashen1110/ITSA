//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6953

#include <bits/stdc++.h>

using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int k[3]={a, b, c};
    sort(k,k+3);
    if(k[0]+k[1]>k[2]) cout<<"fit"<<endl;
    else cout<<"unfit"<<endl;
    return 0;
}