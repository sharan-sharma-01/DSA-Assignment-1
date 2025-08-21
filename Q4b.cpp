#include<iostream>
using namespace std;

int l = 2, m = 2, n = 2;

void matrixMultiplication(int a[2][2], int b[2][2]) {
    int c[l][n] = {0};
    
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < n; j++) {
            c[i][j] = 0;
            for(int k = 0; k < m; k++) {
                c[i][j] = c[i][j] + (a[i][k] * b[k][j]);
            }
        }
    }
    
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < n; j++) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int a[2][2] = {{1, 2}, {3, 4}};
    int b[2][2] = {{5, 6}, {7, 8}};
    
    matrixMultiplication(a, b);
}
