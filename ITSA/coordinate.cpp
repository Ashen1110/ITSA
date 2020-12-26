//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6951

#include <bits/stdc++.h>

using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    if(x>0 && y>0) cout<<"1st Quadrant"<<endl;
    if(x<0 && y>0) cout<<"2nd Quadrant"<<endl;
    if(x<0 && y<0) cout<<"3rd Quadrant"<<endl;
    if(x>0 && y<0) cout<<"4th Quadrant"<<endl;
    if(x==0 && y==0) cout<<"Origin"<<endl;
    if(x==0 && y!=0) cout<<"y-axis"<<endl;
    if(x!=0 && y==0) cout<<"x-axis"<<endl;
    return 0;
}