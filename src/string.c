#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Prompt for user's name
    char name[100]; // 定义一个足够大的字符数组来存储用户输入的名字
    printf("Name: ");
    fgets(name, sizeof(name), stdin);

    // Remove the newline character if present
    size_t length = strlen(name);
    if (length > 0 && name[length - 1] == '\n') {
        name[length - 1] = '\0';
    }

    // Count number of characters up until '\0' (aka NUL)
    int n = 0;
    while (name[n] != '\0')
    {
        n++;
    }
    printf("%i\n", n);

    return 0;
}
