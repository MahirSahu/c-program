// character data type stores alphabets or symbols
// char data type is stored in single inverted ''
// to print %c is used
// it is always single digit
#include <stdio.h>
int main()
{
    char ch = 'x';
    printf("%c\n",ch);

    // ascii values, special values of characters ( in this case instead of using %c we use %d)
    //  A  - '65' and a - '97' and so on , 65 is the ascii value of A and 97 is the ascii value of a
    // similarly different characters have their different ascii values
    char x = '$';
    printf("%d",x);

    return 0;
}