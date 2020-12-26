//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6855

#include <bits/stdc++.h>

using namespace std;

int main(){
    int top, down, height;
    scanf("%d %d %d", &top, &down, &height);
    double area = (top+down)*height;
    area/=2;
    printf("Trapezoid area:%.1f\n", area);
    return 0;
}