#include <iostream>
#include <memory>
using namespace std;

int main() {

    // Declared a pointer to store
    // the address of the allocated memory
    int *nptr;
    
    // Allocate and initialize array of
    // integer with 5 elements
    nptr = new int[5]{1, 2, 3, 4, 5};

    // Print array
    for (int i = 0; i < 5; i++)
        cout << nptr[i] << " ";


 int *ptr = NULL;

    // Request memory for integer variable
    // using new operator
    ptr = new int(10);
    cout << "Value of *p: " << *ptr << endl;

    // Free the value once it is used
    delete ptr;
    delete nptr;
    return 0;
}