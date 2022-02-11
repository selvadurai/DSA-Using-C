Reviewing C
================

### Arrays

An array is considered to be the same thing as a pointer to the first item in the array.
 
 

![Array]()




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
