#include <iostream> 
using namespace std; 
 
// linear search function
void linearsearch(int n, int arr[], int key){ 
 
    for(int i=0; i<n; i++){ 
 
        if (arr[i] == key){ 
 
            cout << "Key found at position : "<< i+1; 
            return ; 
        } 
    } 
    cout << " Element not found";    
} 

int main(){ 
    int arr[100], n, key; 
 
    cout << " Enter the no of element : "; 
    cin >> n; 
 
    for(int i=0; i<n; i++){ 
 
        cout << "Enter the no "; 
        cin >> arr[i]; 
    } 
 
    cout << "Enter the element to be search : "; 
    cin >> key; 
 
    linearsearch(n, arr, key); 
 
    return 0; 
}