#include<iostream>

using namespace std;

void removeDuplicate(int a []);

int arr [] = {1,  2, 4, 1,4, 5, 6};
int l = 7;


void removeDuplicate(int a []){
    
    for(int i = 0; i < l - 1; i++){
        for(int j = i + 1; j < l; j++){
            if(arr[i] == arr[j]){
                for(int k = j; k < l - 1; k++){
                    arr[k] = arr[k + 1];
                }
                l--;
            }
        }
    }
    
}
