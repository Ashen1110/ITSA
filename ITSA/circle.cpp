//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30749  
 
#include <bits/stdc++.h>  
#define  d 0.000001   
using namespace std;  
  
int main(){  
    int x,y;  
    scanf("%d %d", &x, &y);  
    double dis = sqrt(x*x+y*y);  
    if(dis-100 > d) printf("outside\n");  
    else printf("inside\n");  
    return 0;  
}  