#include <stdio.h>

int main()
{
    char input;
    float kmsTomiles = 0.621371;
    float inchesTofoot = 0.0833333;
    float cmsToinches = 0.393701;
    float poundTokgs = 0.453592;
    float inchesTometers = 0.0254;
    float first, second;  

    while (1)
    {
        printf("Enter the input character q to quit\n   1. kms to miles\n   2. inches to foot\n   3. cms to inches\n   4. pound to kgs\n   5. inches to meters\n");
        scanf("%c", &input);

        switch (input)
        {
        case 'q':
            printf("Quitting the program...\n");
            goto end;
            break;

        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * kmsTomiles;
            printf("%f kms is equal to %f miles\n", first, second);
            break;

        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesTofoot;
            printf("%f inches is equal to %f foot\n", first, second);
            break;

        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * cmsToinches;
            printf("%f cms is equal to %f inches\n");
            break;

        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * poundTokgs;
            printf("%f pound is equal to %f kgs\n");
            break;

        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f", &first);
            second = first * inchesTometers;
            printf("%f inches is equal to %f meters\n");
            break;

        default:
            break;
        }
    }
    end:
    return 0;
}
