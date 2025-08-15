# Memory management in C
- so we can dynamically allocate and free the memory in C, which is advantage of the C to let you control the memory and give you the control over the user of memory.

### malloc function and free
```c
int main(void){
    // void * memalloc(size);
    int *p; 
    p = (int *) malloc(sizeof(int)); // this allocate the memory space of the size of the int
    // always free the memory allocated before reusing the same, otherwise the data gets lost
    // you cant acess it then
    // void free(void * ptr);
    free(p);
    char * buffer;
    int i;
    buffer = (char *)malloc(i+1);
    //1 extra space for the null
    free(buffer);
    return 0;

}



```
---
```c
printf("Enter an integer value (0 to end): ");
scanf("%d%*c", &input);
```

- so this %*c clears up any thing like the \n ,\t after the input entered, and discard it so the input buffer gets free otherwise those \n and whatever might get into the input buffer and can cause issue for the next input.

---
### Calloc function : 
- This function allocates memory for an array of num elements of size bytes each and initialise all elements to be 0 and return pointer if success for the allocated memory block otherwise returns NULL.
```c
 void * calloc(size_t num, size_t size);

 int *pdata;

 pdata  = (int *)calloc(i,sizeof(int));

 //where i is the number of elements
```
---

### Realloc function:
- this function is used to reallocate a memory space which  was allocated before. if sufficient space is avaialble to expand the memory, then the same pointer is returned. if not, then data copied to new memory block and previous one gets freed and new pointer is returned. if the allocation fails then, null is returned.

```c
//syntax void * realloc(void* ptr , size_t size);
int *numbers=NULL;
int *moreNumbers;
int count;
moreNumbers = (int *)realloc(numbers, count*sizeof(int));


```