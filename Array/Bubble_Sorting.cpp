#include <iostream> 
using namespace std; 
void bubble_sort(int arr[], int n){ 
    for(int i=0; i<n-1; i++){ 
       bool swap = false; 
        for(int j=0; j<n-1-i; j++){ 
            if(arr[j] > arr[j+1]){ 
                int temp = arr[j]; 
                arr[j] = arr[j+1]; 
                arr[j+1] = temp; 
                swap = true; 
                // swap(arr[j], arr[j+1]);   // direct swaping 
            } 
        }
            if (swap == false){ 
                break; 
            
            }
    } 
    cout << "Array is sorted!!" << endl; 
} 
void display(int arr[], int n){ 
    for(int i=0; i<n; i++){ 
        cout << arr[i] << " "; 
    } 
} 
int main(){ 
    int arr[100], n; 
    cout << "enter the no of element : "; 
    cin >> n; 
    for(int i=0; i<n; i++){ 
        cout << "enter the element : "; 
        cin >> arr[i]; 
    } 
    bubble_sort(arr, n); 
    display(arr, n); 
    return 0; 
} 