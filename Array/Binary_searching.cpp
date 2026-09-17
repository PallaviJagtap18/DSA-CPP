#include<iostream> 
using namespace std; 

void  binary_search(int n, int arr[],  int key){ 
    int low = 0; 
    int high = n-1; 
 
    while(low <= high){ 
            int mid = (low + high ) / 2; 
    if (arr[mid] == key){ 
        cout << "found at position : "<< mid+1; 
            return; 
    } 
    else if (arr[mid] < key){ 
        low = mid+1; 
    } 
    else{ 
        high = mid -1; 
    } 
} 
 
} 
int main(){ 
    int arr[100], n, key; 
    cout << " enter the no of element : "; 
 
    cin >> n; 
 
    for(int i=0; i<n; i++){ 
 
        cout << "enter the no  "; 
        cin >> arr[i]; 
    } 
 
    cout << "enter the element to be search : "; 
    cin >> key; 
 
    binary_search( n,arr, key); 
    return 0; 
} 