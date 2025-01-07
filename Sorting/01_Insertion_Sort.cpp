#include <iostream>
using namespace std;

void insertion_Sort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array:" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //calling the insertion_Sort function
    insertion_Sort(arr, n);

    //display the output (after sorted)
    cout << "After sorting:" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}