//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6858

#include <bits/stdc++.h>

using namespace std;

int main(){
    int down, height;
    scanf("%d %d", &down, &height);
    double area = down*height;
    area/=2;
    printf("%.1f\n", area);
    return 0;
}