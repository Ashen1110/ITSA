//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6937
#include <iostream>

using namespace std;

int main()
{
    long n;
    int a=1;
    cin>>n;
    for(long i=2; i<n; i++)
    {
        if (n%i==0)
        {
            a=0;
            break;
        }
    }
    if(a==0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    return 0;
}