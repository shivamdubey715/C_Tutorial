#include <stdio.h>
#include <string.h>

struct Driver
{
    char name[50];
    char dlNo[50];
    char route[50];
    int kms;
};
int main()
{
    struct Driver d1,d2,d3;
    printf("Enter the details of the driver No 1\n");
    printf("Enter the name of the first driver\n");
    scanf("%s", &d1.name);

    printf("Enter the dlNo of the first driver\n");
    scanf("%s", &d1.dlNo);

    printf("Enter the route of the first driver\n");
    scanf("%s", &d1.route);

    printf("Enter the kms of the first driver\n");
    scanf("%s", &d1.kms);

    printf("Enter the details of the driver No 2\n");
    printf("Enter the name of the second driver\n");
    scanf("%s", &d2.name);

    printf("Enter the dlNo of the second driver\n");
    scanf("%s", &d2.dlNo);

    printf("Enter the route of the second driver\n");
    scanf("%s", &d2.route);

    printf("Enter the kms of the second driver\n");
    scanf("%s", &d2.kms);
    
    
    printf("Enter the details of the driver No 3\n");
    printf("Enter the name of the third driver\n");
    scanf("%s", &d3.name);

    printf("Enter the dlNo of the third driver\n");
    scanf("%s", &d3.dlNo);

    printf("Enter the route of the third driver\n");
    scanf("%s", &d3.route);

    printf("Enter the kms of the third driver\n");
    scanf("%s", &d3.kms);


    printf("*******Printing Information of these drivers*******\n");

    printf("For driver no 1: \n Name is %s", d1.name);
    printf("DL number is %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("kms is %s\n", d1.kms);

    printf("For driver no 2: \n Name is %s", d2.name);
    printf("DL number is %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("kms is %s\n", d2.kms);

    printf("For driver no 3: \n Name is %s", d3.name);
    printf("DL number is %s\n", &d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("kms is %s\n", d3.kms);


    
    return 0;
}
