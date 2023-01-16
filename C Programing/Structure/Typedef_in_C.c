
/* Typedef it behaves similarly as we define the alias for the commands.

    Syntax : typedef <existing_name> <alias_name>  


*/

// Ex: 
#include<stdio.h>
// #define int unit;
int main() {
    typedef unsigned int unit;
    unit i, j;
    i = 10;
    j = 20;
    printf ("Gia tri cua i = %d\n", i);
    printf ("Gia tri cua j = %d", j);
    return 0;
}



//! ////////////////////////////////////////////////
//* Cách 1: 
#include <stdio.h>
  
// add is the short name for address
void compare(int a, int b, int* add_great, int* add_small)
{
    if (a > b) {
  
        // a is stored in the address pointed
        // by the pointer variable *add_great
        *add_great = a;
        *add_small = b;
    }
    else {
        *add_great = b;
        *add_small = a;
    }
}
  
// Driver code
int main()
{
    int great, small, x, y;
  
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);
  
    // The last two arguments are passed
    // by giving addresses of memory locations
    compare(x, y, &great, &small);
    printf("\nThe greater number is %d and the"
           "smaller number is %d",
           great, small);
  
    return 0;
}


//! ///////////////////////////////////////////////////
//* Cách 2:

//! /////////////////////////////////////////
// Modified program using structures
#include <stdio.h>
struct greaterSmaller {
    int greater, smaller;
};
  
typedef struct greaterSmaller Struct;
  
Struct findGreaterSmaller(int a, int b)
{
    Struct s;
    if (a > b) {
        s.greater = a;
        s.smaller = b;
    }
    else {
        s.greater = b;
        s.smaller = a;
    }
  
    return s;
}
  
// Driver code
int main()
{
    int x, y;
    Struct result;
  
    printf("Enter two numbers: \n");
    scanf("%d%d", &x, &y);
  
    // The last two arguments are passed
    // by giving addresses of memory locations
    result = findGreaterSmaller(x, y);
    printf("\nThe greater number is %d and the"
           "smaller number is %d",
           result.greater, result.smaller);
  
    return 0;
}




//! ///////////////////////////////////////
#include<stdio.h>
#include<string.h>

struct employee {
    int id;
    char name[20];
    float salary;
} e1,e2; // declaring e1 and e2 variables for structure 

int main() {
    // first employee information
    e1.id = 101;
    strcpy (e1.name, "Hoang Anh Tien"); // copy
    e1.salary = 550000;

    // second employee information
    e2.id = 102;
    strcpy (e2.name, "Tien Anh Hoang");
    e2.salary = 126000;

    // printing first employee information  
    printf( "employee 1 id : %d\n", e1.id);    
    printf( "employee 1 name : %s\n", e1.name);    
    printf( "employee 1 salary : %f\n", e1.salary); 

    printf ("\n");

    // printing second employee information  
    printf( "employee 2 id : %d\n", e2.id);     
    printf( "employee 2 name : %s\n", e2.name);    
    printf( "employee 2 salary : %f\n", e2.salary);

    
    return 0;
}


