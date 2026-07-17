#include<iostream>
using namespace std;

void Swap(int &a, int &b){ // function  to swap two elements.
    int temp = a;
    a = b;
    b = temp;
}


int main(){
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n-1;i++){ // selection sort algo.
        int minIndex = i;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        Swap(arr[i], arr[minIndex]);
    }

    cout << "The Sorted array is: ";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
