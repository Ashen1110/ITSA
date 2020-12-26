//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6894

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int day = n/86400;
    int hour = (n-day*86400)/3600;
    int min = (n - day*86400 - hour*3600)/60;
    int sec = n - day*86400 - hour*3600 - min*60;
    cout<<day<<" days\n"<<hour<<" hours\n"<<min<<" minutes\n"<<sec<<" seconds"<<endl;
    return 0;
  
}