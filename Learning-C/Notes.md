Reviewing C
================


#### Malloc 


malloc()- Locates data outside of the program in the heap. 

Examples Syntax of malloc:

        ptr = (castType*) malloc(size);
  
 Malloc Example
 
 Locates 100 spaces in the heap
 
          ptr = (float*) malloc(100 * sizeof(float));

**Important Note** 

 **malloc() can only be free if it allocated memory in the heap or if the type is a null**



To destroy malloc() from memory use the free() function
