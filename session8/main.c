#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    int *ptr;

    printf("enter numb");
    scanf("%d",&x);

    ptr = (int*)calloc(x , sizeof(int));

     if ( ptr == NULL){
        printf("exceeds memory limits");
        exit(0);
     }

     else {

    for (int i=0 ; i<x ; i++){

       ptr[i] = i*5;

        printf("%d\n",ptr[i]);
    }}

   ptr = realloc(ptr,3);

    for (int j=0 ; j<x ; j++){

       ptr[j] = j*3;

        printf("%d\n",ptr[j]);
    }




    return 0;
}
