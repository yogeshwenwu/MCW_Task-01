#include "vectorAddition.h"
#include <immintrin.h>

void vAdd(const float arr[], const float brr[], float res[], int size) {
    int i=0;

    for (i = 0; i <= size - 8; i += 8) {
        __m256 vec_a = _mm256_load_ps(&arr[i]);  
        __m256 vec_b = _mm256_load_ps(&brr[i]);  
        __m256 vec_c = _mm256_add_ps(vec_a, vec_b);  
        _mm256_store_ps(&res[i], vec_c);  
    }
    
    // for(; i < size; i++){
    //     res[i] = arr[i] + brr[i];
    // }
}