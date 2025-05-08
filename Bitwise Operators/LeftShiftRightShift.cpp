#include <iostream>
using namespace std;
                    
int main() {
         
    int a = 10, b = 2;

    //Left shift operator
    cout << "Left Shift Operator: " << (a << b) << endl; // 10 * 2^2 = 40

    //Right shift operator
    cout << "Right Shift Operator: " << (a >> b) << endl; // 10 / 2^2 = 2.5 = 2 (integer division)

   return 0;
}