#include <stdlib.h>

#define MAXIMUM_FRAME_NUM 10

double* generate_frame_vector(int length){
    // This function will stop generating frame once the number of frames it generates reaches MAXIMUM_FRAME_NUM
    static int frame_cnt = 0;
    if(frame_cnt >= MAXIMUM_FRAME_NUM){ 
        return NULL;
    }

    static int seed = 1; 
    srand(seed++);
    double *frame_vector = (double*)malloc(length * sizeof(double));
    int i;
    for (i = 0; i <  length; i++){
        frame_vector[i] = rand() / (double)RAND_MAX;
    }

    frame_cnt++;

    return frame_vector;
}