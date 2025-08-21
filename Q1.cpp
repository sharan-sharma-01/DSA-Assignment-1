#include<iostream>
using namespace std;


int main(){
    
    int arr [] = {1, 2, 3, 4};
    int l = 4;
    
    int a;

    cout << "Enter choice of your menu";
    cin >> a;
    
    int y = 0;
    int x = 0;
    
    switch(a){
            
        case 1 : {
            
            cout << "creating array"<<endl;
            int x;
            cout << "enter array size";
            cin >> x;
            int *arr = new int[x];
            cout << "array of size " << x <<" created successfully"<<endl;
            break;
            
        }
            
        case 2 : {  // linear search
            
            cout << "using previously declared array to search element";
            int element;
            cin >> element;
            for(int i = 0; i < l; i++){
                if(arr[i] == element){
                    cout << "element found at: "<<i<<"th place";
                }
                
            }
            break;
        }
            
        case 3 : { // insert element
            
            int element;
            int index;
            cout << "enter element";
            cin >> element;
            
            cout << "enter index ar which to insert";
            cin >> index;
            
            int *arr_1 = new int [l + 1];
            
            for(int i = 0; i < l + 1; i++){
                if(i < index){
                    arr_1[i] = arr[i];
                }
                if(i == index){
                    arr_1[i] = element;
                }
                if(i > index){
                    arr_1[i + 1] = arr[i];
                }
            }
            cout << "element inserted successfully";
            x = 1;
            
            
        }
            
        case 4 : { // delete element
            int index;
            
            cout << "enter index to delete element";
            cin >> index;
            
            for(int i = index + 1; i < l - 1; i++){
                arr[i - 1] = arr[i];
            }
            
            cout << "element delted successfully";
            y = 1;
            
        }
            
        case 5 : {
            
            if(y){
                for(int i = 0; i < l - 1; i++){
                    cout << arr[i] << " "<<endl;
                }
            }
            else if (x){
                for(int i = 0; i < l + 1; i++){
                    cout << arr[i] << " "<<endl;
                }
            }
            else{
                for(int i = 0; i < l ;i++){
                    cout << arr[i] << " "<<endl;
                }
            }
            
        }
            
            
    }
    
}
