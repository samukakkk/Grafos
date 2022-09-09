#include <stdio.h>
#include <stdlib.h>
#include "omp.h"

static long num_steps = 100000;
double step;

int main(){

    //omp_set_num_threads(x);

    int i;
    double x, pi, sum = 0.0, a, b;

    step = 1.0/(double) num_steps;

    a = omp_get_wtime();

    for(i=0; i<num_steps; i++){

        x = (i+0.5)*step;
        sum = sum +4.0/(1.0+x*x);

    }

    pi = step * sum;    

    b = omp_get_wtime();

    printf("%lf", pi);
    printf("\n %lf", b-a);

    printf("\n");

    return 0;

}