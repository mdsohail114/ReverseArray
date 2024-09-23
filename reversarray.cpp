#include<iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start=0;  
    int end=size-1;  

    while (start<end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int size;
    cout<<"Enter the number of elements in the array:";
    cin>>size;

    int arr[size];  
    cout<<"Enter the elements of the array:";
    for(int i=0;i<size;i++) {
        cin>>arr[i];  
    }

    reverseArray(arr, size);
    
    cout<<"Reversed Array:";
    for(int i=0;i<size;i++) {
        cout<<arr[i]<<"";
    }
    cout<<endl;

    return 0;
}
