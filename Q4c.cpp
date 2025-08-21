#include<iostream>
using namespace std;

int l = 3, m = 3;

int a[l][m] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

void transposeOfMatrix(int a[l][m]) {
    for(int i = 0; i < l; i++) {
        for(int j = i+1; j < m; j++) {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
}

void printMatrix(int a[l][m]) {
    for(int i = 0; i < l; i++) {
        for(int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    cout << "Original Matrix:\n";
    printMatrix(a);

    transposeOfMatrix(a);

    cout << "Transposed Matrix:\n";
    printMatrix(a);
}
