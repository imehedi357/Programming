#include <stdio.h>

// Declare a global structure since we need to pass 
// it to a function 
struct exam
{
    int roll;
    int marks;
    char name[20];
    char name2[20];
};

// array of structure object
struct exam obj[2];

 // declaration of the function

// function to print structure elements switch
// two different objects
void structfun(struct exam *obj)
{
    //Values using the object 1
    printf("\nName is : %s %s",obj[0].name, obj[0].name2);
    printf("\nRoll No. is : %d",obj[0].roll);
    printf("\nMarks are : %d",obj[0].marks);
    
    printf("\n");
    
    // Values using the object 2
    printf("\nName is : %s %s",obj[1].name, obj[1].name2);
    printf("\nRoll No. is : %d",obj[1].roll);
    printf("\nMarks are : %d",obj[1].marks);
}

// main function
int main()
{
    // assign values using the object 1
    //obj.obj;
    scanf("%d",&obj[0].marks);
    scanf("%d",&obj[0].roll);
    scanf("%s",obj[0].name);
    scanf("%s",obj[0].name2);
	
    // assign values using the object 1
   scanf("%d",&obj[1].marks);
    scanf("%d",&obj[1].roll);
    scanf("%s",obj[1].name);
    scanf("%s",obj[1].name2);
    
    // Passing structure to Function
    structfun(obj);
    puts("");
	
    return 0;
}
