#include <iostream>
using namespace std;

//merge sort function
void merge_Sort(int arr[], int n){
    
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

    //calling the merge_Sort function
    merge_Sort(arr, n);

    //display the output (after sorted)
    cout << "After sorting:" << endl;
    for(int array : arr){
        cout << array << " ";
    }

    return 0;
}