#include <iostream>
#include <chrono>
#include "scalarAddition.h"
// #include "vectorAddition.h"
using namespace std;

int main(){
    // Initialization
    const int SIZE = 10000;  
    float a[SIZE];            
    float b[SIZE];            
    float c[SIZE];            

    // Populate arrays a and b
    for (int x = 0; x < SIZE; x++) {
        a[x] = x + 2; 
        b[x] = x + 1; 
    }

    // Measuring the time taken for Scalar Addition
    auto start_scalar = chrono::high_resolution_clock::now();
    sAdd(a, b, c, SIZE);
    auto end_scalar = chrono::high_resolution_clock::now();

    auto scalar_duration = chrono::duration_cast<chrono::nanoseconds>(end_scalar - start_scalar).count();
    cout << "Scalar addition took: " << scalar_duration << " nanoseconds" << endl;

    return 0;

}
