#include <stdio.h>
#include <string.h>

int main ()
{
int line = 0;

while (line < 50000)

{
    printf("请继续努力，你的代码行数%d\n",line);

    line++;
}

if (line > 50000)

{
    printf("不错");
}

    return 0;
}