Reviewing C
================

### Reserverd Words


static - the variable or object stays in memory. 

For example 

     #include<stdio.h>
   
     int fun()
     {
      static int count = 0;
      count++;
      return count;
    }
  
     int main()
     {
       printf("%d ", fun());
       printf("%d ", fun());
       return 0;
     }

Output:
      1 2
     


register - stores the vairable in the CPU instead of RAM. Mostly used in loops



### Pointers

Pass by address vs pass by value

![PassbyPointer](https://github.com/selvadurai/DSA-Using-C/blob/main/Learning-C/Images/passBYPointer.jpg?raw=true)

![PassbyPointer](https://github.com/selvadurai/DSA-Using-C/blob/main/Learning-C/Images/pass.png?raw=true)


     // function definition to swap numbers
     void swap(int* n1, int* n2) {
        int temp;
        temp = *n1;
        *n1 = *n2;
        *n2 = temp;
      }
      
     // &a is address of a
     // &b is address of b
      swap(&a, &b);   
      
*n1 and *n2 gives the value stored at address n1 and n2 respectively.

Since n1 and n2 contain the addresses of a and b, anything is done to *n1 and *n2 will change the actual values of a and b.

Hence, when we print the values of a and b in the main() function, the values are changed.


### Structs

    struct account {
       int account_number;
    };
    

Both mean the same thing. Bother are pointers in the struct
 accountp->account_number is the same as *accountp).account_number;

**Important**


You use **.** when you're dealing with variables. You use **->** when you are dealing with pointers
    


### Arrays

An array is considered to be the same thing as a pointer to the first item in the array.
 
 

![Array](https://github.com/selvadurai/DSA-Using-C/blob/main/Learning-C/Images/arrayPoint.gif?raw=true)


Passing Array as Parameters

A[] is a pointer to a array

     void fun(int A[],int){
     
     }



A* means array as parameter

     void fun(int *A,int){
     
     }

Arrays can not be passed as value. They must be passed as address.

Arrays can only be passed as address!!!




#### Malloc 


malloc()- Locates data outside of the program in the heap and always returns a void pointer.  

Examples Syntax of malloc:

         int ptr*
         ptr = (castType*) malloc(size);
  
 Malloc Example
 
 Locates 100 spaces in the heap
 
          int ptr*
          ptr = (float*) malloc(100 * sizeof(float));

**Important Note** 


 **malloc() can only be free if it allocated memory in the heap or if the type is a null**


To destroy malloc() from memory use the free() function
