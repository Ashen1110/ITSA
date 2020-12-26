//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6947

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if( n%400==0 or ( n%4==0 and n%100!=0 ) ) cout << "Bissextile Year" << endl;
    else cout << "Common Year" << endl;
    return 0;
}