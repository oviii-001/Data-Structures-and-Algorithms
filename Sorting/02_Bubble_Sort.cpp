#include <iostream>
using namespace std;

//bubble sort function
void bubble_Sort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                //swap the elements
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
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

    //calling the bubble_Sort function
    bubble_Sort(arr, n);

    //display the output (after sorted)
    cout << "After sorting:" << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}