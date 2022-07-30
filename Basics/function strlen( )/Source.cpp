
/*

     ÿÊ· «·”·”·Â strlen()   Õ”» «·œ«·Â

*/

#include <stdio.h>
#include <string.h>
int main()
{
    char a[20] = "Program";
    char b[20] = { 'P','r','o','g','r','a','m','\0' };

    // using the %zu format specifier to print size_t
    printf("Length of string a = %zu \n", strlen(a));  // 7
    printf("Length of string b = %zu \n", strlen(b));  // 7

    return 0;
}