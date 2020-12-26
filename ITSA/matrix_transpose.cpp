//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=30760  
#include <bits/stdc++.h>  
  
using namespace std;  
  
int main(){  
    int row,col;  
    cin>>row>>col;  
    int a[row][col], b[col][row];  
    for(int i=0; i<row; i++){  
        for(int j=0; j<col; j++){  
            cin>>a[i][j];  
            b[j][i] = a[i][j];  
        }  
    }  
    for(int i=0; i<col; i++){  
        for(int j=0; j<row-1; j++){  
            cout<<b[i][j]<<" ";  
        }
        cout<<b[i][row-1];
        cout<<endl;  
    }  
    return 0;  
} 