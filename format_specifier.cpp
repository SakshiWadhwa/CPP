#include<stdio.h>

int main()

{

    int arr[] = {2,4,7,9};

    int *p1 = arr;

    int *p2 = arr + 2;

    printf("%d\n",p2);
    printf("%d\n",p1);
    printf("%d\n",p2-p1);

}
