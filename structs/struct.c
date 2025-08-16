// here we will be defining the struc structure
// im defining a struc student which contains the name, roll no ,age 
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
// struct student{
//     int age,rollno;
//     char name[];
// }; // you have defined the struct data type here , its struct defination

// struct student s1;
// struct student s[10]; // so i can declare an array too

typedef struct student{ // <- you can also omit the 'student'
    int age,roll;    // name of the struct
    char name[10];
} student; // so this defines a data type student 

int main ( void){
student rs; // now dont need to write the struct student to define data type
// type def allows you to create your own data type 

// // to acess the memeber of the struct variable we use the data type 
rs.age = 15;
rs.roll = 21;
strcpy(rs.name,"ram");


student arsh;
student *pointArsh = &arsh; // i declare a pointer for the struct data type

// to acess the value from the pointer
// and writing at the arsh via pointer
pointArsh->age= 21;
pointArsh->roll=12;
strcpy(pointArsh->name,"arsh");
printf("size is :%ld",sizeof(student));
printf("name of struct is : %s, age is :%d and roll is :%d",arsh.name,arsh.age,arsh.roll);













return 0;
}
// you can also use the nested structures and therefore have to use
//. operator multiple time to acess the value of the data type 
