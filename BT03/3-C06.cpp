#include <iostream>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;
    int a[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = 0;
        }
    }
    int b[m*n];
    for(int i = 0; i < m*n; i++){
        b[i] = i+1;
    }
    int biendem = 0;
    int row = 0;
    int col = 0;
    int x = m;
    int y = n;
    while(row < x && col < y){
        //Hang1
        for(int i = col; i < y; i++){
            a[row][i] = b[biendem];
            biendem++;
        }
        row++;
        for(int i = row; i < x ;i++){
            a[i][y-1] = b[biendem];
            biendem++;
        }
        y--;
        if(row < x){
            for(int i = y-1; i >= cot; i--){
                a[x-1][i] = b[biendem];
                biendem++;
            }
            x--;
        }
        if(col < y){
            for(int i = x-1; i>= row; i--){
                a[i][col] = b[biendem];
                biendem++;
            }
            col++;
        }
    }
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
