// #include <stdio.h>
// #include <string.h>

// struct Employee
// {
//     int ID;
//     float salary;
//     char name[10];
// };

// int main()
// {
//     struct Employee E1;
//     E1.ID = 56726789;
//     E1.salary = 75758.5757;
//     strcpy(E1.name, "Shivam");
//     printf("%d\n", E1.ID);
//     printf("%f\n", E1.salary);
//     printf("%s\n", E1.name);

//     return 0;
// }


// #include <stdio.h>
// #include <string.h>

// struct Employee
// {
//     int ID;
//     float salary;
//     char name[10];
// };

// int main()
// {
//     struct Employee  E1 = {56726789, 75758.5757, "Shivam"};
//     printf("%d\n", E1.ID);
//     printf("%f\n", E1.salary);
//     printf("%s\n", E1.name);

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// struct Employee
// {
//     int ID;
//     float salary;
//     char name[10];
// };

// int main()
// {
//     struct Employee E1;
//     struct Employee *ptr;
//     ptr = &E1;
//     (*ptr).ID = 56726789;
//     ptr->salary = 75758.5757;  // we can also use ptr->salary in place of (*ptr).salary just to make code easy
//     strcpy(ptr->name, "Shivam");
//     printf("%d\n", E1.ID);
//     printf("%f\n", E1.salary);
//     printf("%s\n", E1.name);

//     return 0;
// }





#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    int ID;
    float salary;
    char name[10];
}emp;

int main()
{
    emp E1;
    emp *ptr;
    ptr = &E1;
    (*ptr).ID = 56726789;
    ptr->salary = 75758.5757;  // we can also use ptr->salary in place of (*ptr).salary just to make code easy
    strcpy(ptr->name, "Shivam");
    printf("%d\n", E1.ID);
    printf("%f\n", E1.salary);
    printf("%s\n", E1.name);

    return 0;
}
