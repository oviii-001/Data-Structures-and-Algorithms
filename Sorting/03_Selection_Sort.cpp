#include <iostream>
using namespace std;

//selection sort function
void selection_Sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        //swap the elements
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
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

    //calling the selection_Sort function
    selection_Sort(arr, n);

    //display the output (after sorted)
    cout << "After sorting:" << endl;
    for(int array : arr){
        cout << array << " ";
    }

    return 0;
}