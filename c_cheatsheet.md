# c cheatsheet 
```c
// this is a single line comment 

/* this is 
multi-line comment */

// c have three kind of data variables , which is used to store the vlaue 
int a ;                 // integer data type generally 4 bytes
long a ; long long a ; // used for larger value can be 8 or 16 bytes
short a ;             // size is of 2 bytes 
float b; // a real value 
char a ; //its of 1 byte size and is the smallest data variable 

unsigned int a vs signed int a; 
//there is the tradeoff of the range of the value stored,
//unsigned stores the postive numbers starts from 0 and signed stores the negative numbers in 2's complement 
//form and the msb 1 bit is used for denoting the sign of the numeber 0 for positive and 1 for the negative 

// and unsigned and signed are valid for the all the data types even for the chars 
unsigned short float a ; 
```

## pointers 
```c
int* a; // this defines the pointer, which is it can store the memory location
int b=10;
a =&b; // & is read as ampersand and b when compiled get subsituted with the memory location when we define the data , the name 'b' doesnt hold any significance to the compiler but is for our readablity 
printf("%p",a); // so you use  the %p format specifier for the pointers
//%d -> integer and %f -> float and %c -> char 
printf("%d",*a); // this is called the dereferncing the pointer it will give you the value of 10, the value of 
// the variable it points to
// keep in mind: always use the respective data type pointer , like for the int you use the int* type pointer
// and for char you use the char*, the idea here is this that if you use the char pointer which is of 1 byte for the 4 byter int variable ,there is going to be mismatch issue. so better play safe!!

//Size mismatch can cause the pointer to access more or fewer bytes than expected, leading to incorrect or garbage data.

//pointer data types 
char*
int*
long long int*
float*
double*
unsigned char*
unsigned int*
unsigned long long int*
unsigned float*
unsigned double*

```