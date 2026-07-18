#include<iostream>
using namespace std;

void Swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    
    for(int i=0;i<n;i++){
        int j=i;
        
        while(j >= 0 && arr[j] > arr[j+1] && i < n-1){
            Swap(arr[j] , arr[j+1]);
            j--;
        }
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    return 0;
}
