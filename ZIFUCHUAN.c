#include <stdio.h>
#include <string.h>

int main ()

{
char arr[] ="abc";
char arr1[] ={'a','b','c'};
char arr2[] = {'a','b','c','\0'};

printf("%s\n",arr);
printf("%s\n",arr1);
printf("%s\n",arr2);

printf("%d\n",sizeof(arr));
printf("%d\n",sizeof(arr1));
printf("%d\n",sizeof(arr2));

int len = strlen(arr);
printf("%d\n",len);
int len1 = strlen(arr);
printf("%d\n",len1);
int len2 = strlen(arr);
printf("%d\n",len2);

return 0;

}
