#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[50];
    printf("Enter your firstName:");
    scanf("%s",&firstName);
    printf("The length of the string is %lu",strlen(firstName));

    return 0;
}
