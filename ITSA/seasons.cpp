//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30754  
#include <bits/stdc++.h>  
  
using namespace std;  
  
int main(){  
    int a;  
    scanf("%d", &a);  
    if(a==3 || a==4 || a==5) printf("Spring\n");  
    else if(a==6 || a==7 || a==8) printf("Summer\n");  
    else if(a==9 || a==10 || a==11) printf("Autumn\n");  
    else printf("Winter\n");  
    return 0;  
}  