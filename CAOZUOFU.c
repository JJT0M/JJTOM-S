#include <stdio.h>

int main ()

{
    int a = 0;
    a += 3;
    printf("%d\n",a);

    

    int b = 0;
    printf("%d\n",!b);

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",sizeof(arr));
    printf("%d\n",sizeof(arr[0]));
    printf("%d\n",sizeof(arr) / sizeof(arr[0]));

    return 0;

}