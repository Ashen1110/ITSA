//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=6891

#include <bits/stdc++.h>  
  
using namespace  std;  
  
int main(){  
    int start_hour, start_minute, end_hour, end_minute, ans = 0;  
    scanf("%d %d %d %d", &start_hour, &start_minute, &end_hour, &end_minute);  
    int start_mins = 60*start_hour + start_minute;  
    int end_mins = 60*end_hour + end_minute;  
    int times = end_mins - start_mins;  
    if(times>240){  
        ans = 120+160+((times-240)/30)*60;  
    }  
    else if(times>120){  
        ans = 120 + ((times-120)/30)*40;  
    }  
  
    else{  
        ans = (times/30)*30;  
    }  
  
    printf("%d\n", ans);  
    return 0;  
} 