#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void fun(int n, int* square, double* sq_root){

    *square = n*n;
    *sq_root = sqrt(n);

}

int main()
{
    int n = 100;
    int sq;
    dounle sq_root;
    fun(n, &sq, &sq_root);

    printf("%d %f\n", sq, sq_root);
    return 0;
}
