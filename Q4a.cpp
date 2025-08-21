#include<iostream>


int arr [] = {1, 2, 3, 4, 5};
int l = 5;

void Reverse_arr(int arr []){
    
    for(int i = 0; i < l / 2  ;i++){
        int temp;
        temp = arr[i];
        arr[i] = arr[l - i];
        arr[l - i] = temp;
    }
    
}
