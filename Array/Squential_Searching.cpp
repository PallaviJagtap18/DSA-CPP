#include <iostream> 
using namespace std; 

void sequential(int key, int n, int arr[]){ 

    int temp = arr[n-1]; 
    arr[n-1] = key; 
    int i=0; 
    
    while(arr[i] != key){ 
        i++; 
    } 
 
    arr[n-1] = temp; 
    if( i < n-1 || key == arr[n-1]){ 
        cout << "Found at position "<< i+1; 
    } 
} 
int main(){ 
    int arr[100], n, key; 
    cout << "Enter the no of element : "; 
 
    cin >> n; 
 
    for(int i=0; i<n; i++){ 
 
        cout << "Enter the no  "; 
        cin >> arr[i]; 
    } 
 
    cout << "Enter the element to be search : "; 
    cin >> key; 
 
    sequential(key, n, arr); 
    return 0; 
}