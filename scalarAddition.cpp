#include "scalarAddition.h"

void sAdd(const float arr[], const float brr[], float res[], int size) {
    for (int i = 0; i < size; i++) {
        res[i] = arr[i] + brr[i];  
    }
}
