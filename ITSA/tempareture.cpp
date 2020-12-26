//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6882

#include <bits/stdc++.h>

using namespace std;

int main(){
    double n;
    cin>>n;
    double f = n*1.8+32;
    f = round(f*10)/10;
    cout<<fixed<<setprecision(1)<<f<<endl;
    return 0;
    
}