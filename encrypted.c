#include <stdio.h>

void Encrypt(char *c) {
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;  // it's very easy. we simply add next ascii value to exixting word of string array
        ptr++;
    }
    
}
int main() 
{
    char c[] = "How are you you?";
    Encrypt(c);
    printf("Your encrypted messege is %s\n", c);
    return 0;
}



// #include <stdio.h>

// void Decrypt(char *c) {
//     char *ptr = c;
//     while (*ptr != '\0')
//     {
//         *ptr = *ptr - 1; // To decrypt we simply substract selected number from encrypted number
//         ptr++;
//     }
    
// }
// int main() 
// {
//     char c[] = "Ipx!bsf!zpv!zpv@";
//     Decrypt(c);
//     printf("Your decrypted messege is %s\n", c);
//     return 0;
// }

