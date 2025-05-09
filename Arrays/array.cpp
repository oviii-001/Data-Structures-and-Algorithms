#include <iostream>
using namespace std;
                    
int main() {
     
    int myArray[5] = {1, 2, 3, 4, 5};
    // cout << sizeof(myArray) << endl;
    int arrSize = sizeof(myArray) / sizeof(int);
    cout << "Size of the array: " << arrSize << endl;

   return 0;
}